
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct usb_interface {TYPE_2__* idesc; } ;
struct usb_descriptor {int bDescriptorSubtype; } ;
struct uhso_softc {int sc_mtx; int sc_xfer; int sc_udev; int sc_dev; TYPE_1__* sc_tty; int sc_iface_index; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_3__ {int ht_muxport; int ht_xfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct uhso_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 struct usb_descriptor* FUNC_4 (int ,int *,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int ,int,struct uhso_softc*,int *) ;

__attribute__((used)) static int
FUNC_6(struct uhso_softc *VAR_6, struct usb_interface *VAR_7,
    int VAR_8)
{
 struct usb_descriptor *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 usb_error_t VAR_13;






 VAR_9 = FUNC_4(VAR_6->sc_udev, ((void*)0),
     VAR_7->idesc->bInterfaceNumber, VAR_2, 0xff, 0, 0);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(0, "Failed to find UDESC_CS_INTERFACE\n");
  return (VAR_1);
 }

 FUNC_0(1, "Mux port mask %x\n", VAR_9->bDescriptorSubtype);
 if (VAR_9->bDescriptorSubtype == 0)
  return (VAR_1);





 for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
  VAR_11 = (1 << VAR_10);
  if ((VAR_11 & VAR_9->bDescriptorSubtype) == VAR_11) {
   FUNC_0(2, "Found mux port %x (%d)\n", VAR_11, VAR_10);
   VAR_12 = FUNC_2(VAR_6);
   if (VAR_12 < 0)
    return (VAR_0);
   VAR_6->sc_tty[VAR_12].ht_muxport = VAR_10;
   VAR_13 = FUNC_5(VAR_6->sc_udev,
       &VAR_6->sc_iface_index, VAR_6->sc_tty[VAR_12].ht_xfer,
       VAR_4, VAR_3, VAR_6, &VAR_6->sc_mtx);
   if (VAR_13) {
    FUNC_1(VAR_6->sc_dev,
        "Failed to setup control pipe: %s\n",
        FUNC_3(VAR_13));
    return (VAR_1);
   }
  }
 }


 VAR_13 = FUNC_5(VAR_6->sc_udev,
     &VAR_7->idesc->bInterfaceNumber, VAR_6->sc_xfer,
     VAR_5, 1, VAR_6, &VAR_6->sc_mtx);
 if (VAR_13)
  return (VAR_1);

 return (0);
}
