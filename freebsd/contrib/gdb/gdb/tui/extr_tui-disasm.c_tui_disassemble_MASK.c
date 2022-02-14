
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct tui_asm_line {void* insn; void* addr_string; scalar_t__ addr; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__,struct ui_file*) ;
 int FUNC_1 (scalar_t__,struct ui_file*) ;
 int FUNC_2 (struct ui_file*) ;
 struct ui_file* FUNC_3 (int) ;
 int FUNC_4 (struct ui_file*) ;
 int FUNC_5 (struct ui_file*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_8 (struct tui_asm_line* VAR_0, CORE_ADDR VAR_1, int VAR_2)
{
  struct ui_file *VAR_3;


  VAR_3 = FUNC_3 (256);


  for (; VAR_2 > 0; VAR_2--, VAR_0++)
    {
      if (VAR_0->addr_string)
        FUNC_6 (VAR_0->addr_string);
      if (VAR_0->insn)
        FUNC_6 (VAR_0->insn);

      FUNC_1 (VAR_1, VAR_3);
      VAR_0->addr = VAR_1;
      VAR_0->addr_string = FUNC_7 (FUNC_2 (VAR_3));

      FUNC_5 (VAR_3);

      VAR_1 = VAR_1 + FUNC_0 (VAR_1, VAR_3);

      VAR_0->insn = FUNC_7 (FUNC_2 (VAR_3));


      FUNC_5 (VAR_3);
    }
  FUNC_4 (VAR_3);
  return VAR_1;
}
