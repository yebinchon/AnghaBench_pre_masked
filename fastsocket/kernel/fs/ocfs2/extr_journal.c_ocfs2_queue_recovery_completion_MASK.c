
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_quota_recovery {int dummy; } ;
struct ocfs2_la_recovery_item {int lri_slot; int lri_list; struct ocfs2_quota_recovery* lri_qrec; struct ocfs2_dinode* lri_tl_dinode; struct ocfs2_dinode* lri_la_dinode; } ;
struct ocfs2_journal {int j_lock; int j_recovery_work; int j_la_cleanups; } ;
struct ocfs2_dinode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ocfs2_dinode*) ;
 struct ocfs2_la_recovery_item* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ocfs2_quota_recovery*) ;
 int VAR_2 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ocfs2_journal *VAR_3,
         int VAR_4,
         struct ocfs2_dinode *VAR_5,
         struct ocfs2_dinode *VAR_6,
         struct ocfs2_quota_recovery *VAR_7)
{
 struct ocfs2_la_recovery_item *VAR_8;

 VAR_8 = FUNC_2(sizeof(struct ocfs2_la_recovery_item), VAR_1);
 if (!VAR_8) {



  if (VAR_5)
   FUNC_1(VAR_5);

  if (VAR_6)
   FUNC_1(VAR_6);

  if (VAR_7)
   FUNC_5(VAR_7);

  FUNC_4(-VAR_0);
  return;
 }

 FUNC_0(&VAR_8->lri_list);
 VAR_8->lri_la_dinode = VAR_5;
 VAR_8->lri_slot = VAR_4;
 VAR_8->lri_tl_dinode = VAR_6;
 VAR_8->lri_qrec = VAR_7;

 FUNC_7(&VAR_3->j_lock);
 FUNC_3(&VAR_8->lri_list, &VAR_3->j_la_cleanups);
 FUNC_6(VAR_2, &VAR_3->j_recovery_work);
 FUNC_8(&VAR_3->j_lock);
}
