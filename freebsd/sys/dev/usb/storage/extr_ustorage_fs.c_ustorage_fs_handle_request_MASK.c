
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int data_error; } ;
struct ustorage_fs_softc {int sc_last_lun; int sc_mtx; TYPE_1__ sc_transfer; } ;
struct usb_device_request {scalar_t__ bmRequestType; scalar_t__ bRequest; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ustorage_fs_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ustorage_fs_softc*,int ) ;
 int FUNC_4 (struct ustorage_fs_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6,
    const void *VAR_7, void **VAR_8, uint16_t *VAR_9,
    uint16_t VAR_10, uint8_t *VAR_11)
{
 struct ustorage_fs_softc *VAR_12 = FUNC_0(VAR_6);
 const struct usb_device_request *VAR_13 = VAR_7;
 uint8_t VAR_14 = *VAR_11;

 if (!VAR_14) {
  if ((VAR_13->bmRequestType == VAR_5) &&
      (VAR_13->bRequest == VAR_2)) {
   *VAR_9 = 0;
   FUNC_1(&VAR_12->sc_mtx);
   FUNC_4(VAR_12);
   VAR_12->sc_transfer.data_error = 1;
   FUNC_3(VAR_12,
       VAR_3);
   FUNC_2(&VAR_12->sc_mtx);
   return (0);
  } else if ((VAR_13->bmRequestType == VAR_4) &&
      (VAR_13->bRequest == VAR_1)) {
   if (VAR_10 == 0) {
    *VAR_9 = 1;
    *VAR_8 = &VAR_12->sc_last_lun;
   } else {
    *VAR_9 = 0;
   }
   return (0);
  }
 }
 return (VAR_0);
}
