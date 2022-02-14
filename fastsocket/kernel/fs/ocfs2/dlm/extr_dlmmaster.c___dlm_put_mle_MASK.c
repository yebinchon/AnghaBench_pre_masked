
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcount; } ;
struct dlm_master_list_entry {TYPE_1__ mle_refs; struct dlm_ctxt* dlm; } ;
struct dlm_ctxt {int master_lock; int spinlock; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct dlm_master_list_entry*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,char*,struct dlm_master_list_entry*) ;

__attribute__((used)) static void FUNC_6(struct dlm_master_list_entry *VAR_2)
{
 struct dlm_ctxt *VAR_3;
 VAR_3 = VAR_2->dlm;

 FUNC_1(&VAR_3->spinlock);
 FUNC_1(&VAR_3->master_lock);
 if (!FUNC_2(&VAR_2->mle_refs.refcount)) {


  FUNC_5(VAR_0, "bad mle: %p\n", VAR_2);
  FUNC_3(VAR_2);
  FUNC_0();
 } else
  FUNC_4(&VAR_2->mle_refs, VAR_1);
}
