
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct cmd_list_element {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_list_element* FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (char*,int ,int ,char*,int *,char*,int ,int *) ;
 struct cmd_list_element* FUNC_2 (char*,int ,char const**,char const**,char*,int *) ;
 int FUNC_3 (char*,int ,int *,char*,char*,int *,int *,int *,int *) ;
 int FUNC_4 (char*,int ,int ,char*,char*,char*,int *,int *,int *,int *,struct cmd_list_element**,struct cmd_list_element**) ;
 struct cmd_list_element* FUNC_5 (struct cmd_list_element*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char** VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 char const* VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (struct cmd_list_element*,char*) ;
 char const* VAR_19 ;
 char const** VAR_20 ;
 int FUNC_7 (struct ui_file*,char*,...) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int,char const**,char const**,char const***) ;
 struct ui_file* FUNC_13 () ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_14 (char*) ;
 int VAR_23 ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct cmd_list_element*,int ) ;
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
 int FUNC_17 (char const*,char*) ;
 int FUNC_18 (struct ui_file*) ;
 char* FUNC_19 (struct ui_file*,long*) ;
 char const** VAR_34 ;
 int VAR_35 ;
 char** FUNC_20 (int) ;

void
FUNC_21 (void)
{
  struct ui_file *VAR_36;
  long VAR_37;
  struct cmd_list_element *VAR_38, *VAR_39;
  const char *VAR_40;
  const char *VAR_41;
  const char **VAR_42;
  int VAR_43, VAR_44, VAR_45;
  static char *VAR_46;

  FUNC_8 (VAR_13, VAR_7, VAR_5);


  FUNC_10 (VAR_13,
      VAR_14,
      VAR_6);


  FUNC_9 (VAR_13, 0, VAR_1,
                          VAR_9);
  FUNC_9 (VAR_13, 0, VAR_2,
                          VAR_10);
  FUNC_9 (VAR_13, 0, VAR_0,
                          VAR_8);


  VAR_22 = FUNC_11 ();


  FUNC_1 ("arm", VAR_21, VAR_23,
    "Various ARM-specific commands.",
    &VAR_26, "set arm ", 0, &VAR_28);

  FUNC_1 ("arm", VAR_21, VAR_29,
    "Various ARM-specific commands.",
    &VAR_31, "show arm ", 0, &VAR_33);


  FUNC_14 ("reg-names-std");


  VAR_36 = FUNC_13 ();
  FUNC_7 (VAR_36, "Set the disassembly style.\n"
        "The valid values are:\n");


  VAR_34
    = FUNC_20 ((VAR_22 + 1) * sizeof (char *));
  for (VAR_44 = 0; VAR_44 < VAR_22; VAR_44++)
    {
      VAR_43 = FUNC_12 (VAR_44, &VAR_40, &VAR_41, &VAR_42);
      VAR_34[VAR_44] = VAR_40;
      FUNC_7 (VAR_36, "%s - %s\n", VAR_40,
     VAR_41);

      if (!FUNC_17 (VAR_40, "std"))
 {
          VAR_19 = VAR_40;
          VAR_18 = VAR_44;
   for (VAR_45 = 0; VAR_45 < VAR_43; VAR_45++)
            VAR_12[VAR_45] = (char *) VAR_42[VAR_45];
          FUNC_15 (VAR_44);
 }
    }

  VAR_34[VAR_22] = ((void*)0);


  FUNC_7 (VAR_36, "The default is \"std\".");
  VAR_46 = FUNC_19 (VAR_36, &VAR_37);
  FUNC_18 (VAR_36);


  VAR_38 = FUNC_2 ("disassembly-flavor", VAR_21,
         VAR_34,
         &VAR_19,
         VAR_46,
         &VAR_28);
  FUNC_16 (VAR_38, VAR_24);
  FUNC_6 (VAR_38, "set arm disassembly");
  FUNC_6 (FUNC_5 (VAR_38, &VAR_33),
   "show arm disassembly");


  VAR_38 = FUNC_2 ("disassembler", VAR_21,
         VAR_34, &VAR_19,
         VAR_46, &VAR_26);

  FUNC_16 (VAR_38, VAR_24);
  FUNC_5 (VAR_38, &VAR_31);

  FUNC_4 ("apcs32", VAR_21,
   VAR_35, (char *) &VAR_3,
   "Set usage of ARM 32-bit mode.",
   "Show usage of ARM 32-bit mode.",
   ((void*)0), ((void*)0),
   &VAR_28, &VAR_33, &VAR_38, &VAR_39);
  FUNC_6 (VAR_38, "set arm apcs32");
  FUNC_6 (VAR_39, "show arm apcs32");

  FUNC_3 ("apcs32", VAR_21, &VAR_3,
      "Set usage of ARM 32-bit mode.  "
      "When off, a 26-bit PC will be used.",
      "Show usage of ARM 32-bit mode.  "
      "When off, a 26-bit PC will be used.",
      ((void*)0), ((void*)0),
      &VAR_26, &VAR_31);


  VAR_38 = FUNC_2
    ("fpu", VAR_21, VAR_20, &VAR_17,
     "Set the floating point type.\n"
     "auto - Determine the FP typefrom the OS-ABI.\n"
     "softfpa - Software FP, mixed-endian doubles on little-endian ARMs.\n"
     "fpa - FPA co-processor (GCC compiled).\n"
     "softvfp - Software FP with pure-endian doubles.\n"
     "vfp - VFP co-processor.",
     &VAR_26);
  FUNC_16 (VAR_38, VAR_25);
  FUNC_16 (FUNC_5 (VAR_38, &VAR_31), VAR_30);


  FUNC_6 (FUNC_0 ("othernames", VAR_16, VAR_11,
     "Switch to the next set of register names."),
   "set arm disassembly");


  FUNC_3 ("arm", VAR_15, &VAR_4,
      "Set ARM debugging.  "
      "When on, arm-specific debugging is enabled.",
      "Show ARM debugging.  "
      "When on, arm-specific debugging is enabled.",
      ((void*)0), ((void*)0),
      &VAR_27, &VAR_32);
}
