
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ line; scalar_t__ end; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct symtab_and_line FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int *,scalar_t__*,scalar_t__*) ;

int
FUNC_3 (CORE_ADDR VAR_0, CORE_ADDR VAR_1)
{
  struct symtab_and_line VAR_2;
  CORE_ADDR VAR_3, VAR_4;
  if (! FUNC_2 (VAR_0, ((void*)0), &VAR_3, &VAR_4))
    {
      CORE_ADDR VAR_5;



      if (! VAR_1)
 return 1;

      VAR_5 = FUNC_0 (VAR_1);

      return VAR_1 <= VAR_0 && VAR_0 < VAR_5;
    }



  VAR_2 = FUNC_1 (VAR_3, 0);
  if (VAR_2.line == 0
      || VAR_2.end <= VAR_3
      || VAR_4 <= VAR_2.end)
    {



      CORE_ADDR VAR_6 = FUNC_0 (VAR_3);

      return VAR_3 <= VAR_0 && VAR_0 < VAR_6;
    }


  return VAR_3 <= VAR_0 && VAR_0 < VAR_2.end;
}
