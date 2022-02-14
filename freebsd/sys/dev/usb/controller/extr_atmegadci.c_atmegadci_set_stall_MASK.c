
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_endpoint {TYPE_1__* edesc; } ;
struct usb_device {int bus; } ;
struct atmegadci_softc {int dummy; } ;
struct TYPE_2__ {int bEndpointAddress; } ;


 struct atmegadci_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct atmegadci_softc*,int ,int) ;
 int FUNC_2 (int,char*,struct usb_endpoint*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct usb_device *VAR_6,
    struct usb_endpoint *VAR_7, uint8_t *VAR_8)
{
 struct atmegadci_softc *VAR_9;
 uint8_t VAR_10;

 FUNC_3(VAR_6->bus, VAR_4);

 FUNC_2(5, "endpoint=%p\n", VAR_7);

 VAR_9 = FUNC_0(VAR_6->bus);

 VAR_10 = (VAR_7->edesc->bEndpointAddress & VAR_5);

 FUNC_1(VAR_9, VAR_3, VAR_10);

 FUNC_1(VAR_9, VAR_0,
     VAR_1 |
     VAR_2);
}
