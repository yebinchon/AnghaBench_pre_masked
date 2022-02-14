
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int ,char*,char*,char*,...) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  FUNC_0 (VAR_6,
    "void\n%s (void)\n{\n  int %s;\n\n",
    VAR_0, VAR_5);
  FUNC_0 (VAR_6,
    "  for (%s = 0; %s < %s; %s++)\n    %s [%s] = -1;\n}\n\n",
    VAR_5, VAR_5,
    VAR_2, VAR_5,
    VAR_3, VAR_5);

  FUNC_0 (VAR_6,
           "void\n%s (rtx %s)\n{\n  int %s;\n\n",
           VAR_1, VAR_4,
    VAR_5);
  FUNC_0 (VAR_6,
           "  %s = INSN_UID (%s);\n  if (%s < %s)\n    %s [%s] = -1;\n}\n\n",
           VAR_5, VAR_4, VAR_5,
    VAR_2, VAR_3,
    VAR_5);
}
