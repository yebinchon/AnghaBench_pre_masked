
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_proc_msg {int dummy; } ;
struct ucom_softc {int sc_flag; TYPE_1__* sc_callback; } ;
struct ucom_cfg_task {struct ucom_softc* sc; } ;
struct TYPE_2__ {int (* ucom_cfg_close ) (struct ucom_softc*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ucom_softc*) ;

__attribute__((used)) static void
FUNC_2(struct usb_proc_msg *VAR_1)
{
 struct ucom_cfg_task *VAR_2 =
     (struct ucom_cfg_task *)VAR_1;
 struct ucom_softc *VAR_3 = VAR_2->sc;

 FUNC_0("\n");

 if (VAR_3->sc_flag & VAR_0) {
  VAR_3->sc_flag &= ~VAR_0;
  if (VAR_3->sc_callback->ucom_cfg_close)
   (VAR_3->sc_callback->ucom_cfg_close) (VAR_3);
 } else {

 }
}
