
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_refcount_block {int rf_list; } ;
struct ocfs2_extent_tree {int * et_root_el; struct ocfs2_refcount_block* et_object; } ;



__attribute__((used)) static void FUNC_0(struct ocfs2_extent_tree *VAR_0)
{
 struct ocfs2_refcount_block *VAR_1 = VAR_0->et_object;

 VAR_0->et_root_el = &VAR_1->rf_list;
}
