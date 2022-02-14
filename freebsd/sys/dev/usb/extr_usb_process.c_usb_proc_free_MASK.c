
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_process {int * up_mtx; int up_drain; int up_cv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct usb_process*) ;

void
FUNC_2(struct usb_process *VAR_0)
{

 if (VAR_0->up_mtx == ((void*)0))
  return;

 FUNC_1(VAR_0);

 FUNC_0(&VAR_0->up_cv);
 FUNC_0(&VAR_0->up_drain);


 VAR_0->up_mtx = ((void*)0);
}
