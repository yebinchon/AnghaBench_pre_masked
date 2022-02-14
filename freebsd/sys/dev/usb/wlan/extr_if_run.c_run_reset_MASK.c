
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
typedef TYPE_1__ usb_device_request_t ;
struct run_softc {int sc_mtx; int sc_udev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_2(struct run_softc *VAR_2)
{
 usb_device_request_t VAR_3;

 VAR_3.bmRequestType = VAR_1;
 VAR_3.bRequest = VAR_0;
 FUNC_0(VAR_3.wValue, 1);
 FUNC_0(VAR_3.wIndex, 0);
 FUNC_0(VAR_3.wLength, 0);
 return (FUNC_1(VAR_2->sc_udev, &VAR_2->sc_mtx, &VAR_3, ((void*)0)));
}
