
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_value_buf {TYPE_1__* vb_xv; } ;
struct ocfs2_extent_tree {int * et_root_el; struct ocfs2_xattr_value_buf* et_object; } ;
struct TYPE_2__ {int xr_list; } ;



__attribute__((used)) static void FUNC_0(struct ocfs2_extent_tree *VAR_0)
{
 struct ocfs2_xattr_value_buf *VAR_1 = VAR_0->et_object;

 VAR_0->et_root_el = &VAR_1->vb_xv->xr_list;
}
