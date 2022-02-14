
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct invariant {int def; } ;
struct df_ref {struct df_ref* next_ref; } ;
typedef int rtx ;
struct TYPE_2__ {struct df_ref* uses; } ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct df_ref*) ;
 int FUNC_2 (struct df_ref*) ;
 int VAR_0 ;
 struct invariant* FUNC_3 (struct df_ref*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5 (rtx VAR_1)
{
  struct df_ref *VAR_2;
  struct invariant *VAR_3;

  for (VAR_2 = FUNC_0 (VAR_0, VAR_1)->uses; VAR_2; VAR_2 = VAR_2->next_ref)
    {
      VAR_3 = FUNC_3 (VAR_2);
      if (VAR_3)
 FUNC_4 (VAR_3->def, FUNC_2 (VAR_2), FUNC_1 (VAR_2));
    }
}
