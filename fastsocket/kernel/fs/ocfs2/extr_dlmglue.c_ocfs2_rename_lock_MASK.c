
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int dummy; } ;
struct ocfs2_super {struct ocfs2_lock_res osb_rename_lockres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_super*,struct ocfs2_lock_res*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct ocfs2_super*) ;
 scalar_t__ FUNC_3 (struct ocfs2_super*) ;

int FUNC_4(struct ocfs2_super *VAR_2)
{
 int VAR_3;
 struct ocfs2_lock_res *VAR_4 = &VAR_2->osb_rename_lockres;

 if (FUNC_2(VAR_2))
  return -VAR_1;

 if (FUNC_3(VAR_2))
  return 0;

 VAR_3 = FUNC_1(VAR_2, VAR_4, VAR_0, 0, 0);
 if (VAR_3 < 0)
  FUNC_0(VAR_3);

 return VAR_3;
}
