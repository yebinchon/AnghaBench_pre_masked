
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int dummy; } ;
struct ocfs2_super {struct ocfs2_lock_res osb_nfs_sync_lockres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocfs2_super*,struct ocfs2_lock_res*,int ) ;
 int FUNC_1 (struct ocfs2_super*) ;

void FUNC_2(struct ocfs2_super *VAR_2, int VAR_3)
{
 struct ocfs2_lock_res *VAR_4 = &VAR_2->osb_nfs_sync_lockres;

 if (!FUNC_1(VAR_2))
  FUNC_0(VAR_2, VAR_4,
         VAR_3 ? VAR_0 : VAR_1);
}
