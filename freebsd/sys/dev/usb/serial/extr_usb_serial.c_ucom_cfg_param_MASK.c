
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_proc_msg {int dummy; } ;
struct ucom_softc {int sc_flag; int sc_mtx; TYPE_1__* sc_callback; } ;
struct ucom_param_task {int termios_copy; struct ucom_softc* sc; } ;
struct TYPE_2__ {int (* ucom_cfg_param ) (struct ucom_softc*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ucom_softc*,int *) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct usb_proc_msg *VAR_2)
{
 struct ucom_param_task *VAR_3 =
     (struct ucom_param_task *)VAR_2;
 struct ucom_softc *VAR_4 = VAR_3->sc;

 if (!(VAR_4->sc_flag & VAR_0)) {
  return;
 }
 if (VAR_4->sc_callback->ucom_cfg_param == ((void*)0)) {
  return;
 }

 (VAR_4->sc_callback->ucom_cfg_param) (VAR_4, &VAR_3->termios_copy);


 FUNC_1(VAR_4->sc_mtx, VAR_1 / 10);
}
