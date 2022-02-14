
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_path {TYPE_1__* p_node; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {int * l_recs; int l_next_free_rec; } ;
struct ocfs2_extent_block {unsigned long long h_next_leaf_blk; int h_blkno; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {struct buffer_head* bh; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,struct ocfs2_path*,struct ocfs2_path*,int) ;
 int FUNC_6 (int *,struct ocfs2_extent_tree*,int ) ;
 int FUNC_7 (struct ocfs2_extent_tree*,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_10 (int *,struct buffer_head*) ;
 int FUNC_11 (int *,int ,struct ocfs2_path*,int) ;
 int FUNC_12 (struct ocfs2_extent_list*) ;
 int FUNC_13 (struct ocfs2_extent_list*,int *) ;
 int FUNC_14 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*,int,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_15 (int *,struct ocfs2_extent_tree*,int,struct ocfs2_path*) ;
 struct buffer_head* FUNC_16 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_17 (struct ocfs2_path*) ;
 int FUNC_18 (struct ocfs2_path*) ;
 struct buffer_head* FUNC_19 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_20(handle_t *VAR_2,
         struct ocfs2_extent_tree *VAR_3,
         struct ocfs2_path *VAR_4,
         struct ocfs2_path *VAR_5,
         int VAR_6,
         struct ocfs2_cached_dealloc_ctxt *VAR_7,
         int *VAR_8)
{
 int VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0;
 struct buffer_head *VAR_13, *VAR_14 = FUNC_19(VAR_5);
 struct ocfs2_extent_list *VAR_15, *VAR_16;
 struct ocfs2_extent_block *VAR_17;

 *VAR_8 = 0;

 VAR_15 = FUNC_17(VAR_5);
 VAR_16 = FUNC_17(VAR_4);
 VAR_13 = VAR_4->p_node[VAR_6].bh;
 FUNC_0(VAR_13 != VAR_5->p_node[VAR_6].bh);

 if (!FUNC_8(&VAR_16->l_recs[0]))
  return 0;

 VAR_17 = (struct ocfs2_extent_block *)FUNC_16(VAR_5)->b_data;
 if (FUNC_8(&VAR_15->l_recs[0])) {
  if (VAR_17->h_next_leaf_blk != 0ULL)
   return -VAR_0;

  if (FUNC_1(VAR_15->l_next_free_rec) > 1) {
   VAR_9 = FUNC_9(VAR_2, VAR_3->et_ci,
            FUNC_16(VAR_5),
            VAR_1);
   if (VAR_9) {
    FUNC_4(VAR_9);
    goto out;
   }

   FUNC_12(VAR_15);
  } else
   VAR_12 = 1;
 }

 if (VAR_17->h_next_leaf_blk == 0ULL &&
     FUNC_1(VAR_15->l_next_free_rec) == 1) {




  VAR_9 = FUNC_6(VAR_2, VAR_3,
         VAR_1);
  if (VAR_9) {
   FUNC_4(VAR_9);
   goto out;
  }

  VAR_11 = 1;
 }





 FUNC_0(VAR_12 && !VAR_11);

 VAR_9 = FUNC_11(VAR_2, VAR_3->et_ci, VAR_5,
        VAR_6);
 if (VAR_9) {
  FUNC_4(VAR_9);
  goto out;
 }

 for(VAR_10 = VAR_6 + 1; VAR_10 < FUNC_18(VAR_5); VAR_10++) {
  VAR_9 = FUNC_11(VAR_2, VAR_3->et_ci,
         VAR_5, VAR_10);
  if (VAR_9) {
   FUNC_4(VAR_9);
   goto out;
  }

  VAR_9 = FUNC_11(VAR_2, VAR_3->et_ci,
         VAR_4, VAR_10);
  if (VAR_9) {
   FUNC_4(VAR_9);
   goto out;
  }
 }

 if (!VAR_12) {






  FUNC_13(VAR_16, &VAR_15->l_recs[0]);
  FUNC_3(&VAR_15->l_recs[0], 0,
         sizeof(struct ocfs2_extent_rec));
 }
 if (VAR_17->h_next_leaf_blk == 0ULL) {






  FUNC_12(VAR_15);
 }

 VAR_9 = FUNC_10(VAR_2, FUNC_16(VAR_4));
 if (VAR_9)
  FUNC_4(VAR_9);
 VAR_9 = FUNC_10(VAR_2, FUNC_16(VAR_5));
 if (VAR_9)
  FUNC_4(VAR_9);

 if (VAR_11) {
  FUNC_14(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7);
  VAR_9 = FUNC_15(VAR_2, VAR_3, VAR_6,
      VAR_4);
  if (VAR_9) {
   FUNC_4(VAR_9);
   goto out;
  }

  VAR_17 = (struct ocfs2_extent_block *)FUNC_16(VAR_4)->b_data;
  FUNC_7(VAR_3, FUNC_2(VAR_17->h_blkno));






  if (VAR_12)
   FUNC_12(VAR_16);

  VAR_9 = FUNC_10(VAR_2, VAR_14);
  if (VAR_9)
   FUNC_4(VAR_9);

  *VAR_8 = 1;
 } else
  FUNC_5(VAR_2, VAR_4, VAR_5,
        VAR_6);

out:
 return VAR_9;
}
