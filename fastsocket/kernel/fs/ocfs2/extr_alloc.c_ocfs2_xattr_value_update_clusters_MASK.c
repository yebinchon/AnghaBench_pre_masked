
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_xattr_value_buf {TYPE_1__* vb_xv; } ;
struct ocfs2_extent_tree {struct ocfs2_xattr_value_buf* et_object; } ;
struct TYPE_2__ {int xr_clusters; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_extent_tree *VAR_0,
           u32 VAR_1)
{
 struct ocfs2_xattr_value_buf *VAR_2 = VAR_0->et_object;

 FUNC_0(&VAR_2->vb_xv->xr_clusters, VAR_1);
}
