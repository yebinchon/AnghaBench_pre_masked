
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct ocfs2_dentry_lock* dentry_lock_list; } ;
struct ocfs2_dentry_lock {int dl_inode; struct ocfs2_dentry_lock* dl_next; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_dentry_lock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_super *VAR_1, int VAR_2)
{
 struct ocfs2_dentry_lock *VAR_3;

 FUNC_2(&VAR_0);
 while (VAR_1->dentry_lock_list && (VAR_2 < 0 || VAR_2--)) {
  VAR_3 = VAR_1->dentry_lock_list;
  VAR_1->dentry_lock_list = VAR_3->dl_next;
  FUNC_3(&VAR_0);
  FUNC_0(VAR_3->dl_inode);
  FUNC_1(VAR_3);
  FUNC_2(&VAR_0);
 }
 FUNC_3(&VAR_0);
}
