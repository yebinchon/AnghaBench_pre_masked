
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
typedef TYPE_1__ usb_device_request_t ;
typedef int uint16_t ;
typedef int tmp ;
struct run_softc {int sc_mtx; int sc_udev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,TYPE_1__*,int*) ;

__attribute__((used)) static int
FUNC_3(struct run_softc *VAR_2, uint16_t VAR_3, uint16_t *VAR_4)
{
 usb_device_request_t VAR_5;
 uint16_t VAR_6;
 int VAR_7;

 VAR_3 *= 2;
 VAR_5.bmRequestType = VAR_1;
 VAR_5.bRequest = VAR_0;
 FUNC_0(VAR_5.wValue, 0);
 FUNC_0(VAR_5.wIndex, VAR_3);
 FUNC_0(VAR_5.wLength, sizeof(VAR_6));

 VAR_7 = FUNC_2(VAR_2->sc_udev, &VAR_2->sc_mtx, &VAR_5, &VAR_6);
 if (VAR_7 == 0)
  *VAR_4 = FUNC_1(VAR_6);
 else
  *VAR_4 = 0xffff;
 return (VAR_7);
}
