
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_value_root {int dummy; } ;
struct ocfs2_xattr_value_buf {struct ocfs2_xattr_value_root* vb_xv; } ;
struct ocfs2_xattr_header {struct ocfs2_xattr_entry* xh_entries; int xh_count; } ;
struct ocfs2_xattr_entry {int xe_name_len; int xe_name_offset; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_extent_tree*,int ,struct ocfs2_xattr_value_buf*) ;
 scalar_t__ FUNC_5 (struct ocfs2_xattr_entry*) ;
 int FUNC_6 (struct inode*,struct ocfs2_xattr_value_root*,struct ocfs2_extent_tree*,struct ocfs2_caching_info*,struct buffer_head*,struct ocfs2_cached_dealloc_ctxt*,int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0,
    struct ocfs2_xattr_value_buf *VAR_1,
    struct ocfs2_xattr_header *VAR_2,
    struct ocfs2_caching_info *VAR_3,
    struct buffer_head *VAR_4,
    struct ocfs2_cached_dealloc_ctxt *VAR_5)
{

 struct ocfs2_xattr_entry *VAR_6;
 struct ocfs2_xattr_value_root *VAR_7;
 struct ocfs2_extent_tree VAR_8;
 int VAR_9, VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < FUNC_2(VAR_2->xh_count); VAR_9++) {
  VAR_6 = &VAR_2->xh_entries[VAR_9];

  if (FUNC_5(VAR_6))
   continue;

  VAR_7 = (struct ocfs2_xattr_value_root *)((void *)VAR_2 +
   FUNC_2(VAR_6->xe_name_offset) +
   FUNC_1(VAR_6->xe_name_len));

  VAR_1->vb_xv = VAR_7;
  FUNC_4(&VAR_8, FUNC_0(VAR_0), VAR_1);

  VAR_10 = FUNC_6(VAR_0, VAR_7, &VAR_8,
       VAR_3, VAR_4,
       VAR_5, ((void*)0));
  if (VAR_10) {
   FUNC_3(VAR_10);
   break;
  }
 }

 return VAR_10;
}
