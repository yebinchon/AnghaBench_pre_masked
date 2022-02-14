
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct usb_port {int dummy; } ;
struct usb_hub {scalar_t__ nports; struct usb_port* ports; struct uhub_softc* hubsoftc; } ;
struct TYPE_2__ {scalar_t__ usb_mode; } ;
struct usb_device {int speed; TYPE_1__ flags; int bus; struct usb_hub* hub; } ;
struct uhub_softc {int dummy; } ;
typedef enum usb_dev_speed { ____Placeholder_usb_dev_speed } usb_dev_speed ;


 scalar_t__ VAR_0 ;
 struct usb_device* FUNC_0 (int ,struct usb_port*) ;

uint8_t
FUNC_1(struct usb_device *VAR_1, enum usb_dev_speed VAR_2)
{
 struct uhub_softc *VAR_3;
 struct usb_device *VAR_4;
 struct usb_hub *VAR_5;
 struct usb_port *VAR_6;
 uint8_t VAR_7 = 0;
 uint8_t VAR_8;

 if (VAR_1 == ((void*)0))
  goto done;
 VAR_5 = VAR_1->hub;
 if (VAR_5 == ((void*)0))
  goto done;
 VAR_3 = VAR_5->hubsoftc;
 if (VAR_3 == ((void*)0))
  goto done;

 for (VAR_8 = 0; VAR_8 != VAR_5->nports; VAR_8++) {
  VAR_6 = VAR_5->ports + VAR_8;
  VAR_4 = FUNC_0(VAR_1->bus, VAR_6);
  if (VAR_4 != ((void*)0) &&
      VAR_4->flags.usb_mode == VAR_0 &&
      VAR_4->speed == VAR_2)
   VAR_7++;
 }
done:
 return (VAR_7);
}
