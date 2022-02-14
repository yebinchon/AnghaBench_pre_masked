
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_set_ctxt {int dealloc; scalar_t__ meta_ac; scalar_t__ data_ac; int handle; int * member_1; int * member_0; } ;
struct ocfs2_xattr_search {int not_found; int bucket; struct buffer_head* xattr_bh; struct buffer_head* inode_bh; } ;
struct ocfs2_xattr_info {int name_index; char const* name; void const* value; size_t value_len; } ;
struct ocfs2_super {struct inode* osb_tl_inode; } ;
struct ocfs2_refcount_tree {int dummy; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int i_mutex; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int ip_dyn_features; int ip_xattr_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_5 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct ocfs2_super*) ;
 int FUNC_5 (struct inode*,struct ocfs2_dinode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_search*,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ocfs2_super*,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct inode*,struct ocfs2_dinode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_search*,struct ocfs2_xattr_set_ctxt*,int,int*) ;
 int FUNC_15 (struct inode*,struct buffer_head**,int) ;
 int FUNC_16 (struct inode*,int) ;
 int FUNC_17 (struct inode*,struct ocfs2_dinode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_search*,struct ocfs2_refcount_tree**,int*,int*) ;
 int FUNC_18 (struct ocfs2_super*,int *) ;
 int FUNC_19 (struct ocfs2_super*,int) ;
 int FUNC_20 (struct ocfs2_super*,int) ;
 int FUNC_21 (struct ocfs2_super*) ;
 scalar_t__ FUNC_22 (struct ocfs2_super*) ;
 int FUNC_23 (struct inode*,struct buffer_head*) ;
 int FUNC_24 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;
 int FUNC_25 (struct inode*,int,char const*,struct ocfs2_xattr_search*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct inode*) ;
 int FUNC_28 (struct inode*,int,char const*,struct ocfs2_xattr_search*) ;
 int FUNC_29 (int *) ;

int FUNC_30(struct inode *VAR_8,
      int VAR_9,
      const char *VAR_10,
      const void *VAR_11,
      size_t VAR_12,
      int VAR_13)
{
 struct buffer_head *VAR_14 = ((void*)0);
 struct ocfs2_dinode *VAR_15;
 int VAR_16, VAR_17, VAR_18 = 0, VAR_19 = 0;
 struct ocfs2_super *VAR_20 = FUNC_2(VAR_8->i_sb);
 struct inode *VAR_21 = VAR_20->osb_tl_inode;
 struct ocfs2_xattr_set_ctxt VAR_22 = { ((void*)0), ((void*)0), };
 struct ocfs2_refcount_tree *VAR_23 = ((void*)0);

 struct ocfs2_xattr_info VAR_24 = {
  .name_index = VAR_9,
  .name = VAR_10,
  .value = VAR_11,
  .value_len = VAR_12,
 };

 struct ocfs2_xattr_search VAR_25 = {
  .not_found = -VAR_1,
 };

 struct ocfs2_xattr_search VAR_26 = {
  .not_found = -VAR_1,
 };

 if (!FUNC_21(FUNC_2(VAR_8->i_sb)))
  return -VAR_3;





 VAR_26.bucket = FUNC_27(VAR_8);
 if (!VAR_26.bucket) {
  FUNC_8(-VAR_2);
  return -VAR_2;
 }

 VAR_16 = FUNC_15(VAR_8, &VAR_14, 1);
 if (VAR_16 < 0) {
  FUNC_8(VAR_16);
  goto cleanup_nolock;
 }
 VAR_25.inode_bh = VAR_26.inode_bh = VAR_14;
 VAR_15 = (struct ocfs2_dinode *)VAR_14->b_data;

 FUNC_7(&FUNC_1(VAR_8)->ip_xattr_sem);




 VAR_16 = FUNC_28(VAR_8, VAR_9, VAR_10, &VAR_25);
 if (VAR_16)
  goto cleanup;
 if (VAR_25.not_found) {
  VAR_16 = FUNC_25(VAR_8, VAR_9, VAR_10, &VAR_26);
  if (VAR_16)
   goto cleanup;
 }

 if (VAR_25.not_found && VAR_26.not_found) {
  VAR_16 = -VAR_1;
  if (VAR_13 & VAR_7)
   goto cleanup;
  VAR_16 = 0;
  if (!VAR_11)
   goto cleanup;
 } else {
  VAR_16 = -VAR_0;
  if (VAR_13 & VAR_6)
   goto cleanup;
 }


 if (FUNC_1(VAR_8)->ip_dyn_features & VAR_4 &&
     (!VAR_25.not_found || !VAR_26.not_found)) {
  VAR_16 = FUNC_17(VAR_8, VAR_15, &VAR_24,
         &VAR_25, &VAR_26, &VAR_23,
         &VAR_18, &VAR_19);
  if (VAR_16) {
   FUNC_8(VAR_16);
   goto cleanup;
  }
 }

 FUNC_9(&VAR_21->i_mutex);

 if (FUNC_22(VAR_20)) {
  VAR_16 = FUNC_4(VAR_20);
  if (VAR_16 < 0) {
   FUNC_10(&VAR_21->i_mutex);
   FUNC_8(VAR_16);
   goto cleanup;
  }
 }
 FUNC_10(&VAR_21->i_mutex);

 VAR_16 = FUNC_14(VAR_8, VAR_15, &VAR_24, &VAR_25,
     &VAR_26, &VAR_22, VAR_18, &VAR_17);
 if (VAR_16) {
  FUNC_8(VAR_16);
  goto cleanup;
 }


 VAR_17 += VAR_5;
 VAR_22.handle = FUNC_20(VAR_20, VAR_17 + VAR_19);
 if (FUNC_0(VAR_22.handle)) {
  VAR_16 = FUNC_3(VAR_22.handle);
  FUNC_8(VAR_16);
  goto cleanup;
 }

 VAR_16 = FUNC_5(VAR_8, VAR_15, &VAR_24, &VAR_25, &VAR_26, &VAR_22);

 FUNC_11(VAR_20, VAR_22.handle);

 if (VAR_22.data_ac)
  FUNC_13(VAR_22.data_ac);
 if (VAR_22.meta_ac)
  FUNC_13(VAR_22.meta_ac);
 if (FUNC_12(&VAR_22.dealloc))
  FUNC_19(VAR_20, 1);
 FUNC_18(VAR_20, &VAR_22.dealloc);

cleanup:
 if (VAR_23)
  FUNC_24(VAR_20, VAR_23, 1);
 FUNC_29(&FUNC_1(VAR_8)->ip_xattr_sem);
 if (!VAR_11 && !VAR_16) {
  VAR_16 = FUNC_23(VAR_8, VAR_14);
  if (VAR_16)
   FUNC_8(VAR_16);
 }
 FUNC_16(VAR_8, 1);
cleanup_nolock:
 FUNC_6(VAR_14);
 FUNC_6(VAR_26.xattr_bh);
 FUNC_26(VAR_26.bucket);

 return VAR_16;
}
