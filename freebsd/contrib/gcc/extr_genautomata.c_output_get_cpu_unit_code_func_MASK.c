
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* unit_decl_t ;
struct TYPE_8__ {int units_num; } ;
struct TYPE_7__ {char* name; int query_num; scalar_t__ query_p; } ;


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
 TYPE_6__* VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (TYPE_1__**,int ,int) ;
 int VAR_11 ;
 int FUNC_3 (TYPE_1__**,int,int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__** FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  int VAR_14;
  unit_decl_t *VAR_15;

  FUNC_0 (VAR_11, "int\n%s (const char *%s)\n",
    VAR_3, VAR_2);
  FUNC_0 (VAR_11, "{\n  struct %s {const char *%s; int %s;};\n",
    VAR_7, VAR_9, VAR_1);
  FUNC_0 (VAR_11, "  int %s, %s, %s, %s;\n", VAR_0,
    VAR_5, VAR_6, VAR_4);
  FUNC_0 (VAR_11, "  static struct %s %s [] =\n    {\n",
    VAR_7, VAR_8);
  VAR_15 = FUNC_4 (sizeof (unit_decl_t) * VAR_10->units_num);
  FUNC_2 (VAR_15, VAR_12, sizeof (unit_decl_t) * VAR_10->units_num);
  FUNC_3 (VAR_15, VAR_10->units_num, sizeof (unit_decl_t), VAR_13);
  for (VAR_14 = 0; VAR_14 < VAR_10->units_num; VAR_14++)
    if (VAR_15 [VAR_14]->query_p)
      FUNC_0 (VAR_11, "      {\"%s\", %d},\n",
        VAR_15[VAR_14]->name, VAR_15[VAR_14]->query_num);
  FUNC_0 (VAR_11, "    };\n\n");
  FUNC_0 (VAR_11, "  /* The following is binary search: */\n");
  FUNC_0 (VAR_11, "  %s = 0;\n", VAR_5);
  FUNC_0 (VAR_11, "  %s = sizeof (%s) / sizeof (struct %s) - 1;\n",
    VAR_4, VAR_8, VAR_7);
  FUNC_0 (VAR_11, "  while (%s <= %s)\n    {\n",
    VAR_5, VAR_4);
  FUNC_0 (VAR_11, "      %s = (%s + %s) / 2;\n",
    VAR_6, VAR_5, VAR_4);
  FUNC_0 (VAR_11, "      %s = strcmp (%s, %s [%s].%s);\n",
    VAR_0, VAR_2,
    VAR_8, VAR_6, VAR_9);
  FUNC_0 (VAR_11, "      if (%s < 0)\n", VAR_0);
  FUNC_0 (VAR_11, "        %s = %s - 1;\n",
    VAR_4, VAR_6);
  FUNC_0 (VAR_11, "      else if (%s > 0)\n", VAR_0);
  FUNC_0 (VAR_11, "        %s = %s + 1;\n",
    VAR_5, VAR_6);
  FUNC_0 (VAR_11, "      else\n");
  FUNC_0 (VAR_11, "        return %s [%s].%s;\n    }\n",
    VAR_8, VAR_6, VAR_1);
  FUNC_0 (VAR_11, "  return -1;\n}\n\n");
  FUNC_1 (VAR_15);
}
