
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_endpoint {TYPE_1__* edesc; } ;
struct usb_device {int bus; } ;
struct avr32dci_softc {int dummy; } ;
struct TYPE_2__ {int bEndpointAddress; } ;


 struct avr32dci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct avr32dci_softc*,int ,int ) ;
 int FUNC_3 (int,char*,struct usb_endpoint*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct usb_device *VAR_3,
    struct usb_endpoint *VAR_4, uint8_t *VAR_5)
{
 struct avr32dci_softc *VAR_6;
 uint8_t VAR_7;

 FUNC_4(VAR_3->bus, VAR_1);

 FUNC_3(5, "pipe=%p\n", VAR_4);

 VAR_6 = FUNC_0(VAR_3->bus);

 VAR_7 = (VAR_4->edesc->bEndpointAddress & VAR_2);

 FUNC_2(VAR_6, FUNC_1(VAR_7), VAR_0);
}
