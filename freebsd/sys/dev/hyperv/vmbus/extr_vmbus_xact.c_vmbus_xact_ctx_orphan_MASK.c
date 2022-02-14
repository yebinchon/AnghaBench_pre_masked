
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_xact_ctx {int xc_flags; int * xc_orphan; int xc_active; int xc_free; int xc_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (struct vmbus_xact_ctx*,int ) ;
 int FUNC_4 (int *) ;

bool
FUNC_5(struct vmbus_xact_ctx *VAR_1)
{
 FUNC_0(&VAR_1->xc_lock);
 if (VAR_1->xc_flags & VAR_0) {
  FUNC_1(&VAR_1->xc_lock);
  return (0);
 }
 VAR_1->xc_flags |= VAR_0;
 FUNC_1(&VAR_1->xc_lock);

 FUNC_4(&VAR_1->xc_free);
 FUNC_4(&VAR_1->xc_active);

 VAR_1->xc_orphan = FUNC_3(VAR_1, 0);
 if (VAR_1->xc_orphan == ((void*)0))
  FUNC_2("can't get xact");
 return (1);
}
