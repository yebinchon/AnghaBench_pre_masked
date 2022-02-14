
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct btr_def_group_s {int dummy; } ;
typedef int rtx ;
typedef TYPE_1__* btr_def_group ;
typedef TYPE_2__* btr_def ;
struct TYPE_7__ {TYPE_1__* group; struct TYPE_7__* next_this_group; int insn; } ;
struct TYPE_6__ {TYPE_2__* members; struct TYPE_6__* next; int src; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (btr_def_group *VAR_1, btr_def VAR_2)
{
  if (FUNC_1 (VAR_2->insn, 1, ((void*)0)))
    {
      btr_def_group VAR_3;
      rtx VAR_4 = FUNC_0 (FUNC_4 (VAR_2->insn));



      for (VAR_3 = *VAR_1;
    VAR_3 != ((void*)0);
    VAR_3 = VAR_3->next)
 if (FUNC_3 (VAR_4, VAR_3->src))
   break;

      if (!VAR_3)
 {
   VAR_3 = FUNC_2 (&VAR_0,
          sizeof (struct btr_def_group_s));
   VAR_3->src = VAR_4;
   VAR_3->members = ((void*)0);
   VAR_3->next = *VAR_1;
   *VAR_1 = VAR_3;
 }
      VAR_2->group = VAR_3;
      VAR_2->next_this_group = VAR_3->members;
      VAR_3->members = VAR_2;
    }
  else
    VAR_2->group = ((void*)0);
}
