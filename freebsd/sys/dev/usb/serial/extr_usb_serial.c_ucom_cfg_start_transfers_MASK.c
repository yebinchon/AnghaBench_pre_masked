
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_proc_msg {int dummy; } ;
struct ucom_softc {int sc_flag; TYPE_1__* sc_callback; struct usb_proc_msg* sc_last_start_xfer; } ;
struct ucom_cfg_task {struct ucom_softc* sc; } ;
struct TYPE_2__ {int (* ucom_start_write ) (struct ucom_softc*) ;int (* ucom_start_read ) (struct ucom_softc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ucom_softc*) ;
 int FUNC_1 (struct ucom_softc*) ;

__attribute__((used)) static void
FUNC_2(struct usb_proc_msg *VAR_3)
{
 struct ucom_cfg_task *VAR_4 =
     (struct ucom_cfg_task *)VAR_3;
 struct ucom_softc *VAR_5 = VAR_4->sc;

 if (!(VAR_5->sc_flag & VAR_2)) {
  return;
 }
 if (!(VAR_5->sc_flag & VAR_1)) {

  return;
 }

 if (VAR_3 == VAR_5->sc_last_start_xfer)
  VAR_5->sc_flag |= VAR_0;

 if (VAR_5->sc_callback->ucom_start_read) {
  (VAR_5->sc_callback->ucom_start_read) (VAR_5);
 }
 if (VAR_5->sc_callback->ucom_start_write) {
  (VAR_5->sc_callback->ucom_start_write) (VAR_5);
 }
}
