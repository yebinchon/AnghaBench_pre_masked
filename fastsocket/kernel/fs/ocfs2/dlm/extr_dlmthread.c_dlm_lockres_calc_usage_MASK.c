
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int len; } ;
struct dlm_lock_resource {int spinlock; TYPE_1__ lockname; } ;
struct dlm_ctxt {int spinlock; } ;


 int FUNC_0 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dlm_ctxt *VAR_0,
       struct dlm_lock_resource *VAR_1)
{
 FUNC_1("%.*s\n", VAR_1->lockname.len, VAR_1->lockname.name);
 FUNC_2(&VAR_0->spinlock);
 FUNC_2(&VAR_1->spinlock);

 FUNC_0(VAR_0, VAR_1);

 FUNC_3(&VAR_1->spinlock);
 FUNC_3(&VAR_0->spinlock);
}
