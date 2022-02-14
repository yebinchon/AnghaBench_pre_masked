
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_process {scalar_t__ up_msleep; int up_cv; int * up_mtx; scalar_t__ up_gone; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct usb_process *VAR_1)
{

 if (VAR_1->up_mtx == ((void*)0))
  return;

 if (VAR_1->up_gone)
  return;

 FUNC_0(VAR_1->up_mtx, VAR_0);

 if (VAR_1->up_msleep == 0) {

  FUNC_1(&VAR_1->up_cv);
 }
}
