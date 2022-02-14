
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_xattr_value_root {int dummy; } ;
struct ocfs2_xattr_header {struct ocfs2_xattr_entry* xh_entries; } ;
struct ocfs2_xattr_entry {int xe_name_len; int xe_name_offset; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_0,
          struct buffer_head *VAR_1,
          struct ocfs2_xattr_header *VAR_2,
          int VAR_3,
          struct ocfs2_xattr_value_root **VAR_4,
          struct buffer_head **VAR_5,
          void *VAR_6)
{
 struct ocfs2_xattr_entry *VAR_7 = &VAR_2->xh_entries[VAR_3];

 *VAR_4 = (struct ocfs2_xattr_value_root *)((void *)VAR_2 +
  FUNC_1(VAR_7->xe_name_offset) +
  FUNC_0(VAR_7->xe_name_len));

 if (VAR_5)
  *VAR_5 = VAR_1;

 return 0;
}
