
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct ocfs2_dentry_lock* dentry_lock_list; int dentry_lock_work; } ;
struct ocfs2_dentry_lock {struct ocfs2_dentry_lock* dl_next; int dl_lockres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ocfs2_super*,int *) ;
 int FUNC_2 (struct ocfs2_super*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ocfs2_super *VAR_3,
       struct ocfs2_dentry_lock *VAR_4)
{
 FUNC_1(VAR_3, &VAR_4->dl_lockres);
 FUNC_0(&VAR_4->dl_lockres);



 FUNC_4(&VAR_1);
 if (!VAR_3->dentry_lock_list &&
     !FUNC_2(VAR_3, VAR_0))
  FUNC_3(VAR_2, &VAR_3->dentry_lock_work);
 VAR_4->dl_next = VAR_3->dentry_lock_list;
 VAR_3->dentry_lock_list = VAR_4;
 FUNC_5(&VAR_1);
}
