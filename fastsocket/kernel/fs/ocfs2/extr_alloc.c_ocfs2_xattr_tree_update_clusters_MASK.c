
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int xt_clusters; } ;
struct TYPE_4__ {TYPE_1__ xb_root; } ;
struct ocfs2_xattr_block {TYPE_2__ xb_attrs; } ;
struct ocfs2_extent_tree {struct ocfs2_xattr_block* et_object; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_extent_tree *VAR_0,
          u32 VAR_1)
{
 struct ocfs2_xattr_block *VAR_2 = VAR_0->et_object;

 FUNC_0(&VAR_2->xb_attrs.xb_root.xt_clusters, VAR_1);
}
