
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {int dummy; } ;
typedef int asection ;
typedef int CORE_ADDR ;


 int * FUNC_0 (int ) ;
 struct symtab_and_line FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

struct symtab_and_line
FUNC_4 (CORE_ADDR VAR_0, int VAR_1)
{
  asection *VAR_2;

  VAR_2 = FUNC_0 (VAR_0);
  if (FUNC_3 (VAR_0, VAR_2))
    VAR_0 = FUNC_2 (VAR_0, VAR_2);
  return FUNC_1 (VAR_0, VAR_2, VAR_1);
}
