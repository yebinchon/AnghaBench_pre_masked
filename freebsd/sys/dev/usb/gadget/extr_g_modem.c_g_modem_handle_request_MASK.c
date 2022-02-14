
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_device_request {scalar_t__ bmRequestType; scalar_t__ bRequest; int* wValue; } ;
struct g_modem_softc {int sc_abstract_state; int sc_line_coding; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct g_modem_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_6,
    const void *VAR_7, void **VAR_8, uint16_t *VAR_9,
    uint16_t VAR_10, uint8_t *VAR_11)
{
 struct g_modem_softc *VAR_12 = FUNC_0(VAR_6);
 const struct usb_device_request *VAR_13 = VAR_7;
 uint8_t VAR_14 = *VAR_11;

 if (!VAR_14) {
  if ((VAR_13->bmRequestType == VAR_5) &&
      (VAR_13->bRequest == VAR_4) &&
      (VAR_13->wValue[0] == 0x00) &&
      (VAR_13->wValue[1] == 0x00)) {

   if (VAR_10 == 0) {
    *VAR_9 = sizeof(VAR_12->sc_line_coding);
    *VAR_8 = &VAR_12->sc_line_coding;
   } else {
    *VAR_9 = 0;
   }
   return (0);
  } else if ((VAR_13->bmRequestType == VAR_5) &&
      (VAR_13->bRequest == VAR_2)) {

   if (VAR_10 == 0) {
    *VAR_9 = sizeof(VAR_12->sc_abstract_state);
    *VAR_8 = &VAR_12->sc_abstract_state;
   } else {
    *VAR_9 = 0;
   }
   return (0);
  } else if ((VAR_13->bmRequestType == VAR_5) &&
      (VAR_13->bRequest == VAR_3)) {
   *VAR_9 = 0;
   return (0);
  } else if ((VAR_13->bmRequestType == VAR_5) &&
      (VAR_13->bRequest == VAR_1)) {
   *VAR_9 = 0;
   return (0);
  }
 }
 return (VAR_0);
}
