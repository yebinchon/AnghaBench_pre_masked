
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* decl_t ;
struct TYPE_10__ {int name; int reserv_is_used; } ;
struct TYPE_9__ {int name; int unit_is_used; } ;
struct TYPE_8__ {int decls_num; TYPE_1__** decls; } ;
struct TYPE_7__ {scalar_t__ mode; } ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  decl_t VAR_4;
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_0->decls_num; VAR_5++)
    {
      VAR_4 = VAR_0->decls [VAR_5];
      if (VAR_4->mode == VAR_2 && !FUNC_1 (VAR_4)->unit_is_used)
 {
   if (!VAR_3)
     FUNC_2 ("unit `%s' is not used", FUNC_1 (VAR_4)->name);
   else
     FUNC_3 (0, "unit `%s' is not used", FUNC_1 (VAR_4)->name);
 }
      else if (VAR_4->mode == VAR_1 && !FUNC_0 (VAR_4)->reserv_is_used)
 {
   if (!VAR_3)
     FUNC_2 ("reservation `%s' is not used", FUNC_0 (VAR_4)->name);
   else
     FUNC_3 (0, "reservation `%s' is not used", FUNC_0 (VAR_4)->name);
 }
    }
}
