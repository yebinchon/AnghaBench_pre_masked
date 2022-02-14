
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct invariant {struct def* def; } ;
struct df_ref {int flags; struct df_ref* next_ref; } ;
struct df_link {struct df_ref* ref; scalar_t__ next; } ;
struct def {int invno; } ;
typedef int rtx ;
typedef int bitmap ;
typedef int basic_block ;
struct TYPE_2__ {struct df_ref* uses; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct df_ref*) ;
 struct df_link* FUNC_3 (struct df_ref*) ;
 struct invariant* FUNC_4 (struct df_ref*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool
FUNC_8 (rtx VAR_3, bitmap VAR_4)
{
  struct df_link *VAR_5;
  struct df_ref *VAR_6, *VAR_7;
  basic_block VAR_8 = FUNC_0 (VAR_3), VAR_9;
  struct def *VAR_10;
  struct invariant *VAR_11;

  for (VAR_6 = FUNC_1 (VAR_2, VAR_3)->uses; VAR_6; VAR_6 = VAR_6->next_ref)
    {
      if (VAR_6->flags & VAR_1)
 return 0;

      VAR_5 = FUNC_3 (VAR_6);
      if (!VAR_5)
 continue;

      if (VAR_5->next)
 return 0;

      VAR_7 = VAR_5->ref;
      VAR_11 = FUNC_4 (VAR_7);
      if (!VAR_11)
 return 0;

      VAR_10 = VAR_11->def;
      FUNC_7 (VAR_10 != ((void*)0));

      VAR_9 = FUNC_2 (VAR_7);



      if (!FUNC_6 (VAR_0, VAR_8, VAR_9))
 return 0;

      FUNC_5 (VAR_4, VAR_10->invno);
    }

  return 1;
}
