
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* decl_t ;
struct TYPE_8__ {int loop_pass_num; int name; int regexp; } ;
struct TYPE_7__ {int decls_num; TYPE_1__** decls; } ;
struct TYPE_6__ {scalar_t__ mode; } ;


 TYPE_4__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  decl_t VAR_3;
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1->decls_num; VAR_4++)
    {
      VAR_3 = VAR_1->decls [VAR_4];
      if (VAR_3->mode == VAR_2)
 FUNC_0 (VAR_3)->loop_pass_num = 0;
    }
  for (VAR_4 = 0; VAR_4 < VAR_1->decls_num; VAR_4++)
    {
      VAR_3 = VAR_1->decls [VAR_4];
      VAR_0 = VAR_4;

      if (VAR_3->mode == VAR_2)
   {
     FUNC_0 (VAR_3)->loop_pass_num = VAR_0;
     if (FUNC_3 (FUNC_0 (VAR_3)->regexp, VAR_3))
       {
  FUNC_2 (FUNC_0 (VAR_3)->regexp);
  FUNC_1 ("cycle in definition of reservation `%s'",
         FUNC_0 (VAR_3)->name);
       }
   }
    }
}
