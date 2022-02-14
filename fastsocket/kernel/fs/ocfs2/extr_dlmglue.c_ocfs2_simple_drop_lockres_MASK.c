
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_super*,struct ocfs2_lock_res*) ;
 int FUNC_2 (struct ocfs2_lock_res*) ;

void FUNC_3(struct ocfs2_super *VAR_0,
          struct ocfs2_lock_res *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_2);
}
