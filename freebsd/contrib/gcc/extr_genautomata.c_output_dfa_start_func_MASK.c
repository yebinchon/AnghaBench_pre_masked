
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  FUNC_0 (VAR_4,
    "void\n%s (void)\n{\n  %s = get_max_uid ();\n",
    VAR_3, VAR_1);
  FUNC_0 (VAR_4, "  %s = xmalloc (%s * sizeof (int));\n",
    VAR_2, VAR_1);
  FUNC_0 (VAR_4, "  %s ();\n}\n\n", VAR_0);
}
