
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
 int FUNC_0 (int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  FUNC_0 (VAR_7,
    "static int\n%s (int %s, struct %s *%s ATTRIBUTE_UNUSED)\n",
    VAR_3, VAR_2,
    VAR_0, VAR_1);
  FUNC_0 (VAR_7, "{\n  int %s ATTRIBUTE_UNUSED;\n  int %s = -1;\n",
    VAR_5, VAR_4);
  FUNC_0 (VAR_7, "\n  switch (%s)\n    {\n", VAR_2);
  FUNC_1 (VAR_6);
  FUNC_0 (VAR_7,
    "\n    default:\n      %s = -1;\n      break;\n    }\n",
    VAR_4);
  FUNC_0 (VAR_7, "  return %s;\n", VAR_4);
  FUNC_0 (VAR_7, "}\n\n");
}
