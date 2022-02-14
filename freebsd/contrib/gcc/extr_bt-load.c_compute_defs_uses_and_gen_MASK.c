
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int sbitmap ;
typedef scalar_t__ rtx ;
typedef int fibheap_t ;
struct TYPE_22__ {int btrs_written_in_block; int btrs_live_in_block; TYPE_4__* users_this_bb; int bb_gen; int * btr_defset; } ;
typedef TYPE_3__ defs_uses_info ;
typedef TYPE_4__* btr_user ;
typedef int * btr_def_group ;
typedef TYPE_5__* btr_def ;
typedef TYPE_6__* basic_block ;
struct TYPE_21__ {TYPE_1__* rtl; } ;
struct TYPE_25__ {TYPE_2__ il; } ;
struct TYPE_24__ {struct TYPE_24__* next_this_bb; } ;
struct TYPE_23__ {int other_use_this_block; scalar_t__ insn; struct TYPE_23__* next; scalar_t__ use; } ;
struct TYPE_20__ {int global_live_at_end; int global_live_at_start; } ;
typedef int HARD_REG_SET ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_6__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (int ,int) ;
 int FUNC_18 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ,int) ;
 scalar_t__ FUNC_21 (int ,int) ;
 scalar_t__ FUNC_22 (scalar_t__,int ,int) ;
 int FUNC_23 (scalar_t__,int ) ;
 TYPE_5__* FUNC_24 (int ,TYPE_6__*,int,scalar_t__,int,scalar_t__,int **) ;
 int VAR_5 ;
 scalar_t__ FUNC_25 (scalar_t__,int *) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_26 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_27 (int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_28 (scalar_t__,int ,int*) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_4__* FUNC_29 (TYPE_6__*,int,scalar_t__) ;
 int FUNC_30 (int ,int ,TYPE_3__*) ;
 int FUNC_31 (int,TYPE_4__*) ;
 int FUNC_32 (scalar_t__,int (*) (int ,int ,TYPE_3__*),TYPE_3__*) ;
 scalar_t__ FUNC_33 (int,int,scalar_t__,int *) ;
 int * VAR_14 ;
 int FUNC_34 (int ,int ,int ) ;
 int FUNC_35 (int *,int) ;
 int FUNC_36 (int ) ;

__attribute__((used)) static void
FUNC_37 (fibheap_t VAR_15, btr_def *VAR_16,
      btr_user *VAR_17, sbitmap *VAR_18,
      sbitmap *VAR_19, HARD_REG_SET *VAR_20)
{






  int VAR_21;
  int VAR_22 = 0;
  btr_def_group VAR_23 = ((void*)0);
  defs_uses_info VAR_24;

  FUNC_35 (VAR_19, VAR_13);
  for (VAR_21 = VAR_2; VAR_21 < VAR_13; VAR_21++)
    {
      basic_block VAR_25 = FUNC_1 (VAR_21);
      int VAR_26;
      btr_def VAR_27 = ((void*)0);
      rtx VAR_28;
      rtx VAR_29;
      int VAR_30 = 0;

      VAR_24.users_this_bb = ((void*)0);
      VAR_24.bb_gen = VAR_19[VAR_21];
      VAR_24.btr_defset = VAR_18;

      FUNC_5 (VAR_24.btrs_live_in_block);
      FUNC_5 (VAR_24.btrs_written_in_block);
      for (VAR_26 = VAR_11; VAR_26 <= VAR_12; VAR_26++)
 if (FUNC_21 (VAR_5, VAR_26)
     && FUNC_17 (VAR_25->il.rtl->global_live_at_start, VAR_26))
   FUNC_20 (VAR_24.btrs_live_in_block, VAR_26);

      for (VAR_28 = FUNC_3 (VAR_25), VAR_29 = FUNC_13 (FUNC_2 (VAR_25));
    VAR_28 != VAR_29;
    VAR_28 = FUNC_13 (VAR_28), VAR_22++)
 {
   if (FUNC_9 (VAR_28))
     {
       int VAR_31;
       int VAR_32 = FUNC_10 (VAR_28);

       if (FUNC_28 (VAR_28, 0, &VAR_31))
  {
    btr_def VAR_33 = FUNC_24 (
        VAR_15, VAR_25, VAR_22, VAR_28, VAR_31,
        FUNC_21 (VAR_24.btrs_live_in_block, VAR_31),
        &VAR_23);

    VAR_16[VAR_32] = VAR_33;
    FUNC_20 (VAR_24.btrs_written_in_block, VAR_31);
    FUNC_20 (VAR_24.btrs_live_in_block, VAR_31);
    FUNC_34 (VAR_19[VAR_21], VAR_19[VAR_21],
          VAR_18[VAR_31 - VAR_11]);
    FUNC_19 (VAR_19[VAR_21], VAR_32);
    VAR_33->next_this_bb = VAR_27;
    VAR_27 = VAR_33;
    FUNC_19 (VAR_18[VAR_31 - VAR_11], VAR_32);
    FUNC_31 (VAR_31, VAR_24.users_this_bb);
  }

       else if (VAR_9
         && FUNC_8 (FUNC_14 (VAR_28)) == VAR_0)
  {
    btr_user VAR_34;



    for (VAR_34 = VAR_24.users_this_bb; VAR_34 != ((void*)0);
         VAR_34 = VAR_34->next)
      if (VAR_34->use)
        VAR_34->other_use_this_block = 1;
    FUNC_11 (VAR_24.btrs_written_in_block, VAR_5);
    FUNC_11 (VAR_24.btrs_live_in_block, VAR_5);
    FUNC_36 (VAR_24.bb_gen);
  }
       else
  {
    if (FUNC_25 (FUNC_14 (VAR_28), ((void*)0)))
      {
        btr_user VAR_35 = FUNC_29 (VAR_25, VAR_22, VAR_28);

        VAR_17[VAR_32] = VAR_35;
        if (VAR_35->use)
   FUNC_20 (VAR_24.btrs_live_in_block,
       FUNC_16 (VAR_35->use));
        else
   {
     int VAR_36;
     for (VAR_36 = VAR_11; VAR_36 <= VAR_12; VAR_36++)
       if (FUNC_21 (VAR_5, VAR_36)
    && FUNC_33 (VAR_36, VAR_36 + 1, VAR_35->insn,
            ((void*)0)))
         {
    FUNC_31 (VAR_36,
          VAR_24.users_this_bb);
    FUNC_20 (VAR_24.btrs_live_in_block, VAR_36);
         }
     FUNC_32 (FUNC_14 (VAR_28), FUNC_30, &VAR_24);
   }
        VAR_35->next = VAR_24.users_this_bb;
        VAR_24.users_this_bb = VAR_35;
      }
    if (FUNC_4 (VAR_28))
      {
        HARD_REG_SET *VAR_37 = &VAR_8;
        HARD_REG_SET VAR_38;
        rtx VAR_39 = FUNC_14 (VAR_28);
        int VAR_40;


        if (FUNC_8 (VAR_39) == VAR_3)
   for (VAR_40 = FUNC_23 (VAR_39, 0) - 1; VAR_40 >= 0; VAR_40--)
     if (FUNC_8 (FUNC_22 (VAR_39, 0, VAR_40)) == VAR_4)
       {
         FUNC_6 (VAR_38,
        VAR_8);
         VAR_37 = &VAR_38;
       }

        for (VAR_31 = VAR_11; VAR_31 <= VAR_12; VAR_31++)
   if (FUNC_21 (*VAR_37, VAR_31))
     FUNC_30 (VAR_14[VAR_31], VAR_1, &VAR_24);
      }
  }
     }
 }

      FUNC_7 (VAR_6[VAR_21], VAR_24.btrs_live_in_block);
      FUNC_7 (VAR_20[VAR_21], VAR_24.btrs_written_in_block);

      FUNC_18 (VAR_7[VAR_21], VAR_25->il.rtl->global_live_at_end);


      for (VAR_28 = FUNC_2 (VAR_25); VAR_28 != FUNC_3 (VAR_25) && ! FUNC_9 (VAR_28); )
 VAR_28 = FUNC_15 (VAR_28);





      if (FUNC_26 (VAR_28))
 {
   HARD_REG_SET VAR_41;

   FUNC_7 (VAR_41, VAR_8);
   FUNC_0 (VAR_41, VAR_5);
   FUNC_11 (VAR_7[VAR_21], VAR_41);
   VAR_30 = 1;
 }
      if (VAR_30 || FUNC_12 (VAR_28))
 {
   int VAR_42;

   for (VAR_42 = VAR_11; VAR_42 <= VAR_12; VAR_42++)
     if (FUNC_33 (VAR_42, VAR_42+1, VAR_28, ((void*)0)))
       FUNC_20 (VAR_7[VAR_21], VAR_42);
 }

      if (VAR_10)
 FUNC_27(VAR_21);
    }
}
