
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* dd_parent; } ;
typedef TYPE_1__ dsl_dir_t ;



__attribute__((used)) static dsl_dir_t *
FUNC_0(dsl_dir_t *VAR_0, dsl_dir_t *VAR_1)
{
 for (; VAR_0; VAR_0 = VAR_0->dd_parent) {
  dsl_dir_t *VAR_2;
  for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->dd_parent) {
   if (VAR_0 == VAR_2)
    return (VAR_2);
  }
 }
 return (((void*)0));
}
