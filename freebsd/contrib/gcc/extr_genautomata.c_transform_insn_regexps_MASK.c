
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* decl_t ;
struct TYPE_8__ {int regexp; int transformed_regexp; } ;
struct TYPE_7__ {int decls_num; TYPE_1__** decls; } ;
struct TYPE_6__ {scalar_t__ mode; } ;


 TYPE_4__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_7 (void)
{
  decl_t VAR_6;
  int VAR_7;

  VAR_5 = FUNC_3 ();
  FUNC_1 ();
  if (VAR_3)
    FUNC_4 (VAR_4, "Reservation transformation...");
  for (VAR_7 = 0; VAR_7 < VAR_1->decls_num; VAR_7++)
    {
      VAR_6 = VAR_1->decls [VAR_7];
      if (VAR_6->mode == VAR_2 && VAR_6 != VAR_0)
 FUNC_0 (VAR_6)->transformed_regexp
   = FUNC_6 (FUNC_2
         (FUNC_0 (VAR_6)->regexp));
    }
  if (VAR_3)
    FUNC_4 (VAR_4, "done\n");
  FUNC_5 (&VAR_5);
}
