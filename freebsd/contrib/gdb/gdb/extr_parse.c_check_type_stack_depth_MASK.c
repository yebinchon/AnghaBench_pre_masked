
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union type_stack_elt {int dummy; } type_stack_elt ;


 union type_stack_elt* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  if (VAR_1 == VAR_2)
    {
      VAR_2 *= 2;
      VAR_0 = (union type_stack_elt *)
 FUNC_0 ((char *) VAR_0, VAR_2 * sizeof (*VAR_0));
    }
}
