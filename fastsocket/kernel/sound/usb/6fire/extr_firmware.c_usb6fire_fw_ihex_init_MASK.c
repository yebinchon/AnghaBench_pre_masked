
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ihex_record {scalar_t__ txt_offset; scalar_t__ error; scalar_t__ max_len; int len; int txt_length; int txt_data; } ;
struct firmware {int size; int data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ihex_record*) ;

__attribute__((used)) static int FUNC_2(const struct firmware *VAR_1,
  struct ihex_record *VAR_2)
{
 VAR_2->txt_data = VAR_1->data;
 VAR_2->txt_length = VAR_1->size;
 VAR_2->txt_offset = 0;
 VAR_2->max_len = 0;


 while (FUNC_1(VAR_2))
  VAR_2->max_len = FUNC_0(VAR_2->len, VAR_2->max_len);
 if (VAR_2->error)
  return -VAR_0;
 VAR_2->txt_offset = 0;
 return 0;
}
