
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct TYPE_3__ {int wValue; int wLength; int wIndex; int bRequest; int bmRequestType; } ;
typedef TYPE_1__ usb_device_request_t ;
typedef size_t uint16_t ;
struct uftdi_softc {int sc_mtx; int sc_udev; } ;
struct uftdi_eeio {int offset; int length; size_t* data; } ;
struct ucom_softc {struct uftdi_softc* sc_parent; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,size_t) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int *,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_3(struct ucom_softc *VAR_4, struct uftdi_eeio *VAR_5)
{
 struct uftdi_softc *VAR_6 = VAR_4->sc_parent;
 usb_device_request_t VAR_7;
 usb_error_t VAR_8;
 uint16_t VAR_9, VAR_10, VAR_11;

 FUNC_0(3, "\n");


 if ((VAR_5->offset | VAR_5->length) & 0x01)
  return (VAR_0);

 VAR_11 = VAR_5->offset / 2U;
 VAR_10 = VAR_5->length / 2U;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_7.bmRequestType = VAR_3;
  VAR_7.bRequest = VAR_1;
  FUNC_1(VAR_7.wIndex, VAR_9 + VAR_11);
  FUNC_1(VAR_7.wLength, 0);
  FUNC_1(VAR_7.wValue, VAR_5->data[VAR_9]);
  VAR_8 = FUNC_2(VAR_6->sc_udev, &VAR_6->sc_mtx, &VAR_7, ((void*)0));
  if (VAR_8 != VAR_2)
   return (VAR_8);
 }
 return (VAR_2);
}
