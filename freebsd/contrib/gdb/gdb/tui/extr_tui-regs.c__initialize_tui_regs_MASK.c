
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,int ,int ,char*,int *) ;
 int FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (char*,int ,int ,char*,int *,char*,int ,struct cmd_list_element**) ;
 int VAR_0 ;
 struct cmd_list_element** FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

void
FUNC_4 (void)
{
  struct cmd_list_element **VAR_10;

  VAR_10 = FUNC_3 ();

  FUNC_2 ("reg", VAR_0, VAR_1,
                  "TUI commands to control the register window.",
                  &VAR_8, "tui reg ", 0,
                  VAR_10);

  FUNC_0 ("float", VAR_0, VAR_2,
           "Display only floating point registers\n",
           &VAR_8);
  FUNC_0 ("general", VAR_0, VAR_3,
           "Display only general registers\n",
           &VAR_8);
  FUNC_0 ("system", VAR_0, VAR_5,
           "Display only system registers\n",
           &VAR_8);
  FUNC_0 ("next", VAR_0, VAR_4,
           "Display next register group\n",
           &VAR_8);

  if (VAR_9)
    {
      FUNC_1 ("fr", VAR_0, VAR_2,
        "Display only floating point registers\n");
      FUNC_1 ("gr", VAR_0, VAR_3,
        "Display only general registers\n");
      FUNC_1 ("sr", VAR_0, VAR_5,
        "Display only special registers\n");
      FUNC_1 ("+r", VAR_0, VAR_7,
        "Scroll the registers window forward\n");
      FUNC_1 ("-r", VAR_0, VAR_6,
        "Scroll the register window backward\n");
    }
}
