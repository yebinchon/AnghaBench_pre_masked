
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_xattr_value_root {int dummy; } ;
struct ocfs2_xattr_value_buf {int vb_bh; struct ocfs2_xattr_value_root* vb_xv; int vb_access; } ;
struct ocfs2_xattr_search {TYPE_1__* bucket; int base; struct ocfs2_xattr_entry* here; } ;
struct ocfs2_xattr_header {int xh_entries; } ;
struct ocfs2_xattr_entry {int xe_name_len; } ;
struct inode {int i_sb; } ;
typedef int handle_t ;
struct TYPE_3__ {int * bu_bhs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int *,struct ocfs2_xattr_value_buf*,char*,int) ;
 void* FUNC_3 (TYPE_1__*,int) ;
 struct ocfs2_xattr_header* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int FUNC_6 (int ,struct ocfs2_xattr_header*,struct ocfs2_xattr_entry*,int*,int*) ;
 scalar_t__ FUNC_7 (struct ocfs2_xattr_entry*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1,
      handle_t *VAR_2,
      struct ocfs2_xattr_search *VAR_3,
      char *VAR_4,
      int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct ocfs2_xattr_value_root *VAR_9;
 struct ocfs2_xattr_entry *VAR_10 = VAR_3->here;
 struct ocfs2_xattr_header *VAR_11 = FUNC_4(VAR_3->bucket);
 void *VAR_12;
 struct ocfs2_xattr_value_buf VAR_13 = {
  .vb_access = VAR_0,
 };

 FUNC_0(!VAR_3->base || !VAR_10 || FUNC_7(VAR_10));

 VAR_6 = FUNC_6(VAR_1->i_sb, VAR_11,
      VAR_10 - VAR_11->xh_entries,
      &VAR_8,
      &VAR_7);
 if (VAR_6) {
  FUNC_5(VAR_6);
  goto out;
 }

 VAR_12 = FUNC_3(VAR_3->bucket, VAR_8);
 VAR_9 = (struct ocfs2_xattr_value_root *)(VAR_12 + VAR_7 +
   FUNC_1(VAR_10->xe_name_len));

 VAR_13.vb_xv = VAR_9;
 VAR_13.vb_bh = VAR_3->bucket->bu_bhs[VAR_8];
 VAR_6 = FUNC_2(VAR_1, VAR_2,
           &VAR_13, VAR_4, VAR_5);
 if (VAR_6)
  FUNC_5(VAR_6);
out:
 return VAR_6;
}
