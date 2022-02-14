
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ line; scalar_t__ end; scalar_t__ symtab; } ;
typedef scalar_t__ CORE_ADDR ;


 struct symtab_and_line FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (CORE_ADDR VAR_1, CORE_ADDR VAR_2, int *VAR_3)
{
  struct symtab_and_line VAR_4;
  CORE_ADDR VAR_5 = VAR_1;


  *VAR_3 = 0;

  VAR_4 = FUNC_0 (VAR_1, 0);
  if (VAR_4.line != 0)
    {
      int VAR_6;
      CORE_ADDR VAR_7 = VAR_4.end;
      for (VAR_6 = 2 * VAR_0;
           VAR_6 > 0 && (VAR_2 == 0 || VAR_7 < VAR_2);
    VAR_6--)
        {
   struct symtab_and_line VAR_8;

   VAR_8 = FUNC_0 (VAR_7, 0);
   if (VAR_8.line == 0)
     break;
   if (VAR_8.line <= VAR_4.line
       && VAR_8.symtab == VAR_4.symtab)
     {
       VAR_4 = VAR_8;
     }
   VAR_7 = VAR_8.end;
 }

      if (VAR_2 == 0 || VAR_4.end < VAR_2)
 {
   VAR_2 = VAR_4.end;
   if (VAR_5 == FUNC_1 (VAR_2))
     *VAR_3 = 1;
 }
    }
  return VAR_2;
}
