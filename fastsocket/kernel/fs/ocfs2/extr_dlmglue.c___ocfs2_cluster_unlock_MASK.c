
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct TYPE_2__ {int * key; } ;
struct ocfs2_lock_res {TYPE_1__ l_lockdep_map; int l_lock; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct ocfs2_lock_res*,int) ;
 int FUNC_3 (struct ocfs2_super*,struct ocfs2_lock_res*) ;
 int FUNC_4 (TYPE_1__*,int,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct ocfs2_super *VAR_0,
       struct ocfs2_lock_res *VAR_1,
       int VAR_2,
       unsigned long VAR_3)
{
 unsigned long VAR_4;

 FUNC_0();
 FUNC_5(&VAR_1->l_lock, VAR_4);
 FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_0, VAR_1);
 FUNC_6(&VAR_1->l_lock, VAR_4);




 FUNC_1();
}
