
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_xact_ctx {int xc_flags; int xc_lock; struct vmbus_xact* xc_active; } ;
struct vmbus_xact {int * x_resp; struct vmbus_xact_ctx* x_ctx; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (struct vmbus_xact*,size_t*) ;

const void *
FUNC_4(struct vmbus_xact *VAR_1, size_t *VAR_2)
{
 struct vmbus_xact_ctx *VAR_3 = VAR_1->x_ctx;
 const void *VAR_4;

 FUNC_1(&VAR_3->xc_lock);

 FUNC_0(VAR_3->xc_active == VAR_1, ("xact mismatch"));
 if (VAR_1->x_resp == ((void*)0) &&
     (VAR_3->xc_flags & VAR_0) == 0) {
  FUNC_2(&VAR_3->xc_lock);
  *VAR_2 = 0;
  return (((void*)0));
 }
 VAR_4 = FUNC_3(VAR_1, VAR_2);

 FUNC_2(&VAR_3->xc_lock);

 return (VAR_4);
}
