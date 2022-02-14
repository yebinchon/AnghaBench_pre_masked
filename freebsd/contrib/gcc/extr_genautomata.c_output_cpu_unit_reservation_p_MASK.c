
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* automaton_t ;
struct TYPE_6__ {int query_units_num; TYPE_1__* first_automaton; } ;
struct TYPE_5__ {struct TYPE_5__* next_automaton; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  automaton_t VAR_7;

  FUNC_0 (VAR_6, "int\n%s (%s %s, int %s)\n",
    VAR_2,
    VAR_4, VAR_3,
    VAR_1);
  FUNC_0 (VAR_6, "{\n  gcc_assert (%s >= 0 && %s < %d);\n",
    VAR_1, VAR_1,
    VAR_5->query_units_num);
  if (VAR_5->query_units_num > 0)
    for (VAR_7 = VAR_5->first_automaton;
  VAR_7 != ((void*)0);
  VAR_7 = VAR_7->next_automaton)
      {
 FUNC_0 (VAR_6, "  if ((");
 FUNC_2 (VAR_6, VAR_7);
 FUNC_0 (VAR_6, " [((struct %s *) %s)->", VAR_0, VAR_3);
 FUNC_1 (VAR_6, VAR_7);
 FUNC_0 (VAR_6, " * %d + %s / 8] >> (%s %% 8)) & 1)\n",
   (VAR_5->query_units_num + 7) / 8,
   VAR_1, VAR_1);
 FUNC_0 (VAR_6, "    return 1;\n");
      }
  FUNC_0 (VAR_6, "  return 0;\n}\n\n");
}
