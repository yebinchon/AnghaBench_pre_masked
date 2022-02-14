
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int in_count; int cur_code; int cur_fcode; int* hashtab; int* codetab; scalar_t__ first_free; scalar_t__ max_maxcode; int checkpoint; int out_count; int compress_ratio; } ;
struct archive_write_filter {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (struct archive_write_filter*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_write_filter *VAR_6,
    const void *VAR_7, size_t VAR_8)
{
 struct private_data *VAR_9 = (struct private_data *)VAR_6->data;
 int VAR_10;
 int VAR_11;
 int VAR_12, VAR_13, VAR_14;
 const unsigned char *VAR_15;

 if (VAR_8 == 0)
  return VAR_0;

 VAR_15 = VAR_7;

 if (VAR_9->in_count == 0) {
  VAR_9->cur_code = *VAR_15++;
  ++VAR_9->in_count;
  --VAR_8;
 }

 while (VAR_8--) {
  VAR_12 = *VAR_15++;
  VAR_9->in_count++;
  VAR_9->cur_fcode = (VAR_12 << 16) + VAR_9->cur_code;
  VAR_10 = ((VAR_12 << VAR_4) ^ VAR_9->cur_code);

  if (VAR_9->hashtab[VAR_10] == VAR_9->cur_fcode) {
   VAR_9->cur_code = VAR_9->codetab[VAR_10];
   continue;
  }
  if (VAR_9->hashtab[VAR_10] < 0)
   goto nomatch;

  if (VAR_10 == 0)
   VAR_13 = 1;
  else
   VAR_13 = VAR_5 - VAR_10;
 probe:
  if ((VAR_10 -= VAR_13) < 0)
   VAR_10 += VAR_5;

  if (VAR_9->hashtab[VAR_10] == VAR_9->cur_fcode) {
   VAR_9->cur_code = VAR_9->codetab[VAR_10];
   continue;
  }
  if (VAR_9->hashtab[VAR_10] >= 0)
   goto probe;
 nomatch:
  VAR_14 = FUNC_1(VAR_6, VAR_9->cur_code);
  if (VAR_14 != VAR_0)
   return VAR_14;
  VAR_9->cur_code = VAR_12;
  if (VAR_9->first_free < VAR_9->max_maxcode) {
   VAR_9->codetab[VAR_10] = VAR_9->first_free++;
   VAR_9->hashtab[VAR_10] = VAR_9->cur_fcode;
   continue;
  }
  if (VAR_9->in_count < VAR_9->checkpoint)
   continue;

  VAR_9->checkpoint = VAR_9->in_count + VAR_1;

  if (VAR_9->in_count <= 0x007fffff && VAR_9->out_count != 0)
   VAR_11 = (int)(VAR_9->in_count * 256 / VAR_9->out_count);
  else if ((VAR_11 = (int)(VAR_9->out_count / 256)) == 0)
   VAR_11 = 0x7fffffff;
  else
   VAR_11 = (int)(VAR_9->in_count / VAR_11);

  if (VAR_11 > VAR_9->compress_ratio)
   VAR_9->compress_ratio = VAR_11;
  else {
   VAR_9->compress_ratio = 0;
   FUNC_0(VAR_9->hashtab, 0xff, sizeof(VAR_9->hashtab));
   VAR_9->first_free = VAR_3;
   VAR_14 = FUNC_1(VAR_6, VAR_2);
   if (VAR_14 != VAR_0)
    return VAR_14;
  }
 }

 return (VAR_0);
}
