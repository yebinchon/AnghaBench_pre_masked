
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct inode* root_inode; struct inode* sys_root_inode; struct inode** system_inodes; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_super *VAR_1)
{
 int VAR_2;
 struct inode *VAR_3;

 FUNC_1();

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = VAR_1->system_inodes[VAR_2];
  if (VAR_3) {
   FUNC_0(VAR_3);
   VAR_1->system_inodes[VAR_2] = ((void*)0);
  }
 }

 VAR_3 = VAR_1->sys_root_inode;
 if (VAR_3) {
  FUNC_0(VAR_3);
  VAR_1->sys_root_inode = ((void*)0);
 }

 VAR_3 = VAR_1->root_inode;
 if (VAR_3) {
  FUNC_0(VAR_3);
  VAR_1->root_inode = ((void*)0);
 }

 FUNC_2(0);
}
