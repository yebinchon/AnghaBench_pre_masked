
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct usb_interface_descriptor {scalar_t__ bInterfaceClass; int bInterfaceNumber; int bInterfaceProtocol; int bInterfaceSubClass; } ;
struct usb_interface {int dummy; } ;
struct usb_config {int ep_index; } ;
struct TYPE_2__ {int bIfaceIndex; int idVendor; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
struct u3g_softc {int sc_numports; int sc_super_ucom; int sc_mtx; int * sc_ucom; scalar_t__** sc_xfer; int * sc_iface; int sc_udev; } ;
typedef int device_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct usb_attach_arg*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 struct u3g_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_12 ;
 struct usb_config* VAR_13 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *,int,struct u3g_softc*,int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 scalar_t__ FUNC_15 (struct usb_attach_arg*,int ) ;
 struct usb_interface* FUNC_16 (int ,int) ;
 struct usb_interface_descriptor* FUNC_17 (struct usb_interface*) ;
 int FUNC_18 (int ,int,int) ;
 int FUNC_19 (int ,int*,scalar_t__*,struct usb_config*,int,int *,int *) ;
 int FUNC_20 (scalar_t__) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_14)
{
 struct usb_config VAR_15[VAR_7];
 struct usb_attach_arg *VAR_16 = FUNC_2(VAR_14);
 struct u3g_softc *VAR_17 = FUNC_3(VAR_14);
 struct usb_interface *VAR_18;
 struct usb_interface_descriptor *VAR_19;
 uint32_t VAR_20;
 int VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25;
 uint8_t VAR_26;

 FUNC_0("sc=%p\n", VAR_17);

 VAR_22 = FUNC_1(VAR_16);
 if (VAR_22 == VAR_2
     || FUNC_15(VAR_16, VAR_9)) {
  FUNC_11(VAR_16->device);
 }


 for (VAR_25 = 0; VAR_25 != VAR_7; VAR_25++)
  VAR_15[VAR_25] = VAR_13[VAR_25];

 FUNC_5(VAR_14);
 FUNC_6(&VAR_17->sc_mtx, "u3g", ((void*)0), VAR_1);
 FUNC_13(&VAR_17->sc_super_ucom);

 VAR_17->sc_udev = VAR_16->device;


 VAR_20 = 0;
 for (VAR_26 = VAR_16->info.bIfaceIndex; VAR_26 < VAR_10; VAR_26++) {
  VAR_18 = FUNC_16(VAR_16->device, VAR_26);
  if (VAR_18 == ((void*)0))
   break;
  VAR_19 = FUNC_17(VAR_18);
  if (VAR_19 == ((void*)0) || VAR_19->bInterfaceClass != VAR_8)
   continue;
  if (FUNC_10(VAR_16->info.idVendor,
      VAR_19->bInterfaceSubClass, VAR_19->bInterfaceProtocol))
   continue;
  FUNC_18(VAR_16->device, VAR_26, VAR_16->info.bIfaceIndex);
  VAR_20 |= (1<<VAR_26);
 }

 VAR_26 = 0;
 VAR_24 = 0;
 VAR_23 = 0;
 while (VAR_26 < VAR_10) {
  if ((VAR_20 & (1<<VAR_26)) == 0) {
   VAR_26++;
   continue;
  }


  for (VAR_25 = 0; VAR_25 < VAR_7; VAR_25++)
   VAR_15[VAR_25].ep_index = VAR_24;


  VAR_21 = FUNC_19(VAR_16->device, &VAR_26,
      VAR_17->sc_xfer[VAR_23], VAR_15, VAR_7,
      &VAR_17->sc_ucom[VAR_23], &VAR_17->sc_mtx);
  if (VAR_21) {

   VAR_26++;
   VAR_24 = 0;
   continue;
  }

  VAR_18 = FUNC_16(VAR_16->device, VAR_26);
  VAR_19 = FUNC_17(VAR_18);
  VAR_17->sc_iface[VAR_23] = VAR_19->bInterfaceNumber;

  if (VAR_11 && VAR_17->sc_xfer[VAR_23][VAR_5]) {
   FUNC_4(VAR_14, "port %d supports modem control\n",
          VAR_23);
  }


  FUNC_7(&VAR_17->sc_mtx);
  FUNC_20(VAR_17->sc_xfer[VAR_23][VAR_4]);
  FUNC_20(VAR_17->sc_xfer[VAR_23][VAR_3]);
  FUNC_8(&VAR_17->sc_mtx);

  VAR_23++;
  VAR_24++;
  if (VAR_23 == VAR_6)
   break;
 }
 if (VAR_23 == 0) {
  FUNC_4(VAR_14, "no ports found\n");
  goto detach;
 }
 VAR_17->sc_numports = VAR_23;

 VAR_21 = FUNC_12(&VAR_17->sc_super_ucom, VAR_17->sc_ucom,
     VAR_17->sc_numports, VAR_17, &VAR_12, &VAR_17->sc_mtx);
 if (VAR_21) {
  FUNC_0("ucom_attach failed\n");
  goto detach;
 }
 FUNC_14(&VAR_17->sc_super_ucom, VAR_14);
 FUNC_4(VAR_14, "Found %u port%s.\n", VAR_17->sc_numports,
     VAR_17->sc_numports > 1 ? "s":"");

 return (0);

detach:
 FUNC_9(VAR_14);
 return (VAR_0);
}
