
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_port {scalar_t__ restartcnt; scalar_t__ device_index; } ;
struct usb_hub_ss_descriptor {int bNbrPorts; int bPwrOn2PwrGood; } ;
struct usb_hub_descriptor {int bNbrPorts; int bPwrOn2PwrGood; } ;
struct usb_hub {int nports; struct usb_port* ports; int portpower; TYPE_2__* tt_msg; struct usb_device* hubudev; int * explore; struct uhub_softc* hubsoftc; } ;
struct TYPE_6__ {scalar_t__ self_powered; } ;
struct usb_device {int speed; struct usb_hub* hub; TYPE_3__ flags; struct usb_device* parent_hub; scalar_t__ depth; } ;
struct usb_attach_arg {struct usb_device* device; } ;
struct uhub_softc {scalar_t__ sc_disable_enumeration; scalar_t__ sc_disable_port_power; int sc_mtx; int * sc_xfer; struct usb_hub sc_hub; int sc_dev; struct usb_device* sc_udev; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int hub ;
typedef int device_t ;
struct TYPE_4__ {int * pm_callback; } ;
struct TYPE_5__ {struct usb_device* udev; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int ,scalar_t__*,int ,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 int FUNC_4 (struct usb_hub_ss_descriptor*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_5 (struct uhub_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_14 ;
 int VAR_15 ;




 struct usb_attach_arg* FUNC_9 (int ) ;
 struct uhub_softc* FUNC_10 (int ) ;
 struct sysctl_ctx_list* FUNC_11 (int ) ;
 struct sysctl_oid* FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct usb_hub*,int ) ;
 struct usb_hub* FUNC_16 (int,int ,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,char*,int *,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_19 (struct usb_device*) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (struct usb_device*,int *,int,int ) ;
 scalar_t__ FUNC_23 (struct usb_device*,int *,struct usb_hub_ss_descriptor*,int) ;
 scalar_t__ FUNC_24 (struct usb_device*,int *,struct usb_hub_ss_descriptor*,int) ;
 scalar_t__ FUNC_25 (struct usb_device*,int *,scalar_t__) ;
 scalar_t__ FUNC_26 (struct usb_device*,int *,int,int ) ;
 scalar_t__ FUNC_27 (struct usb_device*,int ,int) ;
 int FUNC_28 (struct usb_device*,int ) ;
 scalar_t__ FUNC_29 (struct usb_device*,int*,int *,int ,int ,struct uhub_softc*,int *) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int *,int ) ;

int
FUNC_32(device_t VAR_21)
{
 struct uhub_softc *VAR_22 = FUNC_10(VAR_21);
 struct usb_attach_arg *VAR_23 = FUNC_9(VAR_21);
 struct usb_device *VAR_24 = VAR_23->device;
 struct usb_device *VAR_25 = VAR_24->parent_hub;
 struct usb_hub *VAR_26;
 struct usb_hub_descriptor VAR_27;
 struct usb_hub_ss_descriptor VAR_28;




 uint16_t VAR_29;
 uint16_t VAR_30;
 uint8_t VAR_31;
 uint8_t VAR_32;
 uint8_t VAR_33;
 uint8_t VAR_34;
 usb_error_t VAR_35;

 VAR_22->sc_udev = VAR_24;
 VAR_22->sc_dev = VAR_21;

 FUNC_18(&VAR_22->sc_mtx, "USB HUB mutex", ((void*)0), VAR_2);

 FUNC_14(VAR_21);

 FUNC_1(2, "depth=%d selfpowered=%d, parent=%p, "
     "parent->selfpowered=%d\n",
     VAR_24->depth,
     VAR_24->flags.self_powered,
     VAR_25,
     VAR_25 ?
     VAR_25->flags.self_powered : 0);

 if (FUNC_19(VAR_24)) {
  FUNC_1(0, "HUB at depth %d, "
      "exceeds maximum. HUB ignored\n", (int)VAR_24->depth);
  goto error;
 }

 if (!VAR_24->flags.self_powered && VAR_25 &&
     !VAR_25->flags.self_powered) {
  FUNC_1(0, "Bus powered HUB connected to "
      "bus powered HUB. HUB ignored\n");
  goto error;
 }

 if (FUNC_5(VAR_22)) {
  VAR_35 = FUNC_27(VAR_24, 0, 1);
  if (VAR_35) {
   FUNC_13(VAR_21, "MTT could not be enabled\n");
   goto error;
  }
  FUNC_13(VAR_21, "MTT enabled\n");
 }



 FUNC_1(2, "Getting HUB descriptor\n");

 switch (VAR_24->speed) {
 case 129:
 case 131:
 case 130:

  VAR_35 = FUNC_23(VAR_24, ((void*)0), &VAR_27, 1);
  if (VAR_35) {
   FUNC_1(0, "getting USB 2.0 HUB descriptor failed,"
       "error=%s\n", FUNC_21(VAR_35));
   goto error;
  }

  VAR_30 = VAR_27;


  VAR_29 = ((VAR_27 * VAR_7) +
      VAR_20);


  if (VAR_30 >= 8) {

   if (VAR_30 > 127) {
    FUNC_1(0, "Invalid number of USB 2.0 ports,"
        "error=%s\n", FUNC_21(VAR_35));
    goto error;
   }

   VAR_35 = FUNC_23(VAR_24, ((void*)0), &VAR_27, VAR_30);

   if (VAR_35) {
    FUNC_1(0, "Getting USB 2.0 HUB descriptor failed,"
        "error=%s\n", FUNC_21(VAR_35));
    goto error;
   }
   if (VAR_27 != VAR_30) {
    FUNC_1(0, "Number of ports changed\n");
    goto error;
   }
  }
  break;
 case 128:
  if (VAR_24->parent_hub != ((void*)0)) {
   VAR_35 = FUNC_25(VAR_24, ((void*)0),
       VAR_24->depth - 1);
   if (VAR_35) {
    FUNC_1(0, "Setting USB 3.0 HUB depth failed,"
        "error=%s\n", FUNC_21(VAR_35));
    goto error;
   }
  }
  VAR_35 = FUNC_24(VAR_24, ((void*)0), &VAR_28, 1);
  if (VAR_35) {
   FUNC_1(0, "Getting USB 3.0 HUB descriptor failed,"
       "error=%s\n", FUNC_21(VAR_35));
   goto error;
  }

  VAR_30 = VAR_28;


  VAR_29 = ((VAR_28 * VAR_7) +
      VAR_20);


  if (VAR_30 >= 8) {

   if (VAR_30 > ((VAR_24->parent_hub != ((void*)0)) ? 15 : 127)) {
    FUNC_1(0, "Invalid number of USB 3.0 ports,"
        "error=%s\n", FUNC_21(VAR_35));
    goto error;
   }

   VAR_35 = FUNC_24(VAR_24, ((void*)0), &VAR_28, VAR_30);

   if (VAR_35) {
    FUNC_1(0, "Getting USB 2.0 HUB descriptor failed,"
        "error=%s\n", FUNC_21(VAR_35));
    goto error;
   }
   if (VAR_28 != VAR_30) {
    FUNC_1(0, "Number of ports changed\n");
    goto error;
   }
  }
  break;
 default:
  FUNC_0("Assuming HUB has only one port\n");

  VAR_30 = 1;

  VAR_29 = ((10 * VAR_7) + VAR_20);
  break;
 }
 if (VAR_30 == 0) {
  FUNC_1(0, "portless HUB\n");
  goto error;
 }
 if (VAR_30 > VAR_11) {
  FUNC_0("Port limit exceeded\n");
  goto error;
 }

 VAR_26 = FUNC_16(sizeof(VAR_26[0]) + (sizeof(VAR_26->ports[0]) * VAR_30),
     VAR_3, VAR_4 | VAR_5);

 if (VAR_26 == ((void*)0))
  goto error;



 VAR_24->hub = VAR_26;


 VAR_26->hubsoftc = VAR_22;
 VAR_26->explore = &VAR_17;
 VAR_26->nports = VAR_30;
 VAR_26->hubudev = VAR_24;







 if (VAR_24->flags.self_powered) {
  VAR_26->portpower = VAR_12;
 } else {
  VAR_26->portpower = VAR_13;
 }


 VAR_34 = 0;
 if (VAR_24->parent_hub == ((void*)0)) {

  VAR_35 = 0;
 } else {

  VAR_35 = FUNC_29(VAR_24, &VAR_34, VAR_22->sc_xfer,
      VAR_16, VAR_10, VAR_22, &VAR_22->sc_mtx);
 }
 if (VAR_35) {
  FUNC_1(0, "cannot setup interrupt transfer, "
      "errstr=%s\n", FUNC_21(VAR_35));
  goto error;
 }

 FUNC_20(((void*)0), FUNC_6(VAR_14));
 VAR_33 = 0;

 for (VAR_31 = 0; VAR_31 != VAR_30; VAR_31++) {

  struct usb_port *VAR_36 = VAR_26->ports + VAR_31;

  VAR_36->device_index = 0;
  VAR_36->restartcnt = 0;
  VAR_32 = VAR_31 + 1;


  switch (VAR_24->speed) {
  case 129:
  case 131:
  case 130:
   if (!FUNC_4(&VAR_27, VAR_32))
    VAR_33++;
   break;
  case 128:
   if (!FUNC_4(&VAR_28, VAR_32))
    VAR_33++;
   break;
  default:
   FUNC_0("Assuming removable port\n");
   VAR_33++;
   break;
  }
  if (VAR_35 == 0) {
    FUNC_1(2, "Turning port %d power on\n", VAR_32);
    VAR_35 = FUNC_26(VAR_24, ((void*)0),
        VAR_32, VAR_8);



  }
  if (VAR_35 != 0) {
   FUNC_1(0, "port %d power on or off failed, %s\n",
       VAR_32, FUNC_21(VAR_35));
  }
  FUNC_0("turn on port %d power\n",
      VAR_32);


  FUNC_20(((void*)0), FUNC_6(VAR_29));
 }

 FUNC_13(VAR_21, "%d port%s with %d "
     "removable, %s powered\n", VAR_30, (VAR_30 != 1) ? "s" : "",
     VAR_33, VAR_24->flags.self_powered ? "self" : "bus");



 FUNC_7(&VAR_22->sc_mtx);
 FUNC_30(VAR_22->sc_xfer[VAR_9]);
 FUNC_8(&VAR_22->sc_mtx);



 FUNC_28(VAR_24, VAR_15);

 return (0);

error:
 FUNC_31(VAR_22->sc_xfer, VAR_10);


 FUNC_15(VAR_24->hub, VAR_3);

 VAR_24->hub = ((void*)0);

 FUNC_17(&VAR_22->sc_mtx);

 return (VAR_1);
}
