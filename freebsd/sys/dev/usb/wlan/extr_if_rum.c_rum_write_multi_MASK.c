
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct rum_softc {int sc_dev; } ;


 scalar_t__ FUNC_0 (size_t,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (struct rum_softc*,struct usb_device_request*,char*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static usb_error_t
FUNC_5(struct rum_softc *VAR_3, uint16_t VAR_4, void *VAR_5, size_t VAR_6)
{
 struct usb_device_request VAR_7;
 usb_error_t VAR_8;
 size_t VAR_9;

 VAR_7.bmRequestType = VAR_2;
 VAR_7.bRequest = VAR_0;
 FUNC_1(VAR_7.wValue, 0);


 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9 += 64) {
  FUNC_1(VAR_7.wIndex, VAR_4 + VAR_9);
  FUNC_1(VAR_7.wLength, FUNC_0(VAR_6 - VAR_9, 64));

  VAR_8 = FUNC_3(VAR_3, &VAR_7, (char *)VAR_5 + VAR_9);
  if (VAR_8 != 0) {
   FUNC_2(VAR_3->sc_dev,
       "could not multi write MAC register: %s\n",
       FUNC_4(VAR_8));
   return (VAR_8);
  }
 }

 return (VAR_1);
}
