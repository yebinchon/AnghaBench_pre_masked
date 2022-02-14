
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct archive_read_filter {scalar_t__ end_of_file; scalar_t__ position; int buffer; int next; scalar_t__ client_avail; scalar_t__ avail; TYPE_1__* archive; int * seek; scalar_t__ fatal; scalar_t__ closed; } ;
struct archive_read_client {unsigned int nodes; TYPE_2__* dataset; } ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ begin_position; scalar_t__ total_size; } ;
struct TYPE_3__ {struct archive_read_client client; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 scalar_t__ FUNC_0 (struct archive_read_filter*,scalar_t__,int const) ;
 scalar_t__ FUNC_1 (struct archive_read_filter*,unsigned int) ;

int64_t
FUNC_2(struct archive_read_filter *VAR_4, int64_t VAR_5,
    int VAR_6)
{
 struct archive_read_client *VAR_7;
 int64_t VAR_8;
 unsigned int VAR_9;

 if (VAR_4->closed || VAR_4->fatal)
  return (VAR_1);
 if (VAR_4->seek == ((void*)0))
  return (VAR_0);

 VAR_7 = &(VAR_4->archive->client);
 switch (VAR_6) {
 case 130:

  VAR_5 += VAR_4->position;
  VAR_3;
 case 128:
  VAR_9 = 0;
  while (1)
  {
   if (VAR_7->dataset[VAR_9].begin_position < 0 ||
       VAR_7->dataset[VAR_9].total_size < 0 ||
       VAR_7->dataset[VAR_9].begin_position +
         VAR_7->dataset[VAR_9].total_size - 1 > VAR_5 ||
       VAR_9 + 1 >= VAR_7->nodes)
    break;
   VAR_8 = VAR_7->dataset[VAR_9].begin_position +
    VAR_7->dataset[VAR_9].total_size;
   VAR_7->dataset[++VAR_9].begin_position = VAR_8;
  }
  while (1) {
   VAR_8 = FUNC_1(VAR_4, VAR_9);
   if (VAR_8 != VAR_2)
    return VAR_8;
   if ((VAR_8 = FUNC_0(VAR_4, 0, 129)) < 0)
    return VAR_8;
   VAR_7->dataset[VAR_9].total_size = VAR_8;
   if (VAR_7->dataset[VAR_9].begin_position +
       VAR_7->dataset[VAR_9].total_size - 1 > VAR_5 ||
       VAR_9 + 1 >= VAR_7->nodes)
    break;
   VAR_8 = VAR_7->dataset[VAR_9].begin_position +
    VAR_7->dataset[VAR_9].total_size;
   VAR_7->dataset[++VAR_9].begin_position = VAR_8;
  }
  VAR_5 -= VAR_7->dataset[VAR_9].begin_position;
  if (VAR_5 < 0
      || VAR_5 > VAR_7->dataset[VAR_9].total_size)
   return VAR_1;
  if ((VAR_8 = FUNC_0(VAR_4, VAR_5, 128)) < 0)
   return VAR_8;
  break;

 case 129:
  VAR_9 = 0;
  while (1) {
   if (VAR_7->dataset[VAR_9].begin_position < 0 ||
       VAR_7->dataset[VAR_9].total_size < 0 ||
       VAR_9 + 1 >= VAR_7->nodes)
    break;
   VAR_8 = VAR_7->dataset[VAR_9].begin_position +
    VAR_7->dataset[VAR_9].total_size;
   VAR_7->dataset[++VAR_9].begin_position = VAR_8;
  }
  while (1) {
   VAR_8 = FUNC_1(VAR_4, VAR_9);
   if (VAR_8 != VAR_2)
    return VAR_8;
   if ((VAR_8 = FUNC_0(VAR_4, 0, 129)) < 0)
    return VAR_8;
   VAR_7->dataset[VAR_9].total_size = VAR_8;
   VAR_8 = VAR_7->dataset[VAR_9].begin_position +
    VAR_7->dataset[VAR_9].total_size;
   if (VAR_9 + 1 >= VAR_7->nodes)
    break;
   VAR_7->dataset[++VAR_9].begin_position = VAR_8;
  }
  while (1) {
   if (VAR_8 + VAR_5 >=
       VAR_7->dataset[VAR_9].begin_position)
    break;
   VAR_5 += VAR_7->dataset[VAR_9].total_size;
   if (VAR_9 == 0)
    break;
   VAR_9--;
   VAR_8 = VAR_7->dataset[VAR_9].begin_position +
    VAR_7->dataset[VAR_9].total_size;
  }
  VAR_5 = (VAR_8 + VAR_5) - VAR_7->dataset[VAR_9].begin_position;
  if ((VAR_8 = FUNC_1(VAR_4, VAR_9)) != VAR_2)
   return VAR_8;
  VAR_8 = FUNC_0(VAR_4, VAR_5, 128);
  if (VAR_8 < VAR_2)
   return VAR_8;
  break;

 default:
  return (VAR_1);
 }
 VAR_8 += VAR_7->dataset[VAR_9].begin_position;

 if (VAR_8 >= 0) {
  VAR_4->avail = VAR_4->client_avail = 0;
  VAR_4->next = VAR_4->buffer;
  VAR_4->position = VAR_8;
  VAR_4->end_of_file = 0;
 }
 return VAR_8;
}
