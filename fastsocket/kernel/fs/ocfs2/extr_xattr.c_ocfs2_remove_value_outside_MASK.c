
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_value_root {int dummy; } ;
struct ocfs2_xattr_value_buf {struct ocfs2_xattr_value_root* vb_xv; } ;
struct ocfs2_xattr_set_ctxt {int dealloc; int * meta_ac; int handle; int * member_1; int * member_0; } ;
struct ocfs2_xattr_header {struct ocfs2_xattr_entry* xh_entries; int xh_count; } ;
struct ocfs2_xattr_entry {int xe_name_len; int xe_name_offset; } ;
struct ocfs2_super {int sb; } ;
struct ocfs2_caching_info {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ocfs2_super*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,struct ocfs2_xattr_value_root*,struct ocfs2_caching_info*,struct buffer_head*,int **,int*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct ocfs2_super*,int *) ;
 int FUNC_12 (struct ocfs2_super*,int) ;
 int FUNC_13 (struct ocfs2_super*,scalar_t__) ;
 scalar_t__ FUNC_14 (struct ocfs2_xattr_entry*) ;
 int FUNC_15 (struct inode*,struct ocfs2_xattr_value_buf*,int ,struct ocfs2_xattr_set_ctxt*) ;

__attribute__((used)) static int FUNC_16(struct inode*VAR_0,
          struct ocfs2_xattr_value_buf *VAR_1,
          struct ocfs2_xattr_header *VAR_2,
          struct ocfs2_caching_info *VAR_3,
          struct buffer_head *VAR_4)
{
 int VAR_5 = 0, VAR_6, VAR_7;
 struct ocfs2_super *VAR_8 = FUNC_1(VAR_0->i_sb);
 struct ocfs2_xattr_set_ctxt VAR_9 = { ((void*)0), ((void*)0), };
 void *VAR_10;

 FUNC_8(&VAR_9.dealloc);

 for (VAR_6 = 0; VAR_6 < FUNC_4(VAR_2->xh_count); VAR_6++) {
  struct ocfs2_xattr_entry *VAR_11 = &VAR_2->xh_entries[VAR_6];

  if (FUNC_14(VAR_11))
   continue;

  VAR_10 = (void *)VAR_2 +
   FUNC_4(VAR_11->xe_name_offset);
  VAR_1->vb_xv = (struct ocfs2_xattr_value_root *)
   (VAR_10 + FUNC_2(VAR_11->xe_name_len));

  VAR_5 = FUNC_9(VAR_0, VAR_1->vb_xv,
        VAR_3, VAR_4,
        &VAR_9.meta_ac,
        &VAR_7);

  VAR_9.handle = FUNC_13(VAR_8, VAR_7 +
     FUNC_10(VAR_8->sb));
  if (FUNC_0(VAR_9.handle)) {
   VAR_5 = FUNC_3(VAR_9.handle);
   FUNC_5(VAR_5);
   break;
  }

  VAR_5 = FUNC_15(VAR_0, VAR_1, 0, &VAR_9);
  if (VAR_5 < 0) {
   FUNC_5(VAR_5);
   break;
  }

  FUNC_6(VAR_8, VAR_9.handle);
  if (VAR_9.meta_ac) {
   FUNC_7(VAR_9.meta_ac);
   VAR_9.meta_ac = ((void*)0);
  }
 }

 if (VAR_9.meta_ac)
  FUNC_7(VAR_9.meta_ac);
 FUNC_12(VAR_8, 1);
 FUNC_11(VAR_8, &VAR_9.dealloc);
 return VAR_5;
}
