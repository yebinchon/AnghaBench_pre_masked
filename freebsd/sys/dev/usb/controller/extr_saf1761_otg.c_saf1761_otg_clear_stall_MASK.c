
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bEndpointAddress; int bmAttributes; } ;
struct usb_endpoint {struct usb_endpoint_descriptor* edesc; } ;
struct TYPE_2__ {scalar_t__ usb_mode; } ;
struct usb_device {int bus; TYPE_1__ flags; } ;
struct saf1761_otg_softc {int sc_bus; } ;


 int FUNC_0 (int,char*,struct usb_endpoint*) ;
 int VAR_0 ;
 struct saf1761_otg_softc* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct saf1761_otg_softc*,int,int,int) ;

__attribute__((used)) static void
FUNC_6(struct usb_device *VAR_6, struct usb_endpoint *VAR_7)
{
 struct saf1761_otg_softc *VAR_8;
 struct usb_endpoint_descriptor *VAR_9;

 FUNC_2(VAR_6->bus, VAR_0);

 FUNC_0(5, "endpoint=%p\n", VAR_7);


 if (VAR_6->flags.usb_mode != VAR_5) {

  return;
 }

 VAR_8 = FUNC_1(VAR_6->bus);

 FUNC_3(&VAR_8->sc_bus);


 VAR_9 = VAR_7->edesc;


 FUNC_5(VAR_8,
     (VAR_9->bEndpointAddress & VAR_1),
     (VAR_9->bmAttributes & VAR_4),
     (VAR_9->bEndpointAddress & (VAR_2 | VAR_3)));

 FUNC_4(&VAR_8->sc_bus);
}
