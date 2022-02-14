
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_xattr_header {int dummy; } ;
struct ocfs2_xattr_entry {int xe_name_hash; int xe_name_len; int xe_name_offset; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_0,
       struct ocfs2_xattr_header *VAR_1,
       struct ocfs2_xattr_entry *VAR_2)
{
 u32 VAR_3 = 0;
 char *VAR_4 = (char *)VAR_1 + FUNC_1(VAR_2->xe_name_offset);

 VAR_3 = FUNC_2(VAR_0, VAR_4, VAR_2->xe_name_len);
 VAR_2->xe_name_hash = FUNC_0(VAR_3);

 return;
}
