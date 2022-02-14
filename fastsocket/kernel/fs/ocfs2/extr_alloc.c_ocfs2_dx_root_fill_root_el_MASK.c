
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_tree {int * et_root_el; struct ocfs2_dx_root_block* et_object; } ;
struct ocfs2_dx_root_block {int dr_list; } ;



__attribute__((used)) static void FUNC_0(struct ocfs2_extent_tree *VAR_0)
{
 struct ocfs2_dx_root_block *VAR_1 = VAR_0->et_object;

 VAR_0->et_root_el = &VAR_1->dr_list;
}
