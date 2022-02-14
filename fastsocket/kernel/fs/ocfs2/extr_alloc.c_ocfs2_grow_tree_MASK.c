
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_tree {struct ocfs2_extent_list* et_root_el; } ;
struct ocfs2_extent_list {int l_tree_depth; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,struct ocfs2_extent_tree*,struct buffer_head*,struct buffer_head**,struct ocfs2_alloc_context*) ;
 int FUNC_7 (struct ocfs2_extent_tree*,struct buffer_head**) ;
 int FUNC_8 (int *,struct ocfs2_extent_tree*,struct ocfs2_alloc_context*,struct buffer_head**) ;

__attribute__((used)) static int FUNC_9(handle_t *VAR_0, struct ocfs2_extent_tree *VAR_1,
      int *VAR_2, struct buffer_head **VAR_3,
      struct ocfs2_alloc_context *VAR_4)
{
 int VAR_5, VAR_6;
 struct ocfs2_extent_list *VAR_7 = VAR_1->et_root_el;
 int VAR_8 = FUNC_3(VAR_7->l_tree_depth);
 struct buffer_head *VAR_9 = ((void*)0);

 FUNC_0(VAR_4 == ((void*)0));

 VAR_6 = FUNC_7(VAR_1, &VAR_9);
 if (VAR_6 < 0) {
  VAR_5 = VAR_6;
  FUNC_5(VAR_5);
  goto out;
 }




 if (VAR_6) {
  FUNC_0(VAR_9);
  FUNC_4(0, "need to shift tree depth (current = %d)\n", VAR_8);




  VAR_5 = FUNC_8(VAR_0, VAR_1, VAR_4, &VAR_9);
  if (VAR_5 < 0) {
   FUNC_5(VAR_5);
   goto out;
  }
  VAR_8++;
  if (VAR_8 == 1) {
   FUNC_0(*VAR_3);
   FUNC_2(VAR_9);
   *VAR_3 = VAR_9;
   goto out;
  }
 }



 FUNC_4(0, "add branch. bh = %p\n", VAR_9);
 VAR_5 = FUNC_6(VAR_0, VAR_1, VAR_9, VAR_3,
          VAR_4);
 if (VAR_5 < 0) {
  FUNC_5(VAR_5);
  goto out;
 }

out:
 if (VAR_2)
  *VAR_2 = VAR_8;
 FUNC_1(VAR_9);
 return VAR_5;
}
