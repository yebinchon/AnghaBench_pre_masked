
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_device_request {scalar_t__ bmRequestType; int bRequest; } ;
struct g_audio_softc {int sc_sample_rate; int sc_volume_setting; int sc_volume_limit; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct g_audio_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4,
    const void *VAR_5, void **VAR_6, uint16_t *VAR_7,
    uint16_t VAR_8, uint8_t *VAR_9)
{
 struct g_audio_softc *VAR_10 = FUNC_1(VAR_4);
 const struct usb_device_request *VAR_11 = VAR_5;
 uint8_t VAR_12 = *VAR_9;

 if (!VAR_12) {
  if ((VAR_11->bmRequestType == VAR_1) &&
      (VAR_11->bRequest == 0x82 )) {

   if (VAR_8 == 0) {
    FUNC_0(VAR_10->sc_volume_limit, 0);
    *VAR_7 = 2;
    *VAR_6 = &VAR_10->sc_volume_limit;
   } else {
    *VAR_7 = 0;
   }
   return (0);
  } else if ((VAR_11->bmRequestType == VAR_1) &&
      (VAR_11->bRequest == 0x83 )) {

   if (VAR_8 == 0) {
    FUNC_0(VAR_10->sc_volume_limit, 0x2000);
    *VAR_7 = 2;
    *VAR_6 = &VAR_10->sc_volume_limit;
   } else {
    *VAR_7 = 0;
   }
   return (0);
  } else if ((VAR_11->bmRequestType == VAR_1) &&
      (VAR_11->bRequest == 0x84 )) {

   if (VAR_8 == 0) {
    FUNC_0(VAR_10->sc_volume_limit, 1);
    *VAR_7 = 2;
    *VAR_6 = &VAR_10->sc_volume_limit;
   } else {
    *VAR_7 = 0;
   }
   return (0);
  } else if ((VAR_11->bmRequestType == VAR_1) &&
      (VAR_11->bRequest == 0x81 )) {

   if (VAR_8 == 0) {
    FUNC_0(VAR_10->sc_volume_setting, 0x2000);
    *VAR_7 = sizeof(VAR_10->sc_volume_setting);
    *VAR_6 = &VAR_10->sc_volume_setting;
   } else {
    *VAR_7 = 0;
   }
   return (0);
  } else if ((VAR_11->bmRequestType == VAR_3) &&
      (VAR_11->bRequest == 0x01 )) {

   if (VAR_8 == 0) {
    *VAR_7 = sizeof(VAR_10->sc_volume_setting);
    *VAR_6 = &VAR_10->sc_volume_setting;
   } else {
    *VAR_7 = 0;
   }
   return (0);
  } else if ((VAR_11->bmRequestType == VAR_2) &&
      (VAR_11->bRequest == 0x01 )) {

   if (VAR_8 == 0) {
    *VAR_7 = sizeof(VAR_10->sc_sample_rate);
    *VAR_6 = &VAR_10->sc_sample_rate;
   } else {
    *VAR_7 = 0;
   }
   return (0);
  }
 }
 return (VAR_0);
}
