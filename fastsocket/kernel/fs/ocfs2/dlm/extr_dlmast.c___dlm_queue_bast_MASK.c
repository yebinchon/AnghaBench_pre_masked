
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock {int bast_pending; int spinlock; int bast_list; } ;
struct dlm_ctxt {int pending_basts; int ast_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dlm_lock*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct dlm_ctxt *VAR_0, struct dlm_lock *VAR_1)
{
 FUNC_6();

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);
 FUNC_1(&VAR_0->ast_lock);

 FUNC_0(!FUNC_4(&VAR_1->bast_list));
 if (VAR_1->bast_pending)
  FUNC_5(0, "lock has a bast getting flushed right now\n");


 FUNC_2(VAR_1);
 FUNC_7(&VAR_1->spinlock);
 FUNC_3(&VAR_1->bast_list, &VAR_0->pending_basts);
 VAR_1->bast_pending = 1;
 FUNC_8(&VAR_1->spinlock);
}
