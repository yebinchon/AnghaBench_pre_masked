
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_path {int p_tree_depth; } ;
struct ocfs2_insert_type {int ins_tree_depth; int ins_split; int ins_contig; int ins_appending; } ;
struct ocfs2_extent_tree {int et_root_el; int et_ci; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {int l_count; int l_next_free_rec; struct ocfs2_extent_rec* l_recs; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_6__ {int h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ocfs2_insert_type*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,struct ocfs2_extent_tree*,struct ocfs2_extent_rec*,struct ocfs2_insert_type*) ;
 int FUNC_5 (struct ocfs2_extent_tree*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,struct ocfs2_extent_tree*,int*,struct buffer_head**,struct ocfs2_alloc_context*) ;
 int FUNC_9 (int ,struct ocfs2_extent_rec*,int ,struct ocfs2_extent_rec*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,struct buffer_head**) ;
 struct ocfs2_extent_list* FUNC_12 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_13(handle_t *VAR_3, struct ocfs2_extent_tree *VAR_4,
       struct ocfs2_path *VAR_5,
       int VAR_6, u32 VAR_7,
       struct ocfs2_alloc_context *VAR_8)
{
 int VAR_9, VAR_10, VAR_11 = VAR_3->h_buffer_credits;
 struct buffer_head *VAR_12 = ((void*)0);
 struct ocfs2_extent_block *VAR_13;
 struct ocfs2_extent_list *VAR_14, *VAR_15;
 struct ocfs2_extent_rec VAR_16;
 struct ocfs2_extent_rec *VAR_17;
 struct ocfs2_insert_type VAR_18;




 VAR_15 = FUNC_12(VAR_5);
 VAR_17 = &VAR_15->l_recs[VAR_6];
 FUNC_9(FUNC_10(VAR_4->et_ci),
       &VAR_16, VAR_7, VAR_17);

 VAR_10 = VAR_5->p_tree_depth;
 if (VAR_10 > 0) {
  VAR_9 = FUNC_11(VAR_4->et_ci,
           FUNC_5(VAR_4),
           &VAR_12);
  if (VAR_9 < 0) {
   FUNC_3(VAR_9);
   goto out;
  }

  VAR_13 = (struct ocfs2_extent_block *) VAR_12->b_data;
  VAR_14 = &VAR_13->h_list;
 } else
  VAR_14 = FUNC_12(VAR_5);

 VAR_11 += VAR_5->p_tree_depth +
     FUNC_6(VAR_4->et_root_el);
 VAR_9 = FUNC_7(VAR_3, VAR_11);
 if (VAR_9) {
  FUNC_3(VAR_9);
  goto out;
 }

 if (FUNC_1(VAR_14->l_next_free_rec) ==
     FUNC_1(VAR_14->l_count)) {
  VAR_9 = FUNC_8(VAR_3, VAR_4, &VAR_10, &VAR_12,
          VAR_8);
  if (VAR_9) {
   FUNC_3(VAR_9);
   goto out;
  }
 }

 FUNC_2(&VAR_18, 0, sizeof(struct ocfs2_insert_type));
 VAR_18.ins_appending = VAR_0;
 VAR_18.ins_contig = VAR_1;
 VAR_18.ins_split = VAR_2;
 VAR_18.ins_tree_depth = VAR_10;

 VAR_9 = FUNC_4(VAR_3, VAR_4, &VAR_16, &VAR_18);
 if (VAR_9)
  FUNC_3(VAR_9);

out:
 FUNC_0(VAR_12);
 return VAR_9;
}
