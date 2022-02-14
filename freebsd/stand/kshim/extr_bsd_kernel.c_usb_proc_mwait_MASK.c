
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_process {int up_qhead; } ;
struct TYPE_2__ {int * tqe_prev; } ;
struct usb_proc_msg {TYPE_1__ pm_qentry; } ;


 int FUNC_0 (int *,struct usb_proc_msg*,int ) ;
 int VAR_0 ;

void
FUNC_1(struct usb_process *VAR_1, void *VAR_2, void *VAR_3)
{
 struct usb_proc_msg *VAR_4 = VAR_2;
 struct usb_proc_msg *VAR_5 = VAR_3;


 if (VAR_4->pm_qentry.tqe_prev) {
  FUNC_0(&VAR_1->up_qhead, VAR_4, VAR_0);
  VAR_4->pm_qentry.tqe_prev = ((void*)0);
 }
 if (VAR_5->pm_qentry.tqe_prev) {
  FUNC_0(&VAR_1->up_qhead, VAR_5, VAR_0);
  VAR_5->pm_qentry.tqe_prev = ((void*)0);
 }
}
