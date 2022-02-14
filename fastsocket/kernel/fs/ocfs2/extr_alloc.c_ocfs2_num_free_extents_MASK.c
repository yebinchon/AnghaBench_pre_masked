
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_extent_tree {int et_ci; struct ocfs2_extent_list* et_root_el; } ;
struct ocfs2_extent_list {scalar_t__ l_tree_depth; int l_next_free_rec; int l_count; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct ocfs2_extent_tree*) ;
 int FUNC_7 (int ,scalar_t__,struct buffer_head**) ;

int FUNC_8(struct ocfs2_super *VAR_0,
      struct ocfs2_extent_tree *VAR_1)
{
 int VAR_2;
 struct ocfs2_extent_list *VAR_3 = ((void*)0);
 struct ocfs2_extent_block *VAR_4;
 struct buffer_head *VAR_5 = ((void*)0);
 u64 VAR_6 = 0;

 FUNC_3();

 VAR_3 = VAR_1->et_root_el;
 VAR_6 = FUNC_6(VAR_1);

 if (VAR_6) {
  VAR_2 = FUNC_7(VAR_1->et_ci, VAR_6,
       &VAR_5);
  if (VAR_2 < 0) {
   FUNC_4(VAR_2);
   goto bail;
  }
  VAR_4 = (struct ocfs2_extent_block *) VAR_5->b_data;
  VAR_3 = &VAR_4->h_list;
 }

 FUNC_0(VAR_3->l_tree_depth != 0);

 VAR_2 = FUNC_2(VAR_3->l_count) - FUNC_2(VAR_3->l_next_free_rec);
bail:
 FUNC_1(VAR_5);

 FUNC_5(VAR_2);
 return VAR_2;
}
