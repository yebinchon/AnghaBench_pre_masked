
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_process {int up_msleep; int up_mtx; int up_cv; int * up_ptr; int up_drain; scalar_t__ up_dsleep; int up_qhead; scalar_t__ up_gone; struct thread* up_curtd; int up_prio; } ;
struct TYPE_2__ {int * tqe_prev; } ;
struct usb_proc_msg {TYPE_1__ pm_qentry; int (* pm_callback ) (struct usb_proc_msg*) ;} ;
struct thread {int dummy; } ;


 int FUNC_0 (char*,struct usb_proc_msg*,...) ;
 struct usb_proc_msg* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct usb_proc_msg*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 struct thread* VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int VAR_1 ;
 int FUNC_10 (struct thread*,int ) ;
 int FUNC_11 (struct usb_proc_msg*) ;
 int FUNC_12 (struct thread*) ;
 int FUNC_13 (struct thread*) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void
FUNC_14(void *VAR_4)
{
 struct usb_process *VAR_5 = VAR_4;
 struct usb_proc_msg *VAR_6;
 struct thread *VAR_7;


 FUNC_6();


 VAR_7 = VAR_0;
 FUNC_12(VAR_7);
 FUNC_10(VAR_7, VAR_5->up_prio);
 FUNC_13(VAR_7);

 FUNC_3(VAR_5->up_mtx);

 VAR_5->up_curtd = VAR_7;

 while (1) {

  if (VAR_5->up_gone)
   break;
  VAR_6 = FUNC_1(&VAR_5->up_qhead);

  if (VAR_6) {
   FUNC_0("Message pm=%p, cb=%p (enter)\n",
       VAR_6, VAR_6->pm_callback);

   (VAR_6->pm_callback) (VAR_6);

   if (VAR_6 == FUNC_1(&VAR_5->up_qhead)) {

    FUNC_2(&VAR_5->up_qhead, VAR_6, VAR_1);
    VAR_6->pm_qentry.tqe_prev = ((void*)0);
   }
   FUNC_0("Message pm=%p (leave)\n", VAR_6);

   continue;
  }

  if (VAR_5->up_dsleep) {
   VAR_5->up_dsleep = 0;
   FUNC_7(&VAR_5->up_drain);
  }
  VAR_5->up_msleep = 1;
  FUNC_9(&VAR_5->up_cv, VAR_5->up_mtx);
 }

 VAR_5->up_ptr = ((void*)0);
 FUNC_8(&VAR_5->up_cv);
 FUNC_4(VAR_5->up_mtx);






 FUNC_5(0);
}
