
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int bit_offset; int code_len; int bit_buf; } ;
struct archive_write_filter {struct private_data* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_write_filter*,int ) ;

__attribute__((used)) static int
FUNC_1(struct archive_write_filter *VAR_1)
{
 struct private_data *VAR_2 = VAR_1->data;
 int VAR_3;


 if (VAR_2->bit_offset % 8) {
  VAR_2->code_len = (VAR_2->bit_offset % 8 + 7) / 8;
  VAR_3 = FUNC_0(VAR_1, VAR_2->bit_buf);
  if (VAR_3 != VAR_0)
   return VAR_3;
 }

 return (VAR_0);
}
