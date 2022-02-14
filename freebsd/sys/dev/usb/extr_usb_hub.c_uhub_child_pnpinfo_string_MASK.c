
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_interface {char* pnpinfo; TYPE_4__* idesc; } ;
struct usb_hub {int dummy; } ;
struct uhub_softc {TYPE_1__* sc_udev; } ;
struct hub_result {TYPE_5__* udev; int iface_index; } ;
typedef int device_t ;
struct TYPE_9__ {scalar_t__ usb_mode; } ;
struct TYPE_8__ {int bDeviceClass; int bDeviceSubClass; int bDeviceProtocol; int bcdDevice; int idProduct; int idVendor; } ;
struct TYPE_11__ {TYPE_3__ flags; TYPE_2__ ddesc; } ;
struct TYPE_10__ {int bInterfaceClass; int bInterfaceSubClass; int bInterfaceProtocol; } ;
struct TYPE_7__ {struct usb_hub* hub; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 struct uhub_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,size_t,char*,int,int,int,int,int,char*,int,char*,int,int,int,char*,char*) ;
 int FUNC_7 (struct usb_hub*,int ,struct hub_result*) ;
 char* FUNC_8 (TYPE_5__*) ;
 struct usb_interface* FUNC_9 (TYPE_5__*,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2, device_t VAR_3,
    char *VAR_4, size_t VAR_5)
{
 struct uhub_softc *VAR_6;
 struct usb_hub *VAR_7;
 struct usb_interface *VAR_8;
 struct hub_result VAR_9;

 if (!FUNC_3(VAR_2)) {
  if (VAR_5)
   VAR_4[0] = 0;
  return (0);
 }

 VAR_6 = FUNC_2(VAR_2);
 VAR_7 = VAR_6->sc_udev->hub;

 FUNC_4(&VAR_0);
 FUNC_7(VAR_7, VAR_3, &VAR_9);
 if (!VAR_9.udev) {
  FUNC_0("device not on hub\n");
  if (VAR_5) {
   VAR_4[0] = '\0';
  }
  goto done;
 }
 VAR_8 = FUNC_9(VAR_9.udev, VAR_9.iface_index);
 if (VAR_8 && VAR_8->idesc) {
  FUNC_6(VAR_4, VAR_5, "vendor=0x%04x product=0x%04x "
      "devclass=0x%02x devsubclass=0x%02x "
      "devproto=0x%02x "
      "sernum=\"%s\" "
      "release=0x%04x "
      "mode=%s "
      "intclass=0x%02x intsubclass=0x%02x "
      "intprotocol=0x%02x" "%s%s",
      FUNC_1(VAR_9.udev->ddesc.idVendor),
      FUNC_1(VAR_9.udev->ddesc.idProduct),
      VAR_9.udev->ddesc.bDeviceClass,
      VAR_9.udev->ddesc.bDeviceSubClass,
      VAR_9.udev->ddesc.bDeviceProtocol,
      FUNC_8(VAR_9.udev),
      FUNC_1(VAR_9.udev->ddesc.bcdDevice),
      (VAR_9.udev->flags.usb_mode == VAR_1) ? "host" : "device",
      VAR_8->idesc->bInterfaceClass,
      VAR_8->idesc->bInterfaceSubClass,
      VAR_8->idesc->bInterfaceProtocol,
      VAR_8->pnpinfo ? " " : "",
      VAR_8->pnpinfo ? VAR_8->pnpinfo : "");
 } else {
  if (VAR_5) {
   VAR_4[0] = '\0';
  }
  goto done;
 }
done:
 FUNC_5(&VAR_0);

 return (0);
}
