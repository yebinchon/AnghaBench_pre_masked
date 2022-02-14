
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* decl_t ;
typedef TYPE_2__* automaton_t ;
struct TYPE_10__ {scalar_t__ corresponding_automaton_num; char* name; } ;
struct TYPE_9__ {int decls_num; TYPE_1__** decls; } ;
struct TYPE_8__ {scalar_t__ automaton_order_num; } ;
struct TYPE_7__ {scalar_t__ mode; } ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3 (automaton_t VAR_4)
{
  decl_t VAR_5;
  const char *VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;

  FUNC_1 (VAR_3, "\n  Corresponding units:\n");
  FUNC_1 (VAR_3, "    ");
  VAR_7 = 4;
  VAR_8 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_1->decls_num; VAR_9++)
    {
      VAR_5 = VAR_1->decls [VAR_9];
      if (VAR_5->mode == VAR_2
          && (FUNC_0 (VAR_5)->corresponding_automaton_num
       == VAR_4->automaton_order_num))
 {
   VAR_8 = 1;
   VAR_6 = FUNC_0 (VAR_5)->name;
   if (VAR_7 + FUNC_2 (VAR_6) + 1 > VAR_0 )
     {
       VAR_7 = FUNC_2 (VAR_6) + 4;
       FUNC_1 (VAR_3, "\n    ");
     }
   else
     {
       VAR_7 += FUNC_2 (VAR_6) + 1;
       FUNC_1 (VAR_3, " ");
     }
   FUNC_1 (VAR_3, "%s", VAR_6);
 }
    }
  if (!VAR_8)
    FUNC_1 (VAR_3, "<None>");
  FUNC_1 (VAR_3, "\n\n");
}
