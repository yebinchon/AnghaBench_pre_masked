
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_proc_callback_t ;
struct usb_proc_msg {int dummy; } ;
struct ucom_super_softc {int sc_tq; } ;
struct ucom_softc {TYPE_1__* sc_last_start_xfer; struct ucom_super_softc* sc_super; } ;
struct TYPE_2__ {int * pm_callback; } ;
struct termios {int dummy; } ;
struct ucom_param_task {TYPE_1__ hdr; struct termios termios_copy; struct ucom_softc* sc; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ucom_softc*,int ) ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,struct usb_proc_msg*,struct usb_proc_msg*) ;
 int FUNC_4 (int *,struct usb_proc_msg*,struct usb_proc_msg*) ;

__attribute__((used)) static void
FUNC_5(struct ucom_softc *VAR_3,
    usb_proc_callback_t *VAR_4, struct termios *VAR_5,
    struct usb_proc_msg *VAR_6, struct usb_proc_msg *VAR_7)
{
 struct ucom_super_softc *VAR_8 = VAR_3->sc_super;
 struct ucom_param_task *VAR_9;

 FUNC_1(VAR_3, VAR_0);

 if (FUNC_2(&VAR_8->sc_tq)) {
  FUNC_0("proc is gone\n");
  return;
 }





 VAR_9 = (struct ucom_param_task *)
   FUNC_3(&VAR_8->sc_tq, VAR_6, VAR_7);


 VAR_9->hdr.pm_callback = VAR_4;
 VAR_9->sc = VAR_3;





 if (VAR_5 != ((void*)0))
  VAR_9->termios_copy = *VAR_5;




 if (VAR_4 == VAR_1)
  FUNC_4(&VAR_8->sc_tq, VAR_6, VAR_7);





 if (VAR_4 == VAR_2)
  VAR_3->sc_last_start_xfer = &VAR_9->hdr;
}
