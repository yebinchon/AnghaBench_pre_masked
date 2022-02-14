
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {struct ocfs2_super* l_priv; } ;
struct ocfs2_refcount_tree {struct ocfs2_lock_res rf_lockres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_super*,struct ocfs2_lock_res*,int,int ,int ) ;
 scalar_t__ FUNC_2 (struct ocfs2_super*) ;
 scalar_t__ FUNC_3 (struct ocfs2_super*) ;

int FUNC_4(struct ocfs2_refcount_tree *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_4 ? VAR_0 : VAR_1;
 struct ocfs2_lock_res *VAR_7 = &VAR_3->rf_lockres;
 struct ocfs2_super *VAR_8 = VAR_7->l_priv;


 if (FUNC_2(VAR_8))
  return -VAR_2;

 if (FUNC_3(VAR_8))
  return 0;

 VAR_5 = FUNC_1(VAR_8, VAR_7, VAR_6, 0, 0);
 if (VAR_5 < 0)
  FUNC_0(VAR_5);

 return VAR_5;
}
