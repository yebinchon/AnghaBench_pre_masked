
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_process {scalar_t__ up_curtd; int up_dsleep; int up_mtx; int up_drain; scalar_t__ up_gone; int up_qhead; } ;
struct TYPE_2__ {int * tqe_prev; } ;
struct usb_proc_msg {TYPE_1__ pm_qentry; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct usb_proc_msg*,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;

void
FUNC_3(struct usb_process *VAR_3, void *VAR_4, void *VAR_5)
{
 struct usb_proc_msg *VAR_6 = VAR_4;
 struct usb_proc_msg *VAR_7 = VAR_5;


 if (VAR_3->up_gone)
  return;

 FUNC_1(VAR_3->up_mtx, VAR_0);

 if (VAR_3->up_curtd == VAR_1) {

  if (VAR_6->pm_qentry.tqe_prev) {
   FUNC_0(&VAR_3->up_qhead, VAR_6, VAR_2);
   VAR_6->pm_qentry.tqe_prev = ((void*)0);
  }
  if (VAR_7->pm_qentry.tqe_prev) {
   FUNC_0(&VAR_3->up_qhead, VAR_7, VAR_2);
   VAR_7->pm_qentry.tqe_prev = ((void*)0);
  }
 } else
  while (VAR_6->pm_qentry.tqe_prev ||
      VAR_7->pm_qentry.tqe_prev) {

   if (VAR_3->up_gone)
    break;
   VAR_3->up_dsleep = 1;
   FUNC_2(&VAR_3->up_drain, VAR_3->up_mtx);
  }
}
