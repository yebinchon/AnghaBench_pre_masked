
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_config {int dummy; } ;
struct ndisusb_ep {struct usb_xfer** ne_xfer; int ne_lock; int ne_pending; int ne_active; } ;
struct ndis_softc {int ndisusb_mtx; int ndisusb_dev; } ;
typedef int irp ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 struct ndis_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int *,struct usb_xfer**,struct usb_config*,int,struct ndis_softc*,int *) ;
 int FUNC_7 (struct usb_xfer*,struct ndisusb_ep*) ;

__attribute__((used)) static usb_error_t
FUNC_8(irp *VAR_1, uint8_t VAR_2, struct ndisusb_ep *VAR_3,
    struct usb_config *VAR_4)
{
 device_t VAR_5 = FUNC_0(VAR_1);
 struct ndis_softc *VAR_6 = FUNC_3(VAR_5);
 struct usb_xfer *VAR_7;
 usb_error_t VAR_8;

 FUNC_1(&VAR_3->ne_active);
 FUNC_1(&VAR_3->ne_pending);
 FUNC_2(&VAR_3->ne_lock);

 VAR_8 = FUNC_6(VAR_6->ndisusb_dev, &VAR_2, VAR_3->ne_xfer,
     VAR_4, 1, VAR_6, &VAR_6->ndisusb_mtx);
 if (VAR_8 != VAR_0) {
  FUNC_4(VAR_5, "couldn't setup xfer: %s\n",
      FUNC_5(VAR_8));
  return (VAR_8);
 }
 VAR_7 = VAR_3->ne_xfer[0];
 FUNC_7(VAR_7, VAR_3);

 return (VAR_8);
}
