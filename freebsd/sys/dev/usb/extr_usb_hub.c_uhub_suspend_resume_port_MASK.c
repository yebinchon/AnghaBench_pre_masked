
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ usb_mode; } ;
struct usb_device {TYPE_3__ flags; TYPE_1__* hub; int bus; } ;
struct TYPE_5__ {int port_status; } ;
struct uhub_softc {TYPE_2__ sc_st; struct usb_device* sc_udev; } ;
struct TYPE_4__ {int ports; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;


 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct uhub_softc*,int) ;
 struct usb_device* FUNC_3 (int ,int) ;
 int FUNC_4 (struct usb_device*) ;
 int FUNC_5 (struct usb_device*) ;
 scalar_t__ FUNC_6 (struct usb_device*) ;
 scalar_t__ FUNC_7 (struct usb_device*,int *,int,int ) ;
 int FUNC_8 (struct usb_device*,int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_9(struct uhub_softc *VAR_4, uint8_t VAR_5)
{
 struct usb_device *VAR_6;
 struct usb_device *VAR_7;
 uint8_t VAR_8;
 usb_error_t VAR_9;

 FUNC_0("port %d\n", VAR_5);

 VAR_7 = VAR_4->sc_udev;
 VAR_6 = FUNC_3(VAR_7->bus,
     VAR_7->hub->ports + VAR_5 - 1);



 if (FUNC_6(VAR_7)) {
  VAR_9 = FUNC_7(VAR_7, ((void*)0),
      VAR_5, VAR_1);
 } else {
  VAR_9 = FUNC_7(VAR_7, ((void*)0),
      VAR_5, VAR_0);
 }

 if (VAR_9) {
  FUNC_0("clearing suspend failed.\n");
  goto done;
 }


 VAR_9 = FUNC_2(VAR_4, VAR_5);
 if (VAR_9) {
  FUNC_0("reading port status failed.\n");
  goto done;
 }


 if (FUNC_6(VAR_7)) {
  if (VAR_4->sc_st.port_status & VAR_2) {
   VAR_8 = 1;
  } else {
   VAR_8 = 0;
  }
 } else {
  switch (FUNC_1(VAR_4->sc_st.port_status)) {
  case 128:
   VAR_8 = 1;
   break;
  case 129:
   FUNC_8(VAR_7, ((void*)0), VAR_5);
   VAR_8 = 0;
   break;
  default:
   VAR_8 = 0;
   break;
  }
 }

 FUNC_0("suspended=%u\n", VAR_8);



 if (VAR_6) {





  if (VAR_8 == 0)
   FUNC_4(VAR_6);
  else if (VAR_6->flags.usb_mode == VAR_3)
   FUNC_5(VAR_6);
 }
done:
 return (VAR_9);
}
