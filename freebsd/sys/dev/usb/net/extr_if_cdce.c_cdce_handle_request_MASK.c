
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_device_request {scalar_t__ bmRequestType; scalar_t__ bRequest; } ;
struct cdce_softc {int sc_mtx; int * sc_xfer; int sc_notify_state; } ;
typedef int device_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct cdce_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5,
    const void *VAR_6, void **VAR_7, uint16_t *VAR_8,
    uint16_t VAR_9, uint8_t *VAR_10)
{
 struct cdce_softc *VAR_11 = FUNC_0(VAR_5);
 const struct usb_device_request *VAR_12 = VAR_6;
 uint8_t VAR_13 = *VAR_10;





 if (VAR_12->bmRequestType == VAR_4 && VAR_12->bRequest == VAR_3) {


  if (VAR_13 == 1) {
   FUNC_1(&VAR_11->sc_mtx);
   VAR_11->sc_notify_state = VAR_1;
   FUNC_3(VAR_11->sc_xfer[VAR_0]);
   FUNC_2(&VAR_11->sc_mtx);
  }

  return (0);
 }

 return (VAR_2);
}
