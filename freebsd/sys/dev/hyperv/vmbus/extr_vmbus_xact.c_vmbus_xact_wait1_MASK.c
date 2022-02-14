
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_xact_ctx {int xc_flags; int xc_lock; struct vmbus_xact* xc_active; } ;
struct vmbus_xact {int * x_resp; struct vmbus_xact_ctx* x_ctx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmbus_xact**,int *,int ,char*,int ) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (struct vmbus_xact*,size_t*) ;

__attribute__((used)) static const void *
FUNC_6(struct vmbus_xact *VAR_1, size_t *VAR_2,
    bool VAR_3)
{
 struct vmbus_xact_ctx *VAR_4 = VAR_1->x_ctx;
 const void *VAR_5;

 FUNC_2(&VAR_4->xc_lock);

 FUNC_1(VAR_4->xc_active == VAR_1, ("xact mismatch"));
 while (VAR_1->x_resp == ((void*)0) &&
     (VAR_4->xc_flags & VAR_0) == 0) {
  if (VAR_3) {
   FUNC_3(&VAR_4->xc_active, &VAR_4->xc_lock, 0,
       "wxact", 0);
  } else {
   FUNC_4(&VAR_4->xc_lock);
   FUNC_0(1000);
   FUNC_2(&VAR_4->xc_lock);
  }
 }
 VAR_5 = FUNC_5(VAR_1, VAR_2);

 FUNC_4(&VAR_4->xc_lock);

 return (VAR_5);
}
