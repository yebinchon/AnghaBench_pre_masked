
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usie_softc {int sc_if_ifnum; } ;
struct usie_hip {scalar_t__ param; int id; scalar_t__ len; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
typedef int msg ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (struct usie_softc*,struct usb_device_request*,struct usie_hip*) ;

__attribute__((used)) static int
FUNC_3(struct usie_softc *VAR_2, uint8_t VAR_3)
{
 struct usb_device_request VAR_4;
 struct usie_hip VAR_5;

 VAR_5.len = 0;
 VAR_5.id = VAR_3;
 VAR_5.param = 0;

 VAR_4.bmRequestType = VAR_1;
 VAR_4.bRequest = VAR_0;
 FUNC_1(VAR_4.wValue, 0);
 FUNC_1(VAR_4.wIndex, VAR_2->sc_if_ifnum);
 FUNC_1(VAR_4.wLength, sizeof(VAR_5));

 FUNC_0("cmd=%x\n", VAR_3);

 return (FUNC_2(VAR_2, &VAR_4, &VAR_5));
}
