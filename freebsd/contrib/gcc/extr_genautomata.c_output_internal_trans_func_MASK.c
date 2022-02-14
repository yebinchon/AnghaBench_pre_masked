
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  FUNC_0 (VAR_6,
    "static int\n%s (int %s, struct %s *%s ATTRIBUTE_UNUSED)\n",
    VAR_3, VAR_2,
    VAR_0, VAR_1);
  FUNC_0 (VAR_6, "{\n  int %s ATTRIBUTE_UNUSED;\n", VAR_4);
  FUNC_0 (VAR_6, "\n  switch (%s)\n    {\n", VAR_2);
  FUNC_1 (VAR_5);
  FUNC_0 (VAR_6, "\n    default:\n      return -1;\n    }\n");
  FUNC_0 (VAR_6, "}\n\n");
}
