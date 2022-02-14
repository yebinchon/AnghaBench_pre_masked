
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* decl_t ;
struct TYPE_8__ {int insn_num; int regexp; } ;
struct TYPE_7__ {int decls_num; TYPE_1__** decls; } ;
struct TYPE_6__ {scalar_t__ mode; } ;


 char* VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_1__*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6 (void)
{
  decl_t VAR_11;
  int VAR_12, VAR_13;

  FUNC_2 (VAR_10,
    "void\n%s (FILE *%s, rtx %s ATTRIBUTE_UNUSED)\n{\n",
           VAR_6, VAR_2,
           VAR_3);

  if (FUNC_0 (VAR_7)->insn_num == 0)
    {
      FUNC_2 (VAR_10, "  fputs (\"%s\", %s);\n}\n\n",
        VAR_5, VAR_2);
      return;
    }


  FUNC_3 ("  static const char *const reservation_names[] =\n    {",
  VAR_10);

  for (VAR_12 = 0, VAR_13 = 0; VAR_12 < VAR_8->decls_num; VAR_12++)
    {
      VAR_11 = VAR_8->decls [VAR_12];
      if (VAR_11->mode == VAR_9 && VAR_11 != VAR_7)
 {
   FUNC_4 (VAR_13 == FUNC_0 (VAR_11)->insn_num);
   VAR_13++;

   FUNC_2 (VAR_10, "\n      \"%s\",",
     FUNC_5 (FUNC_0 (VAR_11)->regexp));
   FUNC_1 ();
 }
    }
  FUNC_4 (VAR_13 == FUNC_0 (VAR_7)->insn_num);

  FUNC_2 (VAR_10, "\n      \"%s\"\n    };\n  int %s;\n\n",
    VAR_5, VAR_4);

  FUNC_2 (VAR_10, "  if (%s == 0)\n    %s = %s;\n",
    VAR_3,
    VAR_4, VAR_0);
  FUNC_2 (VAR_10, "  else\n    {\n      %s = %s (%s);\n      if (%s > %s)\n        %s = %s;\n    }\n",





    VAR_4, VAR_1,
        VAR_3,
    VAR_4, VAR_0,
    VAR_4, VAR_0);

  FUNC_2 (VAR_10, "  fputs (reservation_names[%s], %s);\n}\n\n",
    VAR_4, VAR_2);
}
