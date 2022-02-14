
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct uss820dci_softc {int sc_bus; } ;
struct usb_endpoint {TYPE_1__* edesc; } ;
struct usb_device {int bus; } ;
struct TYPE_2__ {int bEndpointAddress; int bmAttributes; } ;


 int FUNC_0 (int,char*,struct usb_endpoint*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct uss820dci_softc* FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct uss820dci_softc*,int ,int) ;
 int FUNC_6 (struct uss820dci_softc*,int ,int,int) ;

__attribute__((used)) static void
FUNC_7(struct usb_device *VAR_10,
    struct usb_endpoint *VAR_11, uint8_t *VAR_12)
{
 struct uss820dci_softc *VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;
 uint8_t VAR_16;
 uint8_t VAR_17;

 FUNC_1(VAR_10->bus, VAR_0);

 FUNC_0(5, "endpoint=%p\n", VAR_11);


 VAR_13 = FUNC_4(VAR_10->bus);
 VAR_14 = (VAR_11->edesc->bEndpointAddress & VAR_1);
 VAR_16 = (VAR_11->edesc->bEndpointAddress & (VAR_3 | VAR_4));
 VAR_15 = (VAR_11->edesc->bmAttributes & VAR_5);

 if (VAR_15 == VAR_2) {

  return;
 }
 FUNC_2(&VAR_13->sc_bus);
 FUNC_5(VAR_13, VAR_9, VAR_14);

 if (VAR_16 == VAR_3) {
  VAR_17 = VAR_8;
 } else {
  VAR_17 = VAR_7;
 }
 FUNC_6(VAR_13, VAR_6, 0xFF, VAR_17);
 FUNC_3(&VAR_13->sc_bus);
}
