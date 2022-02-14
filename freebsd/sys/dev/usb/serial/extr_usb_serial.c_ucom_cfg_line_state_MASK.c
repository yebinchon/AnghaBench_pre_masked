
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_proc_msg {int dummy; } ;
struct ucom_softc {int sc_flag; int sc_pls_set; int sc_pls_clr; int sc_pls_curr; TYPE_1__* sc_callback; } ;
struct ucom_cfg_task {struct ucom_softc* sc; } ;
struct TYPE_2__ {int (* ucom_cfg_set_ring ) (struct ucom_softc*,int) ;int (* ucom_cfg_set_break ) (struct ucom_softc*,int) ;int (* ucom_cfg_set_rts ) (struct ucom_softc*,int) ;int (* ucom_cfg_set_dtr ) (struct ucom_softc*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ucom_softc*,int) ;
 int FUNC_1 (struct ucom_softc*,int) ;
 int FUNC_2 (struct ucom_softc*,int) ;
 int FUNC_3 (struct ucom_softc*,int) ;
 int FUNC_4 (struct ucom_softc*,int) ;
 int FUNC_5 (struct ucom_softc*,int) ;
 int FUNC_6 (struct ucom_softc*,int) ;
 int FUNC_7 (struct ucom_softc*,int) ;

__attribute__((used)) static void
FUNC_8(struct usb_proc_msg *VAR_5)
{
 struct ucom_cfg_task *VAR_6 =
     (struct ucom_cfg_task *)VAR_5;
 struct ucom_softc *VAR_7 = VAR_6->sc;
 uint8_t VAR_8;
 uint8_t VAR_9;
 uint8_t VAR_10;
 uint8_t VAR_11;
 uint8_t VAR_12;

 if (!(VAR_7->sc_flag & VAR_0)) {
  return;
 }

 VAR_12 = 0;

 if (VAR_7->sc_callback->ucom_cfg_set_dtr)
  VAR_12 |= VAR_2;
 if (VAR_7->sc_callback->ucom_cfg_set_rts)
  VAR_12 |= VAR_4;
 if (VAR_7->sc_callback->ucom_cfg_set_break)
  VAR_12 |= VAR_1;
 if (VAR_7->sc_callback->ucom_cfg_set_ring)
  VAR_12 |= VAR_3;


 VAR_8 = (VAR_7->sc_pls_set & VAR_7->sc_pls_clr) & VAR_12;
 VAR_9 = (VAR_7->sc_pls_set | VAR_7->sc_pls_clr) & VAR_12;
 VAR_10 = VAR_7->sc_pls_curr ^ VAR_8;
 VAR_11 = VAR_7->sc_pls_curr;


 VAR_7->sc_pls_curr = 0;
 VAR_7->sc_pls_set = 0;
 VAR_7->sc_pls_clr = 0;


 if (VAR_8 & VAR_2)
  VAR_7->sc_callback->ucom_cfg_set_dtr(VAR_7,
      (VAR_10 & VAR_2) ? 1 : 0);
 if (VAR_8 & VAR_4)
  VAR_7->sc_callback->ucom_cfg_set_rts(VAR_7,
      (VAR_10 & VAR_4) ? 1 : 0);
 if (VAR_8 & VAR_1)
  VAR_7->sc_callback->ucom_cfg_set_break(VAR_7,
      (VAR_10 & VAR_1) ? 1 : 0);
 if (VAR_8 & VAR_3)
  VAR_7->sc_callback->ucom_cfg_set_ring(VAR_7,
      (VAR_10 & VAR_3) ? 1 : 0);


 if (VAR_9 & VAR_2)
  VAR_7->sc_callback->ucom_cfg_set_dtr(VAR_7,
      (VAR_11 & VAR_2) ? 1 : 0);
 if (VAR_9 & VAR_4)
  VAR_7->sc_callback->ucom_cfg_set_rts(VAR_7,
      (VAR_11 & VAR_4) ? 1 : 0);
 if (VAR_9 & VAR_1)
  VAR_7->sc_callback->ucom_cfg_set_break(VAR_7,
      (VAR_11 & VAR_1) ? 1 : 0);
 if (VAR_9 & VAR_3)
  VAR_7->sc_callback->ucom_cfg_set_ring(VAR_7,
      (VAR_11 & VAR_3) ? 1 : 0);
}
