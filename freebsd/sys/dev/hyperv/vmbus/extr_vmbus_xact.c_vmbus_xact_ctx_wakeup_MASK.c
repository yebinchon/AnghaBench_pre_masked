
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_xact_ctx {int xc_flags; int * xc_active; int xc_lock; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,void const*,size_t) ;
 int FUNC_5 (int **) ;

void
FUNC_6(struct vmbus_xact_ctx *VAR_1, const void *VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(&VAR_1->xc_lock);




 if (VAR_1->xc_active != ((void*)0)) {
  FUNC_4(VAR_1->xc_active, VAR_2, VAR_3);
  VAR_4 = 1;
 } else {
  FUNC_0(VAR_1->xc_flags & VAR_0,
      ("no active xact pending"));
  FUNC_3("vmbus: drop xact response\n");
 }
 FUNC_2(&VAR_1->xc_lock);

 if (VAR_4)
  FUNC_5(&VAR_1->xc_active);
}
