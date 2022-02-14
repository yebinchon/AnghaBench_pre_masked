
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tree_balance {int* insert_size; int* blknum; int ** FEB; int tb_sb; int ** CFR; int ** CFL; int ** FR; int ** FL; int ** R; int ** L; TYPE_1__* tb_path; int transaction_handle; int fs_gen; } ;
struct item_head {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_8__ {int s_fix_nodes; } ;
struct TYPE_7__ {int pos_in_item; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct tree_balance*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 struct buffer_head* FUNC_5 (TYPE_1__*) ;
 TYPE_3__* FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (int,struct tree_balance*,int,int,int,struct item_head*,void const*) ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (struct tree_balance*,int) ;
 int FUNC_15 (struct tree_balance*,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct tree_balance*) ;
 int FUNC_18 (struct tree_balance*,int) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int ,TYPE_1__*) ;
 int FUNC_22 (struct buffer_head*,int ,int,int) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (int ,char*,char*,...) ;
 int FUNC_25 (int ,int ,int) ;
 int FUNC_26 (int ,int *) ;
 int FUNC_27 (struct tree_balance*) ;

int FUNC_28(int VAR_8, struct tree_balance *VAR_9,
       struct item_head *VAR_10, const void *VAR_11)
{
 int VAR_12, VAR_13, VAR_14 = FUNC_4(VAR_9->tb_path);
 int VAR_15;




 int VAR_16 = 0;
 struct buffer_head *VAR_17 = FUNC_5(VAR_9->tb_path);

 ++FUNC_6(VAR_9->tb_sb)->s_fix_nodes;

 VAR_15 = VAR_9->tb_path->pos_in_item;

 VAR_9->fs_gen = FUNC_16(VAR_9->tb_sb);






 FUNC_25(VAR_9->tb_sb,
         FUNC_8(VAR_9->tb_sb), 1);
 FUNC_19(VAR_9->transaction_handle, VAR_9->tb_sb,
      FUNC_8(VAR_9->tb_sb));
 if (FUNC_2(VAR_9))
  return VAR_6;


 if (FUNC_11(VAR_17)) {
  FUNC_9(VAR_17);
  if (FUNC_2(VAR_9))
   return VAR_6;
 }
 if (FUNC_17(VAR_9) == VAR_6)

  return VAR_6;


 for (VAR_13 = 0; VAR_13 < VAR_4 && VAR_9->insert_size[VAR_13]; VAR_13++) {
  VAR_12 = FUNC_14(VAR_9, VAR_13);
  if (VAR_12 != VAR_0)
   goto repeat;

  VAR_12 = FUNC_13(VAR_8, VAR_9, VAR_13, VAR_14,
        VAR_15, VAR_10, VAR_11);
  if (VAR_12 != VAR_0) {
   if (VAR_12 == VAR_5) {

    VAR_12 = FUNC_18(VAR_9, VAR_13);
    if (VAR_12 != VAR_0)
     goto repeat;
    if (VAR_13 != VAR_4 - 1)
     VAR_9->insert_size[VAR_13 + 1] = 0;

    break;
   }
   goto repeat;
  }

  VAR_12 = FUNC_18(VAR_9, VAR_13);
  if (VAR_12 != VAR_0)
   goto repeat;



  VAR_12 = FUNC_15(VAR_9, VAR_13);
  if (VAR_12 != VAR_0)
   goto repeat;

  if (!FUNC_3(VAR_9->tb_path, VAR_13)) {



   FUNC_7(VAR_9->blknum[VAR_13] != 1,
          "PAP-8350: creating new empty root");

   if (VAR_13 < VAR_4 - 1)
    VAR_9->insert_size[VAR_13 + 1] = 0;
  } else if (!FUNC_3(VAR_9->tb_path, VAR_13 + 1)) {
   if (VAR_9->blknum[VAR_13] > 1) {





    FUNC_7(VAR_13 == VAR_4 - 1,
           "PAP-8355: attempt to create too high of a tree");

    VAR_9->insert_size[VAR_13 + 1] =
        (VAR_1 +
         VAR_2) * (VAR_9->blknum[VAR_13] - 1) +
        VAR_1;
   } else if (VAR_13 < VAR_4 - 1)
    VAR_9->insert_size[VAR_13 + 1] = 0;
  } else
   VAR_9->insert_size[VAR_13 + 1] =
       (VAR_1 + VAR_2) * (VAR_9->blknum[VAR_13] - 1);
 }

 VAR_12 = FUNC_27(VAR_9);
 if (VAR_12 == VAR_0) {
  if (FUNC_2(VAR_9)) {
   VAR_16 = 1;
   VAR_12 = VAR_6;
   goto repeat;
  } else {
   return VAR_0;
  }
 } else {
  VAR_16 = 1;
  goto repeat;
 }

      repeat:





 {
  int VAR_18;


  if (VAR_16) {
   FUNC_21(VAR_9->tb_sb, VAR_9->tb_path);
  } else {
   FUNC_20(VAR_9->tb_path);
  }

  for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++) {
   if (VAR_16) {
    FUNC_26(VAR_9->tb_sb,
         VAR_9->L[VAR_18]);
    FUNC_26(VAR_9->tb_sb,
         VAR_9->R[VAR_18]);
    FUNC_26(VAR_9->tb_sb,
         VAR_9->FL[VAR_18]);
    FUNC_26(VAR_9->tb_sb,
         VAR_9->FR[VAR_18]);
    FUNC_26(VAR_9->tb_sb,
         VAR_9->
         CFL[VAR_18]);
    FUNC_26(VAR_9->tb_sb,
         VAR_9->
         CFR[VAR_18]);
   }

   FUNC_10(VAR_9->L[VAR_18]);
   FUNC_10(VAR_9->R[VAR_18]);
   FUNC_10(VAR_9->FL[VAR_18]);
   FUNC_10(VAR_9->FR[VAR_18]);
   FUNC_10(VAR_9->CFL[VAR_18]);
   FUNC_10(VAR_9->CFR[VAR_18]);

   VAR_9->L[VAR_18] = ((void*)0);
   VAR_9->R[VAR_18] = ((void*)0);
   VAR_9->FL[VAR_18] = ((void*)0);
   VAR_9->FR[VAR_18] = ((void*)0);
   VAR_9->CFL[VAR_18] = ((void*)0);
   VAR_9->CFR[VAR_18] = ((void*)0);
  }

  if (VAR_16) {
   for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
    if (VAR_9->FEB[VAR_18])
     FUNC_26
         (VAR_9->tb_sb, VAR_9->FEB[VAR_18]);
   }
  }
  return VAR_12;
 }

}
