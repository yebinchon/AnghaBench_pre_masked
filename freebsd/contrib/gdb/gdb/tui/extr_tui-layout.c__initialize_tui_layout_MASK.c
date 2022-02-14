
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_1 (void)
{
  FUNC_0 ("layout", VAR_0, VAR_1,
           "Change the layout of windows.\nUsage: layout prev | next | <layout_name> \nLayout names are:\n   src   : Displays source and command windows.\n   asm   : Displays disassembly and command windows.\n   split : Displays source, disassembly and command windows.\n   regs  : Displays register window. If existing layout\n           is source/command or assembly/command, the \n           register window is displayed. If the\n           source/assembly/command (split) is displayed, \n           the register window is displayed with \n           the window that has current logical focus.\n");
  if (VAR_4)
    {
      FUNC_0 ("td", VAR_0, VAR_2,
               "Toggle between Source/Command and Disassembly/Command layouts.\n");
      FUNC_0 ("ts", VAR_0, VAR_3,
               "Toggle between Source/Command or Disassembly/Command and \nSource/Disassembly/Command layouts.\n");

    }
}
