
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_search {int bucket; scalar_t__ here; } ;
struct ocfs2_xattr_header {int xh_count; struct ocfs2_xattr_entry* xh_entries; } ;
struct ocfs2_xattr_entry {int dummy; } ;
struct inode {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 struct ocfs2_xattr_header* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (struct ocfs2_xattr_entry*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct inode *VAR_1,
      handle_t *VAR_2,
      struct ocfs2_xattr_search *VAR_3)
{
 struct ocfs2_xattr_header *VAR_4 = FUNC_0(VAR_3->bucket);
 struct ocfs2_xattr_entry *VAR_5 = &VAR_4->xh_entries[
      FUNC_2(VAR_4->xh_count) - 1];
 int VAR_6 = 0;

 VAR_6 = FUNC_6(VAR_2, VAR_3->bucket,
      VAR_0);
 if (VAR_6) {
  FUNC_5(VAR_6);
  return;
 }


 FUNC_3(VAR_3->here, VAR_3->here + 1,
  (void *)VAR_5 - (void *)VAR_3->here);
 FUNC_4(VAR_5, 0, sizeof(struct ocfs2_xattr_entry));
 FUNC_1(&VAR_4->xh_count, -1);

 FUNC_7(VAR_2, VAR_3->bucket);
}
