
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_super {int dentry_lock_work; int vol_state; } ;


 int VAR_0 ;
 struct ocfs2_super* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct ocfs2_super*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_3)
{
 struct ocfs2_super *VAR_4 = FUNC_0(VAR_3);


 if (!VAR_4 || FUNC_1(&VAR_4->vol_state) == VAR_1)
  goto out;


 FUNC_5(&VAR_2);
 FUNC_4(VAR_4, VAR_0);
 FUNC_6(&VAR_2);

 FUNC_2(&VAR_4->dentry_lock_work);
out:
 FUNC_3(VAR_3);
}
