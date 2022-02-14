
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_port {int dummy; } ;
struct TYPE_4__ {scalar_t__ usb_mode; } ;
struct usb_device {scalar_t__ driver_added_refcount; TYPE_2__* hub; TYPE_1__ flags; } ;
struct usb_bus {scalar_t__ driver_added_refcount; } ;
struct uhub_softc {TYPE_3__* sc_udev; } ;
struct TYPE_6__ {struct usb_bus* bus; } ;
struct TYPE_5__ {scalar_t__ (* explore ) (struct usb_device*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct usb_device*) ;
 int FUNC_1 (struct usb_device*) ;
 struct usb_device* FUNC_2 (struct usb_bus*,struct usb_port*) ;
 scalar_t__ FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (struct usb_device*) ;

__attribute__((used)) static usb_error_t
FUNC_5(struct uhub_softc *VAR_2, struct usb_port *VAR_3)
{
 struct usb_bus *VAR_4;
 struct usb_device *VAR_5;
 uint8_t VAR_6;
 usb_error_t VAR_7;

 VAR_4 = VAR_2->sc_udev->bus;
 VAR_7 = 0;


 VAR_6 = VAR_4->driver_added_refcount;


 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5 == ((void*)0)) {

  goto done;
 }

 FUNC_1(VAR_5);



 if (VAR_5->driver_added_refcount != VAR_6) {
  VAR_5->driver_added_refcount = VAR_6;
  VAR_7 = FUNC_3(VAR_5,
      VAR_0);
  if (VAR_7) {
   goto done;
  }
 }


 if (VAR_5->flags.usb_mode == VAR_1)
  FUNC_4(VAR_5);



 if (VAR_5->hub)
  VAR_7 = (VAR_5->hub->explore) (VAR_5);

done:
 return (VAR_7);
}
