
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ end; } ;
typedef scalar_t__ CORE_ADDR ;


 struct symtab_and_line FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int *,scalar_t__*,scalar_t__*) ;

CORE_ADDR
FUNC_2 (CORE_ADDR VAR_0)
{
  struct symtab_and_line VAR_1;
  CORE_ADDR VAR_2, VAR_3;

  if (!FUNC_1 (VAR_0, ((void*)0), &VAR_2, &VAR_3))
    return 0;

  VAR_1 = FUNC_0 (VAR_2, 0);
  if (VAR_1.end < VAR_3)
    return VAR_1.end;



  return 0;
}
