
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_device_request {scalar_t__ bmRequestType; scalar_t__ bRequest; int* wValue; } ;
struct g_keyboard_softc {int sc_led_state; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct g_keyboard_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_5,
    const void *VAR_6, void **VAR_7, uint16_t *VAR_8,
    uint16_t VAR_9, uint8_t *VAR_10)
{
 struct g_keyboard_softc *VAR_11 = FUNC_0(VAR_5);
 const struct usb_device_request *VAR_12 = VAR_6;
 uint8_t VAR_13 = *VAR_10;

 if (!VAR_13) {
  if ((VAR_12->bmRequestType == VAR_4) &&
      (VAR_12->bRequest == VAR_3) &&
      (VAR_12->wValue[0] == 0x00) &&
      (VAR_12->wValue[1] == 0x02)) {

   if (VAR_9 == 0) {
    *VAR_8 = sizeof(VAR_11->sc_led_state);
    *VAR_7 = &VAR_11->sc_led_state;
   } else {
    *VAR_8 = 0;
   }
   return (0);
  } else if ((VAR_12->bmRequestType == VAR_4) &&
       (VAR_12->bRequest == VAR_2) &&
       (VAR_12->wValue[0] == 0x00) &&
      (VAR_12->wValue[1] == 0x00)) {
   *VAR_8 = 0;
   return (0);
  } else if ((VAR_12->bmRequestType == VAR_4) &&
      (VAR_12->bRequest == VAR_1)) {
   *VAR_8 = 0;
   return (0);
  }
 }
 return (VAR_0);
}
