
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_xattr_set_ctxt {struct ocfs2_alloc_context* data_ac; struct ocfs2_alloc_context* meta_ac; int * handle; } ;
struct ocfs2_xattr_search {int bucket; int xattr_bh; scalar_t__ not_found; struct buffer_head* inode_bh; } ;
struct ocfs2_xattr_info {int name_index; char const* name; void const* value; size_t value_len; } ;
struct ocfs2_dinode {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_4__ {int ip_xattr_sem; } ;
struct TYPE_3__ {scalar_t__ s_blocksize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct inode*,struct ocfs2_dinode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_search*,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,int,char const*,struct ocfs2_xattr_search*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int,char const*,struct ocfs2_xattr_search*) ;
 int FUNC_11 (int *) ;

int FUNC_12(handle_t *VAR_4,
      struct inode *VAR_5,
      struct buffer_head *VAR_6,
      int VAR_7,
      const char *VAR_8,
      const void *VAR_9,
      size_t VAR_10,
      int VAR_11,
      struct ocfs2_alloc_context *VAR_12,
      struct ocfs2_alloc_context *VAR_13)
{
 struct ocfs2_dinode *VAR_14;
 int VAR_15;

 struct ocfs2_xattr_info VAR_16 = {
  .name_index = VAR_7,
  .name = VAR_8,
  .value = VAR_9,
  .value_len = VAR_10,
 };

 struct ocfs2_xattr_search VAR_17 = {
  .not_found = -VAR_0,
 };

 struct ocfs2_xattr_search VAR_18 = {
  .not_found = -VAR_0,
 };

 struct ocfs2_xattr_set_ctxt VAR_19 = {
  .handle = VAR_4,
  .meta_ac = VAR_12,
  .data_ac = VAR_13,
 };

 if (!FUNC_6(FUNC_1(VAR_5->i_sb)))
  return -VAR_2;






 if (VAR_5->i_sb->s_blocksize == VAR_3) {
  VAR_18.bucket = FUNC_9(VAR_5);
  if (!VAR_18.bucket) {
   FUNC_5(-VAR_1);
   return -VAR_1;
  }
 }

 VAR_17.inode_bh = VAR_18.inode_bh = VAR_6;
 VAR_14 = (struct ocfs2_dinode *)VAR_6->b_data;

 FUNC_4(&FUNC_0(VAR_5)->ip_xattr_sem);

 VAR_15 = FUNC_10(VAR_5, VAR_7, VAR_8, &VAR_17);
 if (VAR_15)
  goto cleanup;
 if (VAR_17.not_found) {
  VAR_15 = FUNC_7(VAR_5, VAR_7, VAR_8, &VAR_18);
  if (VAR_15)
   goto cleanup;
 }

 VAR_15 = FUNC_2(VAR_5, VAR_14, &VAR_16, &VAR_17, &VAR_18, &VAR_19);

cleanup:
 FUNC_11(&FUNC_0(VAR_5)->ip_xattr_sem);
 FUNC_3(VAR_18.xattr_bh);
 FUNC_8(VAR_18.bucket);

 return VAR_15;
}
