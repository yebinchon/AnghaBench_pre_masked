
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_balance {int* insert_size; int* blknum; int* lnum; int* rnum; int tb_sb; struct buffer_head** R; struct buffer_head** L; int tb_path; } ;
struct buffer_info {int bi_parent; int bi_position; struct buffer_head* bi_bh; struct tree_balance* tb; } ;
struct buffer_head {int b_blocknr; } ;
struct TYPE_2__ {int s_sbh; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (int,char*,int,...) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct tree_balance*,int ,int) ;
 int FUNC_13 (struct buffer_info*,int,int) ;
 int FUNC_14 (int ,struct tree_balance*,int,int) ;
 int FUNC_15 (int ,struct tree_balance*,int,int) ;
 int FUNC_16 (struct tree_balance*,struct buffer_head*) ;
 int FUNC_17 (int ,char*,char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_18(struct tree_balance *VAR_6,
      int VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;
 struct buffer_head *VAR_11 = FUNC_3(VAR_6->tb_path, VAR_7);
 struct buffer_info VAR_12;

 VAR_9 = VAR_6->insert_size[VAR_7] / ((int)(VAR_0 + VAR_5));


 VAR_12.tb = VAR_6;
 VAR_12.bi_bh = VAR_11;
 VAR_12.bi_parent = FUNC_5(VAR_6->tb_path, VAR_7);
 VAR_12.bi_position = FUNC_4(VAR_6->tb_path, VAR_7 + 1);

 FUNC_13(&VAR_12, VAR_8, -VAR_9);

 FUNC_9(VAR_6->blknum[VAR_7] > 1,
        "tb->blknum[%d]=%d when insert_size < 0", VAR_7, VAR_6->blknum[VAR_7]);

 VAR_10 = FUNC_1(VAR_11);

 if (VAR_6->lnum[VAR_7] == 0 && VAR_6->rnum[VAR_7] == 0) {
  if (VAR_6->blknum[VAR_7] == 0) {

   struct buffer_head *VAR_13;

   FUNC_9(VAR_10
          || FUNC_0(VAR_11) !=
          FUNC_2(VAR_11) - VAR_0,
          "buffer must have only 0 keys (%d)", VAR_10);
   FUNC_9(VAR_12.bi_parent, "root has parent (%p)",
          VAR_12.bi_parent);


   if (!VAR_6->L[VAR_7 - 1] || !FUNC_1(VAR_6->L[VAR_7 - 1]))
    VAR_13 = VAR_6->R[VAR_7 - 1];
   else
    VAR_13 = VAR_6->L[VAR_7 - 1];

   FUNC_6(VAR_6->tb_sb, VAR_13->b_blocknr);

   FUNC_7(VAR_6->tb_sb,
        FUNC_10(VAR_6->tb_sb) - 1);

   FUNC_12(VAR_6,
       FUNC_8(VAR_6->tb_sb)->s_sbh,
       1);

   if (VAR_7 > 1)

    FUNC_11(VAR_13);



   FUNC_16(VAR_6, VAR_11);
   return;
  }
  return;
 }

 if (VAR_6->L[VAR_7] && VAR_6->lnum[VAR_7] == -FUNC_1(VAR_6->L[VAR_7]) - 1) {

  FUNC_9(VAR_6->rnum[VAR_7] != 0,
         "invalid tb->rnum[%d]==%d when joining S[h] with L[h]",
         VAR_7, VAR_6->rnum[VAR_7]);

  FUNC_14(VAR_3, VAR_6, VAR_7, VAR_10 + 1);
  FUNC_16(VAR_6, VAR_11);

  return;
 }

 if (VAR_6->R[VAR_7] && VAR_6->rnum[VAR_7] == -FUNC_1(VAR_6->R[VAR_7]) - 1) {
  FUNC_9(VAR_6->lnum[VAR_7] != 0,
         "invalid tb->lnum[%d]==%d when joining S[h] with R[h]",
         VAR_7, VAR_6->lnum[VAR_7]);

  FUNC_15(VAR_4, VAR_6, VAR_7, VAR_10 + 1);

  FUNC_16(VAR_6, VAR_11);
  return;
 }

 if (VAR_6->lnum[VAR_7] < 0) {
  FUNC_9(VAR_6->rnum[VAR_7] != 0,
         "wrong tb->rnum[%d]==%d when borrow from L[h]", VAR_7,
         VAR_6->rnum[VAR_7]);

  FUNC_15(VAR_1, VAR_6, VAR_7,
         -VAR_6->lnum[VAR_7]);
  return;
 }

 if (VAR_6->rnum[VAR_7] < 0) {
  FUNC_9(VAR_6->lnum[VAR_7] != 0,
         "invalid tb->lnum[%d]==%d when borrow from R[h]",
         VAR_7, VAR_6->lnum[VAR_7]);
  FUNC_14(VAR_2, VAR_6, VAR_7, -VAR_6->rnum[VAR_7]);
  return;
 }

 if (VAR_6->lnum[VAR_7] > 0) {
  FUNC_9(VAR_6->rnum[VAR_7] == 0 || VAR_6->lnum[VAR_7] + VAR_6->rnum[VAR_7] != VAR_10 + 1,
         "invalid tb->lnum[%d]==%d or tb->rnum[%d]==%d when S[h](item number == %d) is split between them",
         VAR_7, VAR_6->lnum[VAR_7], VAR_7, VAR_6->rnum[VAR_7], VAR_10);

  FUNC_14(VAR_3, VAR_6, VAR_7, VAR_6->lnum[VAR_7]);
  FUNC_15(VAR_4, VAR_6, VAR_7,
         VAR_6->rnum[VAR_7]);

  FUNC_16(VAR_6, VAR_11);

  return;
 }
 FUNC_17(VAR_6->tb_sb, "ibalance-2",
         "unexpected tb->lnum[%d]==%d or tb->rnum[%d]==%d",
         VAR_7, VAR_6->lnum[VAR_7], VAR_7, VAR_6->rnum[VAR_7]);
}
