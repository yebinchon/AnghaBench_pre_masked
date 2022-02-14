
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,int ,int ,char*) ;
 struct cmd_list_element* FUNC_1 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_2 (struct cmd_list_element*,int *) ;
 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct cmd_list_element*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;

void
FUNC_5 (void)
{
  struct cmd_list_element *VAR_18;

  VAR_18 = FUNC_1 ("width", VAR_2, VAR_16, &VAR_1,
     "Set number of characters gdb thinks are in a line.",
     &VAR_10);
  FUNC_2 (VAR_18, &VAR_13);
  FUNC_4 (VAR_18, VAR_9);

  VAR_18 = FUNC_1 ("height", VAR_2, VAR_16, &VAR_4,
     "Set number of lines gdb thinks are in a page.", &VAR_10);
  FUNC_2 (VAR_18, &VAR_13);
  FUNC_4 (VAR_18, VAR_8);

  FUNC_3 ();

  FUNC_2
    (FUNC_1 ("demangle", VAR_2, VAR_15,
    (char *) &VAR_3,
    "Set demangling of encoded C++/ObjC names when displaying symbols.",
    &VAR_11), &VAR_14);

  FUNC_2
    (FUNC_1 ("pagination", VAR_2,
    VAR_15, (char *) &VAR_5,
    "Set state of pagination.", &VAR_10), &VAR_13);

  if (VAR_17)
    {
      FUNC_0 ("am", VAR_2, VAR_7,
        "Enable pagination");
      FUNC_0 ("sm", VAR_2, VAR_6,
        "Disable pagination");
    }

  FUNC_2
    (FUNC_1 ("sevenbit-strings", VAR_2, VAR_15,
    (char *) &VAR_12,
    "Set printing of 8-bit characters in strings as \\nnn.",
    &VAR_11), &VAR_14);

  FUNC_2
    (FUNC_1 ("asm-demangle", VAR_2, VAR_15,
    (char *) &VAR_0,
    "Set demangling of C++/ObjC names in disassembly listings.",
    &VAR_11), &VAR_14);
}
