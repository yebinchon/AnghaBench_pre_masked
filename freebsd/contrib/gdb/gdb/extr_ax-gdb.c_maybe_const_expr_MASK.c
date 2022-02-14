
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union exp_element {int dummy; } exp_element ;
struct value {int dummy; } ;


 struct value* FUNC_0 (union exp_element**) ;

__attribute__((used)) static struct value *
FUNC_1 (union exp_element **VAR_0)
{
  union exp_element *VAR_1 = *VAR_0;
  struct value *VAR_2 = FUNC_0 (&VAR_1);


  if (VAR_2)
    *VAR_0 = VAR_1;

  return VAR_2;
}
