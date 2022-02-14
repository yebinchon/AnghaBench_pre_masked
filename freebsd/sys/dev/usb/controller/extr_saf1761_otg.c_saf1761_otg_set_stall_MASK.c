
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_endpoint {TYPE_2__* edesc; } ;
struct TYPE_3__ {scalar_t__ usb_mode; } ;
struct usb_device {int bus; TYPE_1__ flags; } ;
struct saf1761_otg_softc {int sc_bus; } ;
struct TYPE_4__ {int bEndpointAddress; int bmAttributes; } ;


 int FUNC_0 (int,char*,struct usb_endpoint*) ;
 int VAR_0 ;
 struct saf1761_otg_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct saf1761_otg_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void
FUNC_6(struct usb_device *VAR_13,
    struct usb_endpoint *VAR_14, uint8_t *VAR_15)
{
 struct saf1761_otg_softc *VAR_16;
 uint8_t VAR_17;
 uint8_t VAR_18;
 uint8_t VAR_19;

 FUNC_3(VAR_13->bus, VAR_0);


 if (VAR_13->flags.usb_mode != VAR_12) {

  return;
 }

 FUNC_0(5, "endpoint=%p\n", VAR_14);


 VAR_16 = FUNC_1(VAR_13->bus);

 VAR_17 = (VAR_14->edesc->bEndpointAddress & VAR_7);
 VAR_19 = (VAR_14->edesc->bEndpointAddress & (VAR_9 | VAR_10));
 VAR_18 = (VAR_14->edesc->bmAttributes & VAR_11);

 if (VAR_18 == VAR_8) {

  return;
 }
 FUNC_4(&VAR_16->sc_bus);


 FUNC_2(VAR_16, VAR_3,
     (VAR_17 << VAR_6) |
     ((VAR_19 == VAR_9) ? VAR_4 :
     VAR_5));


 FUNC_2(VAR_16, VAR_1, VAR_2);

 FUNC_5(&VAR_16->sc_bus);
}
