
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_pre_extension_expr {size_t bitmap_index; } ;



__attribute__((used)) static int
FUNC_0 (void **VAR_0, void *VAR_1)
{
  struct see_pre_extension_expr *VAR_2 = *VAR_0;
  struct see_pre_extension_expr **VAR_3 =
    (struct see_pre_extension_expr **) VAR_1;

  VAR_3[VAR_2->bitmap_index] = VAR_2;

  return 1;
}
