
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {unsigned char* compressed; scalar_t__ compressed_offset; scalar_t__ compressed_buffer_size; int out_count; } ;
struct archive_write_filter {int next_filter; struct private_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct archive_write_filter *VAR_2, unsigned char VAR_3)
{
 struct private_data *VAR_4 = VAR_2->data;

 VAR_4->compressed[VAR_4->compressed_offset++] = VAR_3;
 ++VAR_4->out_count;

 if (VAR_4->compressed_buffer_size == VAR_4->compressed_offset) {
  int VAR_5 = FUNC_0(VAR_2->next_filter,
      VAR_4->compressed, VAR_4->compressed_buffer_size);
  if (VAR_5 != VAR_1)
   return VAR_0;
  VAR_4->compressed_offset = 0;
 }

 return VAR_1;
}
