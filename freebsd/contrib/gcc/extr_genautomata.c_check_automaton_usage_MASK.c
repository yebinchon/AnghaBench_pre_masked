
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* decl_t ;
struct TYPE_7__ {int name; int automaton_is_used; } ;
struct TYPE_6__ {int decls_num; TYPE_1__** decls; } ;
struct TYPE_5__ {scalar_t__ mode; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  decl_t VAR_3;
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0->decls_num; VAR_4++)
    {
      VAR_3 = VAR_0->decls [VAR_4];
      if (VAR_3->mode == VAR_1
   && !FUNC_0 (VAR_3)->automaton_is_used)
 {
   if (!VAR_2)
     FUNC_1 ("automaton `%s' is not used", FUNC_0 (VAR_3)->name);
   else
     FUNC_2 (0, "automaton `%s' is not used",
       FUNC_0 (VAR_3)->name);
 }
    }
}
