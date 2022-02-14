
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_process {int up_qhead; } ;
struct TYPE_2__ {int * tqe_prev; } ;
struct usb_proc_msg {TYPE_1__ pm_qentry; int (* pm_callback ) (struct usb_proc_msg*) ;} ;


 struct usb_proc_msg* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct usb_proc_msg*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct usb_proc_msg*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct usb_process *VAR_2)
{
 struct usb_proc_msg *VAR_3;
 int VAR_4 = 0;

 FUNC_2(&VAR_1);

repeat:
 VAR_3 = FUNC_0(&VAR_2->up_qhead);

 if (VAR_3 != ((void*)0)) {

  VAR_4 = 1;

  (VAR_3->pm_callback) (VAR_3);

  if (VAR_3 == FUNC_0(&VAR_2->up_qhead)) {

   FUNC_1(&VAR_2->up_qhead, VAR_3, VAR_0);
   VAR_3->pm_qentry.tqe_prev = ((void*)0);
  }
  goto repeat;
 }
 FUNC_3(&VAR_1);

 return (VAR_4);
}
