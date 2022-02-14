
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_dentry_lock {int dl_lockres; } ;
struct dentry {int d_sb; struct ocfs2_dentry_lock* d_fsdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_super*,int *,int) ;
 int FUNC_2 (struct ocfs2_super*) ;

void FUNC_3(struct dentry *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3 ? VAR_0 : VAR_1;
 struct ocfs2_dentry_lock *VAR_5 = VAR_2->d_fsdata;
 struct ocfs2_super *VAR_6 = FUNC_0(VAR_2->d_sb);

 if (!FUNC_2(VAR_6))
  FUNC_1(VAR_6, &VAR_5->dl_lockres, VAR_4);
}
