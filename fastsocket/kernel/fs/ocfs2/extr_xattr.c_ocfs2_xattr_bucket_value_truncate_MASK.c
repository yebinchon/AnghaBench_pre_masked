
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_xattr_value_root {int dummy; } ;
struct ocfs2_xattr_value_buf {TYPE_2__* vb_bh; struct ocfs2_xattr_value_root* vb_xv; int vb_access; } ;
struct ocfs2_xattr_set_ctxt {int handle; } ;
struct ocfs2_xattr_header {struct ocfs2_xattr_entry* xh_entries; } ;
struct ocfs2_xattr_entry {int xe_value_size; int xe_name_len; int xe_name_offset; } ;
struct ocfs2_xattr_bucket {TYPE_2__** bu_bhs; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_4__ {scalar_t__ b_data; } ;
struct TYPE_3__ {size_t s_blocksize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ocfs2_xattr_bucket*) ;
 struct ocfs2_xattr_header* FUNC_3 (struct ocfs2_xattr_bucket*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,unsigned long long,int) ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int FUNC_8 (int ,struct ocfs2_xattr_bucket*,int ) ;
 int FUNC_9 (int ,struct ocfs2_xattr_bucket*) ;
 scalar_t__ FUNC_10 (struct ocfs2_xattr_entry*) ;
 int FUNC_11 (struct inode*,struct ocfs2_xattr_value_buf*,int,struct ocfs2_xattr_set_ctxt*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_3,
          struct ocfs2_xattr_bucket *VAR_4,
          int VAR_5,
          int VAR_6,
          struct ocfs2_xattr_set_ctxt *VAR_7)
{
 int VAR_8, VAR_9;
 u64 VAR_10;
 struct ocfs2_xattr_entry *VAR_11;
 struct ocfs2_xattr_header *VAR_12 = FUNC_3(VAR_4);
 size_t VAR_13 = VAR_3->i_sb->s_blocksize;
 struct ocfs2_xattr_value_buf VAR_14 = {
  .vb_access = VAR_2,
 };

 VAR_11 = &VAR_12->xh_entries[VAR_5];

 FUNC_0(!VAR_11 || FUNC_10(VAR_11));

 VAR_9 = FUNC_5(VAR_11->xe_name_offset) +
   FUNC_1(VAR_11->xe_name_len);

 VAR_10 = VAR_9 / VAR_13;


 FUNC_0(VAR_10 != (VAR_9 + VAR_1 - 1) / VAR_13);

 VAR_14.vb_bh = VAR_4->bu_bhs[VAR_10];
 FUNC_0(!VAR_14.vb_bh);

 VAR_14.vb_xv = (struct ocfs2_xattr_value_root *)
  (VAR_14.vb_bh->b_data + VAR_9 % VAR_13);
 FUNC_6(0, "truncate %u in xattr bucket %llu to %d bytes.\n",
      VAR_5, (unsigned long long)FUNC_2(VAR_4), VAR_6);
 VAR_8 = FUNC_11(VAR_3, &VAR_14, VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_7(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_8(VAR_7->handle, VAR_4,
      VAR_0);
 if (VAR_8) {
  FUNC_7(VAR_8);
  goto out;
 }

 VAR_11->xe_value_size = FUNC_4(VAR_6);

 FUNC_9(VAR_7->handle, VAR_4);

out:
 return VAR_8;
}
