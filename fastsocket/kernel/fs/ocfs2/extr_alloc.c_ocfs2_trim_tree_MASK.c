
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ocfs2_truncate_context {int tc_dealloc; } ;
struct ocfs2_path {int p_tree_depth; TYPE_1__* p_node; } ;
struct ocfs2_extent_rec {int e_blkno; int e_cpos; int e_int_clusters; int e_leaf_clusters; int e_flags; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; int l_tree_depth; } ;
struct ocfs2_extent_block {int h_blkno; } ;
struct inode {int i_sb; int i_ino; } ;
struct buffer_head {scalar_t__ b_data; scalar_t__ b_blocknr; } ;
typedef int handle_t ;
struct TYPE_2__ {struct ocfs2_extent_list* el; struct buffer_head* bh; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ocfs2_extent_rec*,int ,int) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *,struct ocfs2_extent_block*) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,char*,int ,unsigned long long) ;
 scalar_t__ FUNC_15 (struct ocfs2_extent_rec*) ;
 int FUNC_16 (int *,struct buffer_head*) ;
 int FUNC_17 (struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;
 int FUNC_18 (int ,struct buffer_head*) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_1, struct ocfs2_path *VAR_2,
      handle_t *VAR_3, struct ocfs2_truncate_context *VAR_4,
      u32 VAR_5, u64 *VAR_6, u8 *VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = VAR_2->p_tree_depth;
 u32 VAR_11 = 0;
 u64 VAR_12 = 0;
 struct buffer_head *VAR_13;
 struct ocfs2_extent_list *VAR_14;
 struct ocfs2_extent_rec *VAR_15;

 *VAR_6 = 0;
 *VAR_7 = 0;

 while (VAR_10 >= 0) {
  VAR_13 = VAR_2->p_node[VAR_10].bh;
  VAR_14 = VAR_2->p_node[VAR_10].el;

  FUNC_10(0, "traveling tree (index = %d, block = %llu)\n",
       VAR_10, (unsigned long long)VAR_13->b_blocknr);

  FUNC_0(FUNC_5(VAR_14->l_next_free_rec) == 0);

  if (VAR_10 !=
      (VAR_2->p_tree_depth - FUNC_5(VAR_14->l_tree_depth))) {
   FUNC_14(VAR_1->i_sb,
        "Inode %lu has invalid ext. block %llu",
        VAR_1->i_ino,
        (unsigned long long)VAR_13->b_blocknr);
   VAR_8 = -VAR_0;
   goto out;
  }

find_tail_record:
  VAR_9 = FUNC_5(VAR_14->l_next_free_rec) - 1;
  VAR_15 = &VAR_14->l_recs[VAR_9];

  FUNC_10(0, "Extent list before: record %d: (%u, %u, %llu), "
       "next = %u\n", VAR_9, FUNC_7(VAR_15->e_cpos),
       FUNC_17(VAR_14, VAR_15),
       (unsigned long long)FUNC_8(VAR_15->e_blkno),
       FUNC_5(VAR_14->l_next_free_rec));

  FUNC_0(FUNC_17(VAR_14, VAR_15) < VAR_5);

  if (FUNC_5(VAR_14->l_tree_depth) == 0) {





   if (VAR_9 == 0 && FUNC_15(VAR_15)) {
    FUNC_9(VAR_15, 0,
           sizeof(struct ocfs2_extent_rec));
    VAR_14->l_next_free_rec = FUNC_2(0);

    goto delete;
   }
   if (FUNC_15(&VAR_14->l_recs[0])) {
    FUNC_4(&VAR_14->l_next_free_rec, -1);

    for(VAR_9 = 0;
        VAR_9 < FUNC_5(VAR_14->l_next_free_rec); VAR_9++)
     VAR_14->l_recs[VAR_9] = VAR_14->l_recs[VAR_9 + 1];

    FUNC_9(&VAR_14->l_recs[VAR_9], 0,
           sizeof(struct ocfs2_extent_rec));







    goto find_tail_record;
   }

   FUNC_4(&VAR_15->e_leaf_clusters, -VAR_5);





   VAR_11 = FUNC_5(VAR_15->e_leaf_clusters);
   VAR_11 += FUNC_7(VAR_15->e_cpos);




   *VAR_6 = FUNC_8(VAR_15->e_blkno)
    + FUNC_13(VAR_1->i_sb,
     FUNC_5(VAR_15->e_leaf_clusters));
   *VAR_7 = VAR_15->e_flags;




   if (FUNC_5(VAR_15->e_leaf_clusters) == 0) {
    FUNC_9(VAR_15, 0,
           sizeof(struct ocfs2_extent_rec));
    FUNC_4(&VAR_14->l_next_free_rec, -1);
   }
  } else {
   if (FUNC_8(VAR_15->e_blkno) == VAR_12) {
    FUNC_9(VAR_15, 0,
           sizeof(struct ocfs2_extent_rec));
    FUNC_4(&VAR_14->l_next_free_rec, -1);

    goto delete;
   }


   if (FUNC_5(VAR_14->l_next_free_rec) == 0)
    goto delete;






   if (VAR_11 == 0)
    goto delete;

   VAR_15->e_int_clusters = FUNC_3(VAR_11);
   FUNC_6(&VAR_15->e_int_clusters,
         -FUNC_7(VAR_15->e_cpos));





    FUNC_0(FUNC_7(VAR_15->e_int_clusters) == 0);
  }

delete:
  VAR_8 = FUNC_16(VAR_3, VAR_13);
  if (VAR_8) {
   FUNC_11(VAR_8);
   goto out;
  }

  FUNC_10(0, "extent list container %llu, after: record %d: "
       "(%u, %u, %llu), next = %u.\n",
       (unsigned long long)VAR_13->b_blocknr, VAR_9,
       FUNC_7(VAR_15->e_cpos), FUNC_17(VAR_14, VAR_15),
       (unsigned long long)FUNC_8(VAR_15->e_blkno),
       FUNC_5(VAR_14->l_next_free_rec));





  if (VAR_10 > 0 && FUNC_5(VAR_14->l_next_free_rec) == 0) {
   struct ocfs2_extent_block *VAR_16 =
    (struct ocfs2_extent_block *)VAR_13->b_data;





   VAR_12 = FUNC_8(VAR_16->h_blkno);

   FUNC_10(0, "deleting this extent block.\n");

   FUNC_18(FUNC_1(VAR_1), VAR_13);

   FUNC_0(FUNC_17(VAR_14, &VAR_14->l_recs[0]));
   FUNC_0(FUNC_7(VAR_14->l_recs[0].e_cpos));
   FUNC_0(FUNC_8(VAR_14->l_recs[0].e_blkno));

   VAR_8 = FUNC_12(&VAR_4->tc_dealloc, VAR_16);

   if (VAR_8 < 0)
    FUNC_11(VAR_8);
  } else {
   VAR_12 = 0;
  }

  VAR_10--;
 }

 VAR_8 = 0;
out:
 return VAR_8;
}
