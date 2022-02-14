
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,char*,int ,int,int *) ;
 int FUNC_1 (char*,int ,int ,char*,int *) ;
 int FUNC_2 (char*,char*,int ,int) ;
 int FUNC_3 (char*,int ,int ,char*,int *,char*,int ,int *) ;
 int FUNC_4 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_5 (char*,int ,int *,char*,char*,int ,int *,int *,int *) ;
 int FUNC_6 (int ,int *) ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;

void
FUNC_7 (void)
{
  struct cmd_list_element *VAR_38;

  FUNC_3 ("maintenance", VAR_0, VAR_3,
    "Commands for use by GDB maintainers.\nIncludes commands to dump specific internal GDB structures in\na human readable form, to cause GDB to deliberately dump core,\nto test internal functions such as the C++/ObjC demangler, etc.",



    &VAR_32, "maintenance ", 0,
    &VAR_1);

  FUNC_2 ("mt", "maintenance", VAR_0, 1);

  FUNC_3 ("info", VAR_0, VAR_7,
     "Commands for showing internal info about the program being debugged.",
    &VAR_31, "maintenance info ", 0,
    &VAR_32);
  FUNC_0 ("i", "info", VAR_0, 1, &VAR_32);

  FUNC_1 ("sections", VAR_0, VAR_9,
    "List the BFD sections of the exec and core files. \nArguments may be any combination of:\n	[one or more section names]\n	ALLOC LOAD RELOC READONLY CODE DATA ROM CONSTRUCTOR\n	HAS_CONTENTS NEVER_LOAD COFF_SHARED_LIBRARY IS_COMMON\nSections matching any argument will be listed (no argument\nimplies all sections).  In addition, the special argument\n	ALLOBJ\nlists all sections from all object files, including shared libraries.",
    &VAR_31);

  FUNC_3 ("print", VAR_0, VAR_14,
    "Maintenance command for printing GDB internal state.",
    &VAR_33, "maintenance print ", 0,
    &VAR_32);

  FUNC_3 ("set", VAR_0, VAR_22, "Set GDB internal variables used by the GDB maintainer.\nConfigure variables internal to GDB that aid in GDB's maintenance",


    &VAR_23, "maintenance set ",
    0 ,
    &VAR_32);

  FUNC_3 ("show", VAR_0, VAR_25, "Show GDB internal variables used by the GDB maintainer.\nConfigure variables internal to GDB that aid in GDB's maintenance",


    &VAR_26, "maintenance show ",
    0 ,
    &VAR_32);


  FUNC_1 ("dump-me", VAR_0, VAR_6,
    "Get fatal error; make debugger dump its core.\nGDB sets its handling of SIGQUIT back to SIG_DFL and then sends\nitself a SIGQUIT signal.",


    &VAR_32);


  FUNC_1 ("internal-error", VAR_0, VAR_11,
    "Give GDB an internal error.\nCause GDB to behave as if an internal error was detected.",

    &VAR_32);

  FUNC_1 ("internal-warning", VAR_0, VAR_12,
    "Give GDB an internal warning.\nCause GDB to behave as if an internal warning was reported.",

    &VAR_32);

  FUNC_1 ("demangle", VAR_0, VAR_4,
    "Demangle a C++/ObjC mangled name.\nCall internal GDB demangler routine to demangle a C++ link name\nand prints the result.",


    &VAR_32);

  FUNC_1 ("time", VAR_0, VAR_28,
    "Set the display of time usage.\nIf nonzero, will cause the execution time for each command to be\ndisplayed, following the command's output.",


    &VAR_32);

  FUNC_1 ("space", VAR_0, VAR_27,
    "Set the display of space usage.\nIf nonzero, will cause the execution space for each command to be\ndisplayed, following the command's output.",


    &VAR_32);

  FUNC_1 ("type", VAR_0, VAR_20,
    "Print a type chain for a given symbol.\nFor each node in a type chain, print the raw data for each member of\nthe type structure, and the interpretation of the data.",


    &VAR_33);

  FUNC_1 ("symbols", VAR_0, VAR_19,
    "Print dump of current symbol definitions.\nEntries in the full symbol table are dumped to file OUTFILE.\nIf a SOURCE file is specified, dump only that file's symbols.",


    &VAR_33);

  FUNC_1 ("msymbols", VAR_0, VAR_15,
    "Print dump of current minimal symbol definitions.\nEntries in the minimal symbol table are dumped to file OUTFILE.\nIf a SOURCE file is specified, dump only that file's minimal symbols.",


    &VAR_33);

  FUNC_1 ("psymbols", VAR_0, VAR_17,
    "Print dump of current partial symbol definitions.\nEntries in the partial symbol table are dumped to file OUTFILE.\nIf a SOURCE file is specified, dump only that file's partial symbols.",


    &VAR_33);

  FUNC_1 ("objfiles", VAR_0, VAR_16,
    "Print dump of current object file definitions.",
    &VAR_33);

  FUNC_1 ("symtabs", VAR_0, VAR_10,
    "List the full symbol tables for all object files.\nThis does not include information about individual symbols, blocks, or\nlinetables --- just the symbol table structures themselves.\nWith an argument REGEXP, list the symbol tables whose names that match that.",



    &VAR_31);

  FUNC_1 ("psymtabs", VAR_0, VAR_8,
    "List the partial symbol tables for all object files.\nThis does not include information about individual partial symbols,\njust the symbol table structures themselves.",


    &VAR_31);

  FUNC_1 ("statistics", VAR_0, VAR_18,
    "Print statistics about internal gdb state.",
    &VAR_33);

  FUNC_1 ("architecture", VAR_0, VAR_13,
    "Print the internal architecture configuration.Takes an optional file parameter.",

    &VAR_33);

  FUNC_1 ("check-symtabs", VAR_0, VAR_2,
    "Check consistency of psymtabs and symtabs.",
    &VAR_32);

  FUNC_1 ("translate-address", VAR_0, VAR_29,
    "Translate a section name and address to a symbol.",
    &VAR_32);

  FUNC_1 ("deprecate", VAR_0, VAR_5,
    "Deprecate a command.  Note that this is just in here so the \ntestsuite can check the comamnd deprecator. You probably shouldn't use this,\nrather you should use the C function deprecate_cmd().  If you decide you \nwant to use it: maintenance deprecate 'commandname' \"replacement\". The \nreplacement is optional.", &VAR_32);





  FUNC_1 ("undeprecate", VAR_0, VAR_30,
    "Undeprecate a command.  Note that this is just in here so the \ntestsuite can check the comamnd deprecator. You probably shouldn't use this,\nIf you decide you want to use it: maintenance undeprecate 'commandname'",


    &VAR_32);

  FUNC_6 (
        FUNC_4 ("watchdog", VAR_0, VAR_36, (char *) &VAR_37,
       "Set watchdog timer.\nWhen non-zero, this timeout is used instead of waiting forever for a target to\nfinish a low-level step or continue operation.  If the specified amount of time\npasses without a response from the target, an error occurs.", &VAR_34),



        &VAR_35);


  FUNC_5 ("profile", VAR_0,
      &VAR_21,
      "Set internal profiling.\n"
      "When enabled GDB is profiled.",
      "Show internal profiling.\n",
      VAR_24, ((void*)0),
      &VAR_23,
      &VAR_26);
}
