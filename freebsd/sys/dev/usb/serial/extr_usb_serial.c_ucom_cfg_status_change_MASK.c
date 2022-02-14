
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_proc_msg {int dummy; } ;
struct TYPE_6__ {int mode; } ;
struct TYPE_7__ {TYPE_2__ ppsparam; } ;
struct ucom_softc {int sc_flag; int sc_msr; int sc_lsr; TYPE_3__ sc_pps; TYPE_1__* sc_callback; struct tty* sc_tty; } ;
struct ucom_cfg_task {struct ucom_softc* sc; } ;
struct tty {int dummy; } ;
struct TYPE_5__ {int (* ucom_cfg_get_status ) (struct ucom_softc*,int*,int*) ;} ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ucom_softc*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (struct ucom_softc*,int*,int*) ;
 int FUNC_5 (struct tty*,int) ;
 int FUNC_6 (struct tty*,int ,int ) ;
 int FUNC_7 (struct tty*) ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_8(struct usb_proc_msg *VAR_17)
{
 struct ucom_cfg_task *VAR_18 =
     (struct ucom_cfg_task *)VAR_17;
 struct ucom_softc *VAR_19 = VAR_18->sc;
 struct tty *VAR_20;
 int VAR_21;
 uint8_t VAR_22;
 uint8_t VAR_23;
 uint8_t VAR_24;
 uint8_t VAR_25;
 uint8_t VAR_26;

 VAR_20 = VAR_19->sc_tty;

 FUNC_1(VAR_19, VAR_0);

 if (!(VAR_19->sc_flag & VAR_12)) {
  return;
 }
 if (VAR_19->sc_callback->ucom_cfg_get_status == ((void*)0)) {
  return;
 }


 VAR_22 = 0;
 VAR_23 = 0;

 (VAR_19->sc_callback->ucom_cfg_get_status) (VAR_19, &VAR_23, &VAR_22);

 if (!(VAR_19->sc_flag & VAR_11)) {

  return;
 }
 VAR_24 = (VAR_19->sc_msr ^ VAR_22);
 VAR_25 = (VAR_19->sc_lsr ^ VAR_23);

 VAR_19->sc_msr = VAR_22;
 VAR_19->sc_lsr = VAR_23;




 switch(VAR_16 & VAR_10) {
 case 129:
  VAR_26 = VAR_4;
  break;
 case 128:
  VAR_26 = VAR_5;
  break;
 default:
  VAR_26 = 0;
  break;
 }

 if ((VAR_19->sc_pps.ppsparam.mode & VAR_2) &&
     (VAR_24 & VAR_26)) {
  FUNC_2(&VAR_19->sc_pps);
  VAR_21 = (VAR_19->sc_msr & VAR_26) ? 1 : 0;
  if (VAR_16 & VAR_9)
   VAR_21 = !VAR_21;
  FUNC_3(&VAR_19->sc_pps, VAR_21 ? VAR_1 :
      VAR_3);
 }

 if (VAR_24 & VAR_5) {

  VAR_21 = (VAR_19->sc_msr & VAR_5) ? 1 : 0;

  FUNC_0("DCD changed to %d\n", VAR_21);

  FUNC_5(VAR_20, VAR_21);
 }

 if ((VAR_25 & VAR_13) && (VAR_19->sc_lsr & VAR_13)) {

  FUNC_0("BREAK detected\n");

  FUNC_6(VAR_20, 0, VAR_6);
  FUNC_7(VAR_20);
 }

 if ((VAR_25 & VAR_14) && (VAR_19->sc_lsr & VAR_14)) {

  FUNC_0("Frame error detected\n");

  FUNC_6(VAR_20, 0, VAR_7);
  FUNC_7(VAR_20);
 }

 if ((VAR_25 & VAR_15) && (VAR_19->sc_lsr & VAR_15)) {

  FUNC_0("Parity error detected\n");

  FUNC_6(VAR_20, 0, VAR_8);
  FUNC_7(VAR_20);
 }
}
