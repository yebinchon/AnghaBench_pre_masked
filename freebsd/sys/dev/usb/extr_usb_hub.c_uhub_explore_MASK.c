
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_port {scalar_t__ restartcnt; } ;
struct usb_hub {scalar_t__ nports; struct usb_port* ports; struct uhub_softc* hubsoftc; } ;
struct TYPE_3__ {scalar_t__ self_suspended; } ;
struct usb_device {TYPE_1__ flags; int address; struct usb_hub* hub; } ;
struct TYPE_4__ {int port_change; int port_status; } ;
struct uhub_softc {int sc_flags; TYPE_2__ sc_st; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (struct uhub_softc*,struct usb_port*) ;
 scalar_t__ FUNC_3 (struct usb_device*) ;
 scalar_t__ FUNC_4 (struct uhub_softc*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct uhub_softc*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct uhub_softc*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_device*) ;
 scalar_t__ FUNC_9 (struct usb_device*,int *,scalar_t__,int ) ;

__attribute__((used)) static usb_error_t
FUNC_10(struct usb_device *VAR_12)
{
 struct usb_hub *VAR_13;
 struct uhub_softc *VAR_14;
 struct usb_port *VAR_15;
 usb_error_t VAR_16;
 uint8_t VAR_17;
 uint8_t VAR_18;
 uint8_t VAR_19;

 VAR_13 = VAR_12->hub;
 VAR_14 = VAR_13->hubsoftc;

 FUNC_1(11, "udev=%p addr=%d\n", VAR_12, VAR_12->address);


 if (FUNC_3(VAR_12))
  return (VAR_10);


 if (VAR_12->flags.self_suspended) {

  FUNC_0("Device is suspended!\n");
  return (0);
 }





 VAR_19 = FUNC_7(VAR_12);

 for (VAR_18 = 0; VAR_18 != VAR_13->nports; VAR_18++) {
  VAR_15 = VAR_13->ports + VAR_18;
  VAR_17 = VAR_18 + 1;

  VAR_16 = FUNC_4(VAR_14, VAR_17);
  if (VAR_16) {

   break;
  }
  if (VAR_14->sc_st.port_change & VAR_4) {
   FUNC_0("Overcurrent on port %u.\n", VAR_17);
   VAR_16 = FUNC_9(
       VAR_12, ((void*)0), VAR_17, VAR_1);
   if (VAR_16) {

    break;
   }
  }
  if (!(VAR_14->sc_flags & VAR_2)) {




   VAR_14->sc_st.port_change |=
       VAR_3;
  }
  if (VAR_14->sc_st.port_change & VAR_5) {
   VAR_16 = FUNC_9(
       VAR_12, ((void*)0), VAR_17, VAR_0);
   if (VAR_16) {

    break;
   }
   if (VAR_14->sc_st.port_change & VAR_3) {




   } else if (VAR_14->sc_st.port_status & VAR_8) {
    FUNC_1(0, "illegal enable change, "
        "port %d\n", VAR_17);
   } else {

    if (VAR_15->restartcnt == VAR_11) {

     FUNC_1(0, "port error, giving up "
         "port %d\n", VAR_17);
    } else {
     VAR_14->sc_st.port_change |=
         VAR_3;
     VAR_15->restartcnt++;
    }
   }
  }
  if (VAR_14->sc_st.port_change & VAR_3) {
   VAR_16 = FUNC_5(VAR_14, VAR_17);
   if (VAR_16) {

    break;
   }
  }
  if (VAR_14->sc_st.port_change & (VAR_7 |
      VAR_6)) {
   VAR_16 = FUNC_6(VAR_14, VAR_17);
   if (VAR_16) {

    break;
   }
  }
  VAR_16 = FUNC_2(VAR_14, VAR_15);
  if (VAR_16) {

   continue;
  }

  VAR_15->restartcnt = 0;
 }

 if (VAR_19)
  FUNC_8(VAR_12);


 VAR_14->sc_flags |= VAR_2;


 return (VAR_9);
}
