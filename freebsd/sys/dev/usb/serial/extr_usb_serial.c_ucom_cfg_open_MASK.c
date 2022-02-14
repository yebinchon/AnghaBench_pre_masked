
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_proc_msg {int dummy; } ;
struct ucom_softc {int sc_flag; int sc_mtx; TYPE_1__* sc_callback; } ;
struct ucom_cfg_task {struct ucom_softc* sc; } ;
struct TYPE_2__ {int (* ucom_cfg_open ) (struct ucom_softc*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ucom_softc*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct usb_proc_msg *VAR_2)
{
 struct ucom_cfg_task *VAR_3 =
     (struct ucom_cfg_task *)VAR_2;
 struct ucom_softc *VAR_4 = VAR_3->sc;

 FUNC_0("\n");

 if (VAR_4->sc_flag & VAR_0) {



 } else {

  VAR_4->sc_flag |= VAR_0;

  if (VAR_4->sc_callback->ucom_cfg_open) {
   (VAR_4->sc_callback->ucom_cfg_open) (VAR_4);


   FUNC_2(VAR_4->sc_mtx, VAR_1 / 10);
  }
 }
}
