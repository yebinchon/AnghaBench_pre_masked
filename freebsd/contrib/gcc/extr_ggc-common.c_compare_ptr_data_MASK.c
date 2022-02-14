
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_data {scalar_t__ new_addr; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  struct ptr_data *VAR_2 = *(struct ptr_data *const *)VAR_0;
  struct ptr_data *VAR_3 = *(struct ptr_data *const *)VAR_1;
  return (((size_t)VAR_2->new_addr > (size_t)VAR_3->new_addr)
   - ((size_t)VAR_2->new_addr < (size_t)VAR_3->new_addr));
}
