
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int slot_num; struct inode* sys_root_inode; int system_dir_blkno; struct inode* root_inode; int root_blkno; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 struct inode* FUNC_7 (struct ocfs2_super*,int,int ) ;
 struct inode* FUNC_8 (struct ocfs2_super*,int ,int ,int ) ;
 int FUNC_9 (struct ocfs2_super*,int) ;
 int FUNC_10 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_11(struct ocfs2_super *VAR_5)
{
 struct inode *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 int VAR_8;

 FUNC_4();

 VAR_6 = FUNC_8(VAR_5, VAR_5->root_blkno, VAR_3, 0);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  FUNC_5(VAR_7);
  goto bail;
 }
 VAR_5->root_inode = VAR_6;

 VAR_6 = FUNC_8(VAR_5, VAR_5->system_dir_blkno, VAR_3, 0);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  FUNC_5(VAR_7);
  goto bail;
 }
 VAR_5->sys_root_inode = VAR_6;

 for (VAR_8 = VAR_2;
      VAR_8 <= VAR_4; VAR_8++) {
  if (!FUNC_9(VAR_5, VAR_8))
   continue;
  VAR_6 = FUNC_7(VAR_5, VAR_8, VAR_5->slot_num);
  if (!VAR_6) {
   FUNC_10(VAR_5);
   VAR_7 = -VAR_0;
   FUNC_5(VAR_7);

   FUNC_3(VAR_1, "Unable to load system inode %d, "
        "possibly corrupt fs?", VAR_8);
   goto bail;
  }

  FUNC_2(VAR_6);
 }

bail:
 FUNC_6(VAR_7);
 return VAR_7;
}
