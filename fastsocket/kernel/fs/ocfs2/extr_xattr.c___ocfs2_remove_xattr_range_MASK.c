
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ocfs2_xattr_value_buf {int (* vb_access ) (int *,int ,int ,int ) ;int vb_bh; TYPE_1__* vb_xv; } ;
struct ocfs2_xattr_set_ctxt {int dealloc; int meta_ac; int * handle; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct inode {int i_sb; } ;
typedef int handle_t ;
struct TYPE_2__ {int xr_clusters; } ;


 int FUNC_0 (struct inode*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct inode*,int *,int ,int ,int ,int *,int) ;
 int FUNC_7 (struct ocfs2_extent_tree*,int ,struct ocfs2_xattr_value_buf*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,struct ocfs2_extent_tree*,int ,int ,int ,int *) ;
 int FUNC_10 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_2,
          struct ocfs2_xattr_value_buf *VAR_3,
          u32 VAR_4, u32 VAR_5, u32 VAR_6,
          unsigned int VAR_7,
          struct ocfs2_xattr_set_ctxt *VAR_8)
{
 int VAR_9;
 u64 VAR_10 = FUNC_5(VAR_2->i_sb, VAR_5);
 handle_t *VAR_11 = VAR_8->handle;
 struct ocfs2_extent_tree VAR_12;

 FUNC_7(&VAR_12, FUNC_0(VAR_2), VAR_3);

 VAR_9 = VAR_3->vb_access(VAR_11, FUNC_0(VAR_2), VAR_3->vb_bh,
       VAR_1);
 if (VAR_9) {
  FUNC_2(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_9(VAR_11, &VAR_12, VAR_4, VAR_6, VAR_8->meta_ac,
      &VAR_8->dealloc);
 if (VAR_9) {
  FUNC_2(VAR_9);
  goto out;
 }

 FUNC_1(&VAR_3->vb_xv->xr_clusters, -VAR_6);

 VAR_9 = FUNC_8(VAR_11, VAR_3->vb_bh);
 if (VAR_9) {
  FUNC_2(VAR_9);
  goto out;
 }

 if (VAR_7 & VAR_0)
  VAR_9 = FUNC_6(VAR_2, VAR_11,
     FUNC_3(VAR_2->i_sb,
         VAR_10),
     VAR_6, VAR_8->meta_ac, &VAR_8->dealloc, 1);
 else
  VAR_9 = FUNC_4(&VAR_8->dealloc,
        VAR_10, VAR_6);
 if (VAR_9)
  FUNC_2(VAR_9);

out:
 return VAR_9;
}
