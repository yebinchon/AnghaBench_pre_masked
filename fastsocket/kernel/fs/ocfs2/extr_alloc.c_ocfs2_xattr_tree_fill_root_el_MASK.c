
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xt_list; } ;
struct TYPE_4__ {TYPE_1__ xb_root; } ;
struct ocfs2_xattr_block {TYPE_2__ xb_attrs; } ;
struct ocfs2_extent_tree {int * et_root_el; struct ocfs2_xattr_block* et_object; } ;



__attribute__((used)) static void FUNC_0(struct ocfs2_extent_tree *VAR_0)
{
 struct ocfs2_xattr_block *VAR_1 = VAR_0->et_object;

 VAR_0->et_root_el = &VAR_1->xb_attrs.xb_root.xt_list;
}
