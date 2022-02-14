
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_process {int up_gone; int * up_mtx; int up_drain; scalar_t__ up_dsleep; int up_cv; scalar_t__ up_ptr; scalar_t__ up_csleep; scalar_t__ up_msleep; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*) ;

void
FUNC_9(struct usb_process *VAR_3)
{

 if (VAR_3->up_mtx == ((void*)0))
  return;

 if (VAR_3->up_mtx != &VAR_0)
  FUNC_1(VAR_3->up_mtx, VAR_1);

 FUNC_2(VAR_3->up_mtx);



 VAR_3->up_gone = 1;

 while (VAR_3->up_ptr) {



  if (VAR_3->up_msleep || VAR_3->up_csleep) {
   VAR_3->up_msleep = 0;
   VAR_3->up_csleep = 0;
   FUNC_6(&VAR_3->up_cv);
  }


  if (VAR_2) {
   FUNC_4(VAR_3->up_ptr);
   FUNC_8("WARNING: A USB process has "
       "been left suspended\n");
   break;
  }

  FUNC_7(&VAR_3->up_cv, VAR_3->up_mtx);
 }


 if (VAR_3->up_dsleep) {
  VAR_3->up_dsleep = 0;
  FUNC_5(&VAR_3->up_drain);
  FUNC_0("WARNING: Someone is waiting "
      "for USB process drain!\n");
 }
 FUNC_3(VAR_3->up_mtx);
}
