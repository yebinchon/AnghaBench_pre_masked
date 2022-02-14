
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_master_list_entry {int wq; int spinlock; int woken; } ;
struct dlm_ctxt {int dummy; } ;


 int FUNC_0 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct dlm_ctxt *VAR_0,
        struct dlm_master_list_entry *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);

 FUNC_3(&VAR_1->spinlock);
 FUNC_1(VAR_0, VAR_1);
 FUNC_2(&VAR_1->woken, 1);
 FUNC_4(&VAR_1->spinlock);

 FUNC_5(&VAR_1->wq);
}
