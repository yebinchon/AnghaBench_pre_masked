
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ line; scalar_t__ end; scalar_t__ symtab; } ;
typedef scalar_t__ CORE_ADDR ;


 struct symtab_and_line FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (CORE_ADDR VAR_1, CORE_ADDR VAR_2)
{
  struct symtab_and_line VAR_3;

  VAR_3 = FUNC_0 (VAR_1, 0);
  if (VAR_3.line != 0)
    {
      int VAR_4;
      CORE_ADDR VAR_5 = VAR_3.end;
      for (VAR_4 = 2 * VAR_0;
           VAR_4 > 0 && (VAR_2 == 0 || VAR_5 < VAR_2);
    VAR_4--)
        {
   struct symtab_and_line VAR_6;

   VAR_6 = FUNC_0 (VAR_5, 0);
   if (VAR_6.line == 0)
     break;
   if (VAR_6.line <= VAR_3.line
       && VAR_6.symtab == VAR_3.symtab)
     {
       VAR_3 = VAR_6;
     }
   VAR_5 = VAR_6.end;
 }

      if (VAR_2 == 0 || VAR_3.end < VAR_2)
 VAR_2 = VAR_3.end;
    }
  return VAR_2;
}
