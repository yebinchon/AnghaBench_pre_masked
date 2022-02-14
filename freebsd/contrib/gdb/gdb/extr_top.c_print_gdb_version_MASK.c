
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 int FUNC_0 (struct ui_file*,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_2 (struct ui_file *VAR_3)
{




  FUNC_0 (VAR_3, "GNU gdb %s\n", VAR_2);



  FUNC_0 (VAR_3, "Copyright 2004 Free Software Foundation, Inc.\n");






  FUNC_0 (VAR_3, "GDB is free software, covered by the GNU General Public License, and you are\nwelcome to change it and/or distribute copies of it under certain conditions.\nType \"show copying\" to see the conditions.\nThere is absolutely no warranty for GDB.  Type \"show warranty\" for details.\n");







  FUNC_0 (VAR_3, "This GDB was configured as \"");
  if (FUNC_1 (VAR_0, VAR_1) != 0)
    {
      FUNC_0 (VAR_3, "--host=%s --target=%s", VAR_0, VAR_1);
    }
  else
    {
      FUNC_0 (VAR_3, "%s", VAR_0);
    }
  FUNC_0 (VAR_3, "\".");
}
