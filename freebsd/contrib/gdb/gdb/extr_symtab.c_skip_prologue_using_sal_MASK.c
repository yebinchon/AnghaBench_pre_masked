
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ line; scalar_t__ end; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 struct symtab_and_line FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int *,scalar_t__*,scalar_t__*) ;

CORE_ADDR
FUNC_2 (CORE_ADDR VAR_1)
{
  struct symtab_and_line VAR_2;
  CORE_ADDR VAR_3;
  CORE_ADDR VAR_4;


  FUNC_1 (VAR_1, ((void*)0), &VAR_3, &VAR_4);
  VAR_3 += VAR_0;

  VAR_2 = FUNC_0 (VAR_3, 0);
  if (VAR_2.line != 0)
    {
      while (VAR_2.end < VAR_4)
 {
   struct symtab_and_line VAR_5;

   VAR_5 = FUNC_0 (VAR_2.end, 0);
   if (VAR_5.line == 0)
     break;


   if (VAR_5.line >= VAR_2.line)
     break;







   VAR_2 = VAR_5;
 }
    }
  return VAR_2.end;
}
