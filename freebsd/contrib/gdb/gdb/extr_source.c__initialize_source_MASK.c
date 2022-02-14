
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int VAR_0 ;
 struct cmd_list_element* FUNC_0 (char*,int ,int ,char*,int *) ;
 int FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (char*,char*,int ,int ) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_6 (char*,char*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int ) ;
 int VAR_12 ;
 int FUNC_9 (struct cmd_list_element*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;

void
FUNC_10 (void)
{
  struct cmd_list_element *VAR_19;
  VAR_4 = 0;
  FUNC_7 ();





  FUNC_8 (VAR_0);

  VAR_19 = FUNC_0 ("directory", VAR_1, VAR_6,
        "Add directory DIR to beginning of search path for source files.\nForget cached info on source file locations and line positions.\nDIR can also be $cwd for the current working directory, or $cdir for the\ndirectory in which the source file was compiled into object code.\nWith no argument, reset the search path to $cdir:$cwd, the default.",




        &VAR_3);

  if (VAR_5)
    FUNC_2 ("use", "directory", VAR_1, 0);

  FUNC_9 (VAR_19, VAR_7);

  FUNC_0 ("directories", VAR_11, VAR_14,
    "Current search path for finding source files.\n$cwd in the path means the current working directory.\n$cdir in the path means the compilation directory of the source file.",


    &VAR_15);

  if (VAR_18)
    {
      FUNC_2 ("D", "directory", VAR_1, 0);
      FUNC_0 ("ld", VAR_11, VAR_14,
        "Current search path for finding source files.\n$cwd in the path means the current working directory.\n$cdir in the path means the compilation directory of the source file.",


        &VAR_3);
    }

  FUNC_3 ("source", VAR_16,
     "Information about the current source file.");

  FUNC_3 ("line", VAR_9,
     FUNC_6 ("Core addresses of the code for a source line.\nLine can be specified as\n  LINENUM, to list around that line in current file,\n  FILE:LINENUM, to list around that line in that file,\n  FUNCTION, to list around beginning of that function,\n  FILE:FUNCTION, to distinguish among like-named static functions.\n", "Default is to describe the last source line that was listed.\n\nThis sets the default address for \"x\" to the line's first instruction\nso that \"x/i\" suffices to start examining the machine code.\nThe address is also stored as the value of \"$_\".", ((void*)0)));
  FUNC_1 ("forward-search", VAR_1, VAR_8,
    "Search for regular expression (see regex(3)) from last line listed.\nThe matching line number is also stored as the value of \"$_\".");

  FUNC_2 ("search", "forward-search", VAR_1, 0);

  FUNC_1 ("reverse-search", VAR_1, VAR_12,
    "Search backward for regular expression (see regex(3)) from last line listed.\nThe matching line number is also stored as the value of \"$_\".");


  if (VAR_18)
    {
      FUNC_2 ("/", "forward-search", VAR_1, 0);
      FUNC_2 ("?", "reverse-search", VAR_1, 0);
    }

  FUNC_5
    (FUNC_4 ("listsize", VAR_2, VAR_17,
    (char *) &VAR_10,
    "Set number of source lines gdb will list by default.",
    &VAR_13),
     &VAR_15);
}
