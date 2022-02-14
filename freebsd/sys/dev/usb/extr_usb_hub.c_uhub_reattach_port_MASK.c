
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_device {int speed; int depth; int bus; TYPE_3__* parent_hub; TYPE_1__* hub; } ;
struct TYPE_8__ {int port_status; int port_change; } ;
struct uhub_softc {scalar_t__ sc_disable_enumeration; struct usb_device* sc_udev; TYPE_4__ sc_st; int sc_dev; } ;
typedef enum usb_hc_mode { ____Placeholder_usb_hc_mode } usb_hc_mode ;
typedef enum usb_dev_speed { ____Placeholder_usb_dev_speed } usb_dev_speed ;
struct TYPE_6__ {int usb_mode; } ;
struct TYPE_7__ {TYPE_2__ flags; } ;
struct TYPE_5__ {int ports; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,char*,...) ;
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
 int FUNC_2 (int ) ;




 scalar_t__ FUNC_3 (struct uhub_softc*,int) ;
 struct usb_device* FUNC_4 (int ,int ,struct usb_device*,int,int,int,int,int) ;
 struct usb_device* FUNC_5 (int ,int) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (struct usb_device*,int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_14 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (struct usb_device*,int *,int,int ) ;
 scalar_t__ FUNC_10 (struct usb_device*,int *,int) ;
 scalar_t__ FUNC_11 (struct usb_device*,int *,int,int) ;
 scalar_t__ FUNC_12 (struct usb_device*,int *,int,int) ;

__attribute__((used)) static usb_error_t
FUNC_13(struct uhub_softc *VAR_15, uint8_t VAR_16)
{
 struct usb_device *VAR_17;
 struct usb_device *VAR_18;
 enum usb_dev_speed VAR_19;
 enum usb_hc_mode VAR_20;
 usb_error_t VAR_21;
 uint16_t VAR_22;
 uint8_t VAR_23;

 FUNC_0("reattaching port %d\n", VAR_16);

 VAR_23 = 0;
 VAR_18 = VAR_15->sc_udev;
 VAR_17 = FUNC_5(VAR_18->bus,
     VAR_18->hub->ports + VAR_16 - 1);

repeat:



 VAR_21 = FUNC_9(VAR_18, ((void*)0),
     VAR_16, VAR_0);

 if (VAR_21)
  goto error;



 if (VAR_17 != ((void*)0)) {



  FUNC_6(VAR_17, 0);
  VAR_17 = ((void*)0);
 }


 VAR_21 = FUNC_3(VAR_15, VAR_16);
 if (VAR_21)
  goto error;
 if (!(VAR_15->sc_st.port_status & VAR_3))
  goto error;



 switch (VAR_18->speed) {
 case 130:
 case 131:
 case 129:
  VAR_22 = VAR_8;
  break;
 case 128:
  if (VAR_18->parent_hub == ((void*)0))
   VAR_22 = VAR_8;
  else
   VAR_22 = VAR_9;
  break;
 default:
  VAR_22 = 0;
  break;
 }
 if (!(VAR_15->sc_st.port_status & VAR_22)) {
  FUNC_0("WARNING: strange, connected port %d "
      "has no power\n", VAR_16);
 }



 if (!(VAR_15->sc_st.port_status & VAR_7)) {

  FUNC_0("Port %d is in Host Mode\n", VAR_16);

  if (VAR_15->sc_st.port_status & VAR_10) {





   FUNC_0("Port %d was still "
       "suspended, clearing.\n", VAR_16);
   VAR_21 = FUNC_9(VAR_18,
       ((void*)0), VAR_16, VAR_2);
  }





  FUNC_7(((void*)0),
      FUNC_2(VAR_14));



  VAR_21 = FUNC_10(VAR_18, ((void*)0), VAR_16);

  if (VAR_21) {
   FUNC_1(0, "port %d reset "
       "failed, error=%s\n",
       VAR_16, FUNC_8(VAR_21));
   goto error;
  }


  VAR_21 = FUNC_3(VAR_15, VAR_16);
  if (VAR_21) {
   goto error;
  }


  if ((VAR_15->sc_st.port_change & VAR_4) ||
      (!(VAR_15->sc_st.port_status & VAR_3))) {
   if (VAR_23) {
    FUNC_1(0, "giving up port reset "
        "- device vanished\n");
    goto error;
   }
   VAR_23 = 1;
   goto repeat;
  }
 } else {
  FUNC_0("Port %d is in Device Mode\n", VAR_16);
 }




 switch (VAR_18->speed) {
 case 130:
  if (VAR_15->sc_st.port_status & 133)
   VAR_19 = 130;
  else if (VAR_15->sc_st.port_status & 132)
   VAR_19 = 129;
  else
   VAR_19 = 131;
  break;
 case 131:
  if (VAR_15->sc_st.port_status & 132)
   VAR_19 = 129;
  else
   VAR_19 = 131;
  break;
 case 129:
  VAR_19 = 129;
  break;
 case 128:
  if (VAR_18->parent_hub == ((void*)0)) {

   switch (VAR_15->sc_st.port_status & VAR_5) {
   case 0:
    VAR_19 = 131;
    break;
   case 132:
    VAR_19 = 129;
    break;
   case 133:
    VAR_19 = 130;
    break;
   default:
    VAR_19 = 128;
    break;
   }
  } else {
   VAR_19 = 128;
  }
  break;
 default:

  VAR_19 = VAR_18->speed;
  break;
 }
 if (VAR_19 == 128) {
  VAR_21 = FUNC_11(VAR_18, ((void*)0),
      VAR_16, 128 - (2 * VAR_18->depth));
  if (VAR_21) {
   FUNC_1(0, "port %d U1 timeout "
       "failed, error=%s\n",
       VAR_16, FUNC_8(VAR_21));
  }
  VAR_21 = FUNC_12(VAR_18, ((void*)0),
      VAR_16, 128 - (2 * VAR_18->depth));
  if (VAR_21) {
   FUNC_1(0, "port %d U2 timeout "
       "failed, error=%s\n",
       VAR_16, FUNC_8(VAR_21));
  }
 }






 if (VAR_18->parent_hub != ((void*)0)) {

  VAR_20 = VAR_18->parent_hub->flags.usb_mode;
 } else if (VAR_15->sc_st.port_status & VAR_7)
  VAR_20 = VAR_11;
 else
  VAR_20 = VAR_12;


 VAR_17 = FUNC_4(VAR_15->sc_dev, VAR_18->bus, VAR_18,
     VAR_18->depth + 1, VAR_16 - 1, VAR_16, VAR_19, VAR_20);
 if (VAR_17 == ((void*)0)) {
  FUNC_1(0, "could not allocate new device\n");
  goto error;
 }
 return (0);

error:
 if (VAR_17 != ((void*)0)) {



  FUNC_6(VAR_17, 0);
  VAR_17 = ((void*)0);
 }
 if (VAR_21 == 0) {
  if (VAR_15->sc_st.port_status & VAR_6) {
   VAR_21 = FUNC_9(
       VAR_15->sc_udev, ((void*)0),
       VAR_16, VAR_1);
  }
 }
 if (VAR_21) {
  FUNC_1(0, "device problem (%s), "
      "disabling port %d\n", FUNC_8(VAR_21), VAR_16);
 }
 return (VAR_21);
}
