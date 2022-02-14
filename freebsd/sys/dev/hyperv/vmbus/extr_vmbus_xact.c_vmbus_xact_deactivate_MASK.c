
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_xact_ctx {int xc_lock; struct vmbus_xact* xc_active; } ;
struct vmbus_xact {struct vmbus_xact_ctx* x_ctx; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct vmbus_xact *VAR_0)
{
 struct vmbus_xact_ctx *VAR_1 = VAR_0->x_ctx;

 FUNC_1(&VAR_1->xc_lock);
 FUNC_0(VAR_1->xc_active == VAR_0, ("xact mismatch"));
 VAR_1->xc_active = ((void*)0);
 FUNC_2(&VAR_1->xc_lock);
}
