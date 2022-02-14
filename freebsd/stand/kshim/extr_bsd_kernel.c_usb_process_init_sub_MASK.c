
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_process {int * up_mtx; int up_drain; int up_cv; int up_qhead; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct usb_process *VAR_1)
{
 FUNC_0(&VAR_1->up_qhead);

 FUNC_1(&VAR_1->up_cv, "-");
 FUNC_1(&VAR_1->up_drain, "usbdrain");

 VAR_1->up_mtx = &VAR_0;
}
