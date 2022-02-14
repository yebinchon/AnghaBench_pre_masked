
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (char*,char*,int ,int ) ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (char*,int ,int ,char*,struct cmd_list_element**,char*,int ,int *) ;
 struct cmd_list_element* FUNC_4 (char*,int ,int ,int *,char*,struct cmd_list_element**) ;
 int FUNC_5 (struct cmd_list_element*,struct cmd_list_element**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;

void
FUNC_6 (void)
{
  struct cmd_list_element *VAR_23;
  static struct cmd_list_element *VAR_24;
  static struct cmd_list_element *VAR_25;



  FUNC_3 ("tui", VAR_0, VAR_3,
                  "TUI configuration variables",
    &VAR_24, "set tui ",
    0 , &VAR_4);
  FUNC_3 ("tui", VAR_0, VAR_5,
                  "TUI configuration variables",
    &VAR_25, "show tui ",
    0 , &VAR_6);

  FUNC_0 ("refresh", VAR_0, VAR_13,
           "Refresh the terminal display.\n");
  if (VAR_22)
    FUNC_1 ("U", "refresh", VAR_0, 0);
  FUNC_0 ("tabset", VAR_0, VAR_19,
           "Set the width (in characters) of tab stops.\nUsage: tabset <n>\n");

  FUNC_0 ("winheight", VAR_0, VAR_20,
           "Set the height of a specified window.\nUsage: winheight <win_name> [+ | -] <#lines>\nWindow names are:\nsrc  : the source window\ncmd  : the command window\nasm  : the disassembly window\nregs : the register display\n");






  FUNC_1 ("wh", "winheight", VAR_0, 0);
  FUNC_2 ("win", VAR_8,
            "List of all displayed windows.\n");
  FUNC_0 ("focus", VAR_0, VAR_18,
           "Set focus to named window or next/prev window.\nUsage: focus {<win> | next | prev}\nValid Window names are:\nsrc  : the source window\nasm  : the disassembly window\nregs : the register display\ncmd  : the command window\n");






  FUNC_1 ("fs", "focus", VAR_0, 0);
  FUNC_0 ("+", VAR_0, VAR_15,
           "Scroll window forward.\nUsage: + [win] [n]\n");
  FUNC_0 ("-", VAR_0, VAR_14,
           "Scroll window backward.\nUsage: - [win] [n]\n");
  FUNC_0 ("<", VAR_0, VAR_16,
           "Scroll window forward.\nUsage: < [win] [n]\n");
  FUNC_0 (">", VAR_0, VAR_17,
           "Scroll window backward.\nUsage: > [win] [n]\n");
  if (VAR_22)
    FUNC_0 ("w", VAR_1, VAR_21,
             "XDB compatibility command for setting the height of a command window.\nUsage: w <#lines>\n");



  VAR_23 = FUNC_4
    ("border-kind", VAR_2,
     VAR_10, &VAR_9,
     "Set the kind of border for TUI windows.\n"
     "This variable controls the border of TUI windows:\n"
     "space           use a white space\n"
     "ascii           use ascii characters + - | for the border\n"
     "acs             use the Alternate Character Set\n",
     &VAR_24);
  FUNC_5 (VAR_23, &VAR_25);

  VAR_23 = FUNC_4
    ("border-mode", VAR_2,
     VAR_12, &VAR_11,
     "Set the attribute mode to use for the TUI window borders.\n"
     "This variable controls the attributes to use for the window borders:\n"
     "normal          normal display\n"
     "standout        use highlight mode of terminal\n"
     "reverse         use reverse video mode\n"
     "half            use half bright\n"
     "half-standout   use half bright and standout mode\n"
     "bold            use extra bright or bold\n"
     "bold-standout   use extra bright or bold with standout mode\n",
     &VAR_24);
  FUNC_5 (VAR_23, &VAR_25);

  VAR_23 = FUNC_4
    ("active-border-mode", VAR_2,
     VAR_12, &VAR_7,
     "Set the attribute mode to use for the active TUI window border.\n"
     "This variable controls the attributes to use for the active window border:\n"
     "normal          normal display\n"
     "standout        use highlight mode of terminal\n"
     "reverse         use reverse video mode\n"
     "half            use half bright\n"
     "half-standout   use half bright and standout mode\n"
     "bold            use extra bright or bold\n"
     "bold-standout   use extra bright or bold with standout mode\n",
     &VAR_24);
  FUNC_5 (VAR_23, &VAR_25);
}
