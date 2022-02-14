
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_device_request {scalar_t__ bmRequestType; scalar_t__ bRequest; } ;
struct cfumass_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct cfumass_softc*,char*) ;
 int FUNC_1 (struct cfumass_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct cfumass_softc*) ;
 int FUNC_3 (struct cfumass_softc*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct cfumass_softc*) ;
 int FUNC_5 (struct cfumass_softc*,int ) ;
 struct cfumass_softc* FUNC_6 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_7,
    const void *VAR_8, void **VAR_9, uint16_t *VAR_10,
    uint16_t VAR_11, uint8_t *VAR_12)
{
 static uint8_t VAR_13;
 struct cfumass_softc *VAR_14;
 const struct usb_device_request *VAR_15;
 uint8_t VAR_16;

 VAR_14 = FUNC_6(VAR_7);
 VAR_15 = VAR_8;
 VAR_16 = *VAR_12;

 FUNC_0(VAR_14, "go");

 if (VAR_16)
  return (VAR_1);

 if ((VAR_15->bmRequestType == VAR_5) &&
     (VAR_15->bRequest == VAR_3)) {
  FUNC_3(VAR_14, "received Bulk-Only Mass Storage Reset");
  *VAR_10 = 0;

  FUNC_1(VAR_14);
  FUNC_4(VAR_14);
  FUNC_5(VAR_14, VAR_0);
  FUNC_2(VAR_14);

  FUNC_0(VAR_14, "Bulk-Only Mass Storage Reset done");
  return (0);
 }

 if ((VAR_15->bmRequestType == VAR_4) &&
     (VAR_15->bRequest == VAR_2)) {
  FUNC_0(VAR_14, "received Get Max LUN");
  if (VAR_11 == 0) {
   *VAR_10 = 1;







   if (VAR_6 < 0 || VAR_6 > 15) {
    FUNC_3(VAR_14,
        "invalid hw.usb.cfumass.max_lun, must be "
        "between 0 and 15; defaulting to 0");
    VAR_13 = 0;
   } else {
    VAR_13 = VAR_6;
   }
   *VAR_9 = &VAR_13;
  } else {
   *VAR_10 = 0;
  }
  return (0);
 }

 return (VAR_1);
}
