
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {struct ocfs2_super* l_priv; } ;
struct ocfs2_refcount_tree {struct ocfs2_lock_res rf_lockres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocfs2_super*,struct ocfs2_lock_res*,int) ;
 int FUNC_1 (struct ocfs2_super*) ;

void FUNC_2(struct ocfs2_refcount_tree *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3 ? VAR_0 : VAR_1;
 struct ocfs2_lock_res *VAR_5 = &VAR_2->rf_lockres;
 struct ocfs2_super *VAR_6 = VAR_5->l_priv;

 if (!FUNC_1(VAR_6))
  FUNC_0(VAR_6, VAR_5, VAR_4);
}
