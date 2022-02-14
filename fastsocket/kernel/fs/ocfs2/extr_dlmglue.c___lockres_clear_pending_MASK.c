
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int l_flags; unsigned int l_pending_gen; int l_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ocfs2_lock_res*,int) ;
 int FUNC_2 (struct ocfs2_super*) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_lock_res *VAR_2,
        unsigned int VAR_3,
        struct ocfs2_super *VAR_4)
{
 FUNC_0(&VAR_2->l_lock);





 if (!(VAR_2->l_flags & VAR_1) ||
     (VAR_2->l_pending_gen != VAR_3))
  return;

 FUNC_1(VAR_2, VAR_1);
 VAR_2->l_pending_gen++;





 if (VAR_2->l_flags & VAR_0)
  FUNC_2(VAR_4);
}
