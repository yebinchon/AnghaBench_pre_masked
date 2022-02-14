
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
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_11 ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  FUNC_0 (VAR_11,
    "int\n%s (%s %s, rtx %s, rtx %s)\n",
    VAR_8, VAR_10,
    VAR_9, VAR_2, VAR_1);
  FUNC_0 (VAR_11, "{\n  struct %s %s;\n  int %s, %s, transition;\n",
    VAR_0, VAR_0, VAR_4,
    VAR_3);
  FUNC_1 (VAR_2,
     VAR_4, 0);
  FUNC_1 (VAR_1,
     VAR_3, 0);
  FUNC_0 (VAR_11, "  memcpy (&%s, %s, sizeof (%s));\n",
    VAR_0, VAR_9, VAR_0);
  FUNC_0 (VAR_11, "  %s (&%s);\n", VAR_6, VAR_0);
  FUNC_0 (VAR_11, "  transition = %s (%s, &%s);\n",
    VAR_7, VAR_4, VAR_0);
  FUNC_0 (VAR_11, "  gcc_assert (transition <= 0);\n");
  FUNC_0 (VAR_11, "  return %s (%s, &%s);\n",
    VAR_5, VAR_3,
    VAR_0);
  FUNC_0 (VAR_11, "}\n\n");
}
