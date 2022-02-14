
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_list {int l_tree_depth; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, struct buffer_head *VAR_1)
{
 struct ocfs2_extent_block *VAR_2 =(struct ocfs2_extent_block *)VAR_1->b_data;
 struct ocfs2_extent_list *VAR_3 = &VAR_2->h_list;
 struct buffer_head **VAR_4 = VAR_0;


 if (FUNC_1(VAR_3->l_tree_depth) == 0) {
  FUNC_0(VAR_1);
  *VAR_4 = VAR_1;
 }
}
