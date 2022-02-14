
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union exp_element {int dummy; } exp_element ;
struct expression {union exp_element* elts; } ;


 scalar_t__ FUNC_0 (int) ;
 struct expression* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,scalar_t__) ;

void
FUNC_2 (union exp_element VAR_3)
{
  if (VAR_1 >= VAR_2)
    {
      VAR_2 *= 2;
      VAR_0 = (struct expression *)
 FUNC_1 ((char *) VAR_0, sizeof (struct expression)
    + FUNC_0 (VAR_2));
    }
  VAR_0->elts[VAR_1++] = VAR_3;
}
