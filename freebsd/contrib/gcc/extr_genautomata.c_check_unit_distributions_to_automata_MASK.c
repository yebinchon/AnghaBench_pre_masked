
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* decl_t ;
struct TYPE_7__ {int transformed_regexp; int name; } ;
struct TYPE_6__ {int decls_num; TYPE_1__** decls; } ;
struct TYPE_5__ {scalar_t__ mode; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  decl_t VAR_6;
  int VAR_7;

  if (VAR_4)
    FUNC_2 (VAR_5, "Check unit distributions to automata...");
  VAR_1 = VAR_0;
  for (VAR_7 = 0; VAR_7 < VAR_2->decls_num; VAR_7++)
    {
      VAR_6 = VAR_2->decls [VAR_7];
      if (VAR_6->mode == VAR_3)
 FUNC_1
   (FUNC_0 (VAR_6)->name,
    FUNC_0 (VAR_6)->transformed_regexp);
    }
  if (VAR_4)
    FUNC_2 (VAR_5, "done\n");
}
