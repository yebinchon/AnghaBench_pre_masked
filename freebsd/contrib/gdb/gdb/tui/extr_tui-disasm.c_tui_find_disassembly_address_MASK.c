
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_asm_line {scalar_t__ addr; int insn; int addr_string; } ;
struct minimal_symbol {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct minimal_symbol*) ;
 scalar_t__ FUNC_1 (int) ;
 struct minimal_symbol* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct tui_asm_line*,int ,int) ;
 scalar_t__ FUNC_4 (struct tui_asm_line*,scalar_t__,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_6 (CORE_ADDR VAR_0, int VAR_1)
{
  CORE_ADDR VAR_2;
  int VAR_3;
  int VAR_4;
  struct tui_asm_line* VAR_5;

  VAR_3 = (VAR_1 > 0) ? VAR_1 : - VAR_1;
  if (VAR_3 <= 1)
     return VAR_0;

  VAR_5 = (struct tui_asm_line*) FUNC_1 (sizeof (struct tui_asm_line)
                                         * VAR_3);
  FUNC_3 (VAR_5, 0, sizeof (struct tui_asm_line) * VAR_3);

  VAR_2 = VAR_0;
  if (VAR_1 > 0)
    {
      FUNC_4 (VAR_5, VAR_0, VAR_3);
      VAR_2 = VAR_5[VAR_3 - 1].addr;
    }
  else
    {
      CORE_ADDR VAR_6;
      int VAR_7;
      struct minimal_symbol* VAR_8;




      VAR_7 = VAR_3 - 1;
      do {
         VAR_2 -= 1 * VAR_3;
         VAR_8 = FUNC_2 (VAR_2, 0);

         if (VAR_8)
            VAR_2 = FUNC_0 (VAR_8);
         else
            VAR_2 += 1 * VAR_3;

         FUNC_4 (VAR_5, VAR_2, VAR_3);
         VAR_6 = VAR_5[VAR_7].addr;
      } while (VAR_6 > VAR_0 && VAR_8);






      if (VAR_6 < VAR_0)
        do
          {
            CORE_ADDR VAR_9;

            VAR_7++;
            if (VAR_7 >= VAR_3)
              VAR_7 = 0;

            VAR_9 = FUNC_4 (&VAR_5[VAR_7], VAR_6, 1);


            if (VAR_9 <= VAR_6)
              break;
            VAR_6 = VAR_9;
          } while (VAR_6 <= VAR_0);
      VAR_7++;
      if (VAR_7 >= VAR_3)
         VAR_7 = 0;
      VAR_2 = VAR_5[VAR_7].addr;
    }
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
      FUNC_5 (VAR_5[VAR_4].addr_string);
      FUNC_5 (VAR_5[VAR_4].insn);
    }
  return VAR_2;
}
