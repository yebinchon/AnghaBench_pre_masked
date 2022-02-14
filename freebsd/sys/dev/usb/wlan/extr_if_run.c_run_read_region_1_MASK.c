
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
typedef TYPE_1__ usb_device_request_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct run_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct run_softc*,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_2(struct run_softc *VAR_2, uint16_t VAR_3, uint8_t *VAR_4, int VAR_5)
{
 usb_device_request_t VAR_6;

 VAR_6.bmRequestType = VAR_1;
 VAR_6.bRequest = VAR_0;
 FUNC_0(VAR_6.wValue, 0);
 FUNC_0(VAR_6.wIndex, VAR_3);
 FUNC_0(VAR_6.wLength, VAR_5);

 return (FUNC_1(VAR_2, &VAR_6, VAR_4));
}
