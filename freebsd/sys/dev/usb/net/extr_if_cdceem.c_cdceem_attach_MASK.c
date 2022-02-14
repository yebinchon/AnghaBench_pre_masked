
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_ether {int* ue_eaddr; int * ue_methods; int * ue_mtx; int ue_udev; int ue_dev; struct cdceem_softc* ue_sc; } ;
struct usb_attach_arg {int device; } ;
struct cdceem_softc {int sc_mtx; int sc_xfer; struct usb_ether sc_ue; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct cdceem_softc*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct cdceem_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *,int ) ;
 int FUNC_8 (struct usb_ether*) ;
 int FUNC_9 (int ,scalar_t__*,int ,int ,int ,struct cdceem_softc*,int *) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_5)
{
 struct cdceem_softc *VAR_6;
 struct usb_ether *VAR_7;
 struct usb_attach_arg *VAR_8;
 int VAR_9;
 uint8_t VAR_10;

 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = &VAR_6->sc_ue;
 VAR_8 = FUNC_2(VAR_5);

 FUNC_5(VAR_5);

 FUNC_7(&VAR_6->sc_mtx, FUNC_3(VAR_5), ((void*)0), VAR_2);


 VAR_10 = 0;
 VAR_9 = FUNC_9(VAR_8->device, &VAR_10, VAR_6->sc_xfer,
     VAR_3, VAR_0, VAR_6, &VAR_6->sc_mtx);
 if (VAR_9 != 0) {
  FUNC_0(VAR_6,
      "allocating USB transfers failed, error %d", VAR_9);
  FUNC_6(&VAR_6->sc_mtx);
  return (VAR_9);
 }


 FUNC_1(VAR_7->ue_eaddr, VAR_1, 0);
 VAR_7->ue_eaddr[0] &= ~0x01;
 VAR_7->ue_eaddr[0] |= 0x02;

 VAR_7->ue_sc = VAR_6;
 VAR_7->ue_dev = VAR_5;
 VAR_7->ue_udev = VAR_8->device;
 VAR_7->ue_mtx = &VAR_6->sc_mtx;
 VAR_7->ue_methods = &VAR_4;

 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9 != 0) {
  FUNC_0(VAR_6, "could not attach interface, error %d", VAR_9);
  FUNC_10(VAR_6->sc_xfer, VAR_0);
  FUNC_6(&VAR_6->sc_mtx);
  return (VAR_9);
 }

 return (0);
}
