
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* btr_user ;
typedef TYPE_3__* btr_def ;
typedef int * bitmap ;
struct TYPE_9__ {int btr; int other_btr_uses_after_use; int insn; int * live_range; TYPE_2__* uses; int bb; int has_ambiguous_use; struct TYPE_9__* next_this_group; TYPE_1__* group; } ;
struct TYPE_8__ {scalar_t__ insn; int use; struct TYPE_8__* next; int bb; } ;
struct TYPE_7__ {TYPE_3__* members; } ;
typedef int HARD_REG_SET ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int *,int *,int ,int ,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_14 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_15 (scalar_t__,char*,int,int) ;
 int FUNC_16 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_17 (btr_def VAR_4, HARD_REG_SET *VAR_5)
{
  btr_def VAR_6;

  for (VAR_6 = VAR_4->group->members;
       VAR_6 != ((void*)0);
       VAR_6 = VAR_6->next_this_group)
    {
      if (VAR_6 != VAR_4
   && VAR_6->uses != ((void*)0)
   && ! VAR_6->has_ambiguous_use
   && FUNC_13 (VAR_0, VAR_6->bb, VAR_4->bb))
 {




   int VAR_7;
   HARD_REG_SET VAR_8;
   bitmap VAR_9 = FUNC_1 (((void*)0));
   btr_user VAR_10;

   if (VAR_6->live_range == ((void*)0))
     {
       HARD_REG_SET VAR_11;
       FUNC_9 (VAR_6, &VAR_11);
     }
   FUNC_3 (VAR_8, *VAR_5);
   FUNC_8 (VAR_9, VAR_4->live_range);

   for (VAR_10 = VAR_6->uses; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
     FUNC_7 (VAR_9, &VAR_8,
    VAR_4->bb, VAR_10->bb,
    (VAR_3
     || VAR_10->insn != FUNC_0 (VAR_4->bb)
     || !FUNC_5 (VAR_10->insn)));

   VAR_7 = FUNC_10 (VAR_8);
   if (VAR_7 != -1)
     {

       if (VAR_2)
  FUNC_15 (VAR_2,
    "Combining def in insn %d with def in insn %d\n",
    FUNC_4 (VAR_6->insn), FUNC_4 (VAR_4->insn));

       VAR_4->btr = VAR_7;
       VAR_10 = VAR_6->uses;
       while (VAR_10 != ((void*)0))
  {
    btr_user VAR_12 = VAR_10->next;

    VAR_10->next = VAR_4->uses;
    VAR_4->uses = VAR_10;
    VAR_10 = VAR_12;
  }






       for (VAR_10 = VAR_4->uses; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
  FUNC_16 (VAR_10->insn,
        FUNC_14 (VAR_10->insn, VAR_1,
           FUNC_6 (VAR_10->use)));
       FUNC_11 (VAR_6);
       VAR_6->uses = ((void*)0);
       FUNC_8 (VAR_4->live_range, VAR_9);
       if (VAR_6->btr == VAR_7 && VAR_6->other_btr_uses_after_use)
  VAR_4->other_btr_uses_after_use = 1;
       FUNC_3 (*VAR_5, VAR_8);


       FUNC_12 (VAR_6->insn);

     }
   FUNC_2 (VAR_9);
 }
    }
}
