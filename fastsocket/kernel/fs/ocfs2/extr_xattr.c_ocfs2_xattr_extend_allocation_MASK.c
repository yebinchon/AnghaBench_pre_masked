
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_xattr_value_buf {int (* vb_access ) (int *,int ,int ,int ) ;TYPE_1__* vb_xv; int vb_bh; } ;
struct ocfs2_xattr_set_ctxt {int meta_ac; int data_ac; int * handle; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct inode {int dummy; } ;
typedef int handle_t ;
typedef enum ocfs2_alloc_restarted { ____Placeholder_ocfs2_alloc_restarted } ocfs2_alloc_restarted ;
struct TYPE_2__ {int xr_clusters; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,struct ocfs2_extent_tree*,scalar_t__*,scalar_t__,int ,int ,int ,int*) ;
 int FUNC_6 (struct ocfs2_extent_tree*,int ,struct ocfs2_xattr_value_buf*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_2,
      u32 VAR_3,
      struct ocfs2_xattr_value_buf *VAR_4,
      struct ocfs2_xattr_set_ctxt *VAR_5)
{
 int VAR_6 = 0;
 handle_t *VAR_7 = VAR_5->handle;
 enum ocfs2_alloc_restarted VAR_8;
 u32 VAR_9, VAR_10 = FUNC_2(VAR_4->vb_xv->xr_clusters);
 struct ocfs2_extent_tree VAR_11;

 FUNC_3(0, "(clusters_to_add for xattr= %u)\n", VAR_3);

 FUNC_6(&VAR_11, FUNC_1(VAR_2), VAR_4);

 VAR_6 = VAR_4->vb_access(VAR_7, FUNC_1(VAR_2), VAR_4->vb_bh,
         VAR_0);
 if (VAR_6 < 0) {
  FUNC_4(VAR_6);
  goto leave;
 }

 VAR_9 = FUNC_2(VAR_4->vb_xv->xr_clusters);
 VAR_6 = FUNC_5(VAR_7,
          &VAR_11,
          &VAR_10,
          VAR_3,
          0,
          VAR_5->data_ac,
          VAR_5->meta_ac,
          &VAR_8);
 if (VAR_6 < 0) {
  FUNC_4(VAR_6);
  goto leave;
 }

 VAR_6 = FUNC_7(VAR_7, VAR_4->vb_bh);
 if (VAR_6 < 0) {
  FUNC_4(VAR_6);
  goto leave;
 }

 VAR_3 -= FUNC_2(VAR_4->vb_xv->xr_clusters) - VAR_9;





 FUNC_0(VAR_8 != VAR_1 || VAR_3);

leave:

 return VAR_6;
}
