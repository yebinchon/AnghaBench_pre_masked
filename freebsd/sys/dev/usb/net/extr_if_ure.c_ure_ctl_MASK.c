
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ure_softc {int sc_ue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ure_softc*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,struct usb_device_request*,void*,int) ;

__attribute__((used)) static int
FUNC_3(struct ure_softc *VAR_5, uint8_t VAR_6, uint16_t VAR_7, uint16_t VAR_8,
    void *VAR_9, int VAR_10)
{
 struct usb_device_request VAR_11;

 FUNC_0(VAR_5, VAR_0);

 if (VAR_6 == VAR_1)
  VAR_11.bmRequestType = VAR_4;
 else
  VAR_11.bmRequestType = VAR_3;
 VAR_11.bRequest = VAR_2;
 FUNC_1(VAR_11.wValue, VAR_7);
 FUNC_1(VAR_11.wIndex, VAR_8);
 FUNC_1(VAR_11.wLength, VAR_10);

 return (FUNC_2(&VAR_5->sc_ue, &VAR_11, VAR_9, 1000));
}
