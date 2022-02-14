
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int bit_offset; int bit_buf; int code_len; scalar_t__ first_free; scalar_t__ cur_maxcode; scalar_t__ max_maxcode; } ;
struct archive_write_filter {struct private_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct archive_write_filter*,int) ;
 int* VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct archive_write_filter *VAR_3, int VAR_4)
{
 struct private_data *VAR_5 = VAR_3->data;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_8 = VAR_4 == VAR_1;





 VAR_9 = VAR_5->bit_offset % 8;
 VAR_5->bit_buf |= (VAR_4 << VAR_9) & 0xff;
 FUNC_1(VAR_3, VAR_5->bit_buf);

 VAR_6 = VAR_5->code_len - (8 - VAR_9);
 VAR_4 >>= 8 - VAR_9;

 if (VAR_6 >= 8) {
  FUNC_1(VAR_3, VAR_4 & 0xff);
  VAR_4 >>= 8;
  VAR_6 -= 8;
 }

 VAR_5->bit_offset += VAR_5->code_len;
 VAR_5->bit_buf = VAR_4 & VAR_2[VAR_6];
 if (VAR_5->bit_offset == VAR_5->code_len * 8)
  VAR_5->bit_offset = 0;





 if (VAR_8 || VAR_5->first_free > VAR_5->cur_maxcode) {




  if (VAR_5->bit_offset > 0) {
   while (VAR_5->bit_offset < VAR_5->code_len * 8) {
    VAR_7 = FUNC_1(VAR_3, VAR_5->bit_buf);
    if (VAR_7 != VAR_0)
     return VAR_7;
    VAR_5->bit_offset += 8;
    VAR_5->bit_buf = 0;
   }
  }
  VAR_5->bit_buf = 0;
  VAR_5->bit_offset = 0;

  if (VAR_8) {
   VAR_5->code_len = 9;
   VAR_5->cur_maxcode = FUNC_0(VAR_5->code_len);
  } else {
   VAR_5->code_len++;
   if (VAR_5->code_len == 16)
    VAR_5->cur_maxcode = VAR_5->max_maxcode;
   else
    VAR_5->cur_maxcode = FUNC_0(VAR_5->code_len);
  }
 }

 return (VAR_0);
}
