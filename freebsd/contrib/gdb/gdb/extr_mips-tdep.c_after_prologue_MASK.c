
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ end; } ;
typedef scalar_t__ mips_extra_func_info_t ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 struct symtab_and_line FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_5 (CORE_ADDR VAR_1, mips_extra_func_info_t VAR_2)
{
  struct symtab_and_line VAR_3;
  CORE_ADDR VAR_4, VAR_5;






  if (!VAR_2)
    VAR_2 = FUNC_4 (VAR_1, ((void*)0), 0);

  if (VAR_2)
    {


      if (FUNC_1 (VAR_2) == VAR_0
   && FUNC_0 (VAR_2) == 0)
 return 0;
    }

  if (!FUNC_3 (VAR_1, ((void*)0), &VAR_4, &VAR_5))
    return 0;

  VAR_3 = FUNC_2 (VAR_4, 0);

  if (VAR_3.end < VAR_5)
    return VAR_3.end;




  return 0;
}
