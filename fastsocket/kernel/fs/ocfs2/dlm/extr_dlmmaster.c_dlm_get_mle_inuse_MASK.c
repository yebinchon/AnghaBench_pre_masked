
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_master_list_entry {int mle_refs; int inuse; struct dlm_ctxt* dlm; } ;
struct dlm_ctxt {int master_lock; int spinlock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dlm_master_list_entry *VAR_0)
{
 struct dlm_ctxt *VAR_1;
 VAR_1 = VAR_0->dlm;

 FUNC_0(&VAR_1->spinlock);
 FUNC_0(&VAR_1->master_lock);
 VAR_0->inuse++;
 FUNC_1(&VAR_0->mle_refs);
}
