
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_extent_tree {struct buffer_head* et_root_bh; int et_ci; struct ocfs2_extent_list* et_root_el; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {scalar_t__ l_tree_depth; scalar_t__ l_next_free_rec; TYPE_1__* l_recs; } ;
struct ocfs2_extent_block {int h_blkno; struct ocfs2_extent_list h_list; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {int e_int_clusters; int e_blkno; scalar_t__ e_cpos; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_extent_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *,struct ocfs2_extent_tree*,int,struct ocfs2_alloc_context*,struct buffer_head**) ;
 int FUNC_13 (int *,struct ocfs2_extent_tree*,int ) ;
 int FUNC_14 (struct ocfs2_extent_tree*,int ) ;
 int FUNC_15 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_16 (int *,struct buffer_head*) ;
 int FUNC_17 (struct ocfs2_extent_list*) ;

__attribute__((used)) static int FUNC_18(handle_t *VAR_2,
      struct ocfs2_extent_tree *VAR_3,
      struct ocfs2_alloc_context *VAR_4,
      struct buffer_head **VAR_5)
{
 int VAR_6, VAR_7;
 u32 VAR_8;
 struct buffer_head *VAR_9 = ((void*)0);
 struct ocfs2_extent_block *VAR_10;
 struct ocfs2_extent_list *VAR_11;
 struct ocfs2_extent_list *VAR_12;

 FUNC_9();

 VAR_6 = FUNC_12(VAR_2, VAR_3, 1, VAR_4,
        &VAR_9);
 if (VAR_6 < 0) {
  FUNC_10(VAR_6);
  goto bail;
 }

 VAR_10 = (struct ocfs2_extent_block *) VAR_9->b_data;

 FUNC_0(!FUNC_1(VAR_10));

 VAR_12 = &VAR_10->h_list;
 VAR_11 = VAR_3->et_root_el;

 VAR_6 = FUNC_15(VAR_2, VAR_3->et_ci, VAR_9,
      VAR_0);
 if (VAR_6 < 0) {
  FUNC_10(VAR_6);
  goto bail;
 }


 VAR_12->l_tree_depth = VAR_11->l_tree_depth;
 VAR_12->l_next_free_rec = VAR_11->l_next_free_rec;
 for (VAR_7 = 0; VAR_7 < FUNC_6(VAR_11->l_next_free_rec); VAR_7++)
  VAR_12->l_recs[VAR_7] = VAR_11->l_recs[VAR_7];

 VAR_6 = FUNC_16(VAR_2, VAR_9);
 if (VAR_6 < 0) {
  FUNC_10(VAR_6);
  goto bail;
 }

 VAR_6 = FUNC_13(VAR_2, VAR_3,
           VAR_1);
 if (VAR_6 < 0) {
  FUNC_10(VAR_6);
  goto bail;
 }

 VAR_8 = FUNC_17(VAR_12);


 FUNC_5(&VAR_11->l_tree_depth, 1);
 VAR_11->l_recs[0].e_cpos = 0;
 VAR_11->l_recs[0].e_blkno = VAR_10->h_blkno;
 VAR_11->l_recs[0].e_int_clusters = FUNC_4(VAR_8);
 for (VAR_7 = 1; VAR_7 < FUNC_6(VAR_11->l_next_free_rec); VAR_7++)
  FUNC_8(&VAR_11->l_recs[VAR_7], 0, sizeof(struct ocfs2_extent_rec));
 VAR_11->l_next_free_rec = FUNC_3(1);



 if (VAR_11->l_tree_depth == FUNC_3(1))
  FUNC_14(VAR_3, FUNC_7(VAR_10->h_blkno));

 VAR_6 = FUNC_16(VAR_2, VAR_3->et_root_bh);
 if (VAR_6 < 0) {
  FUNC_10(VAR_6);
  goto bail;
 }

 *VAR_5 = VAR_9;
 VAR_9 = ((void*)0);
 VAR_6 = 0;
bail:
 FUNC_2(VAR_9);

 FUNC_11(VAR_6);
 return VAR_6;
}
