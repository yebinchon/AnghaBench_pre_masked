
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union exp_element {int dummy; } exp_element ;
struct ui_file {int dummy; } ;
struct expression {int nelts; TYPE_2__* elts; TYPE_1__* language_defn; } ;
struct TYPE_4__ {int longconst; int opcode; } ;
struct TYPE_3__ {int la_name; } ;


 int FUNC_0 (struct ui_file*,char*,...) ;
 int FUNC_1 (struct expression*,struct ui_file*) ;
 scalar_t__ FUNC_2 (char) ;
 char* FUNC_3 (struct expression*,int ) ;
 int FUNC_4 (struct ui_file*,char,int ,int ) ;

void
FUNC_5 (struct expression *VAR_0, struct ui_file *VAR_1,
       char *VAR_2)
{
  int VAR_3;
  char *VAR_4;
  char *VAR_5;
  int VAR_6;

  FUNC_0 (VAR_1, "Dump of expression @ ");
  FUNC_1 (VAR_0, VAR_1);
  FUNC_0 (VAR_1, "'\n\tLanguage %s, %d elements, %ld bytes each.\n",
      VAR_0->language_defn->la_name, VAR_0->nelts,
      (long) sizeof (union exp_element));
  FUNC_0 (VAR_1, "\t%5s  %20s  %16s  %s\n", "Index", "Opcode",
      "Hex Value", "String Value");
  for (VAR_3 = 0; VAR_3 < VAR_0->nelts; VAR_3++)
    {
      FUNC_0 (VAR_1, "\t%5d  ", VAR_3);
      VAR_4 = FUNC_3 (VAR_0, VAR_0->elts[VAR_3].opcode);

      FUNC_0 (VAR_1, "%20s  ", VAR_4);
      FUNC_4 (VAR_1, 'd', 0, VAR_0->elts[VAR_3].longconst);
      FUNC_0 (VAR_1, "  ");

      for (VAR_5 = (char *) &VAR_0->elts[VAR_3],
    VAR_6 = sizeof (union exp_element);
    VAR_6-- > 0;
    VAR_5++)
 {
   FUNC_0 (VAR_1, "%c",
       FUNC_2 (*VAR_5) ? (*VAR_5 & 0xFF) : '.');
 }
      FUNC_0 (VAR_1, "\n");
    }
}
