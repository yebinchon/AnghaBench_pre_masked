
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bEndpointAddress; int bmAttributes; } ;
struct usb_endpoint {struct usb_endpoint_descriptor* edesc; } ;
struct TYPE_2__ {scalar_t__ usb_mode; } ;
struct usb_device {int bus; TYPE_1__ flags; } ;
struct atmegadci_softc {int dummy; } ;


 struct atmegadci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int,char*,struct usb_endpoint*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct atmegadci_softc*,int,int,int) ;

__attribute__((used)) static void
FUNC_4(struct usb_device *VAR_6, struct usb_endpoint *VAR_7)
{
 struct atmegadci_softc *VAR_8;
 struct usb_endpoint_descriptor *VAR_9;

 FUNC_1(5, "endpoint=%p\n", VAR_7);

 FUNC_2(VAR_6->bus, VAR_0);


 if (VAR_6->flags.usb_mode != VAR_5) {

  return;
 }

 VAR_8 = FUNC_0(VAR_6->bus);


 VAR_9 = VAR_7->edesc;


 FUNC_3(VAR_8,
     (VAR_9->bEndpointAddress & VAR_1),
     (VAR_9->bmAttributes & VAR_4),
     (VAR_9->bEndpointAddress & (VAR_2 | VAR_3)));
}
