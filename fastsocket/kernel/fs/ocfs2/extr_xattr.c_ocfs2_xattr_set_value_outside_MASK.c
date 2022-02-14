
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ l_next_free_rec; int l_count; scalar_t__ l_tree_depth; } ;
struct ocfs2_xattr_value_root {TYPE_1__ xr_list; scalar_t__ xr_last_eb_blk; scalar_t__ xr_clusters; } ;
struct ocfs2_xattr_value_buf {struct ocfs2_xattr_value_root* vb_xv; } ;
struct ocfs2_xattr_set_ctxt {int handle; } ;
struct ocfs2_xattr_search {void* base; } ;
struct ocfs2_xattr_info {int value_len; int value; int name; } ;
struct inode {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (struct inode*,int ,struct ocfs2_xattr_value_buf*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int ,size_t) ;
 int FUNC_4 (void*,int ,size_t) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct inode*,int ,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_value_buf*,size_t) ;
 int FUNC_7 (struct inode*,struct ocfs2_xattr_value_buf*,int ,struct ocfs2_xattr_set_ctxt*) ;
 size_t FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1,
      struct ocfs2_xattr_info *VAR_2,
      struct ocfs2_xattr_search *VAR_3,
      struct ocfs2_xattr_set_ctxt *VAR_4,
      struct ocfs2_xattr_value_buf *VAR_5,
      size_t VAR_6)
{
 size_t VAR_7 = FUNC_8(VAR_2->name);
 void *VAR_8 = VAR_3->base + VAR_6;
 struct ocfs2_xattr_value_root *VAR_9 = ((void*)0);
 size_t VAR_10 = FUNC_0(VAR_7) + VAR_0;
 int VAR_11 = 0;

 FUNC_4(VAR_8, 0, VAR_10);
 FUNC_3(VAR_8, VAR_2->name, VAR_7);
 VAR_9 = (struct ocfs2_xattr_value_root *)
  (VAR_8 + FUNC_0(VAR_7));
 VAR_9->xr_clusters = 0;
 VAR_9->xr_last_eb_blk = 0;
 VAR_9->xr_list.l_tree_depth = 0;
 VAR_9->xr_list.l_count = FUNC_2(1);
 VAR_9->xr_list.l_next_free_rec = 0;
 VAR_5->vb_xv = VAR_9;

 VAR_11 = FUNC_7(VAR_1, VAR_5, VAR_2->value_len, VAR_4);
 if (VAR_11 < 0) {
  FUNC_5(VAR_11);
  return VAR_11;
 }
 VAR_11 = FUNC_6(VAR_1, VAR_4->handle, VAR_2, VAR_3, VAR_5, VAR_6);
 if (VAR_11 < 0) {
  FUNC_5(VAR_11);
  return VAR_11;
 }
 VAR_11 = FUNC_1(VAR_1, VAR_4->handle, VAR_5,
           VAR_2->value, VAR_2->value_len);
 if (VAR_11 < 0)
  FUNC_5(VAR_11);

 return VAR_11;
}
