
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wLength; int wValue; int wIndex; void* bRequest; void* bmRequestType; } ;
typedef TYPE_1__ usb_device_request_t ;
typedef void* uint8_t ;
typedef size_t uint16_t ;
struct udl_softc {int sc_udev; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,int *,TYPE_1__*,void**,int ,int *,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct udl_softc *VAR_1, uint8_t VAR_2, uint8_t VAR_3,
    uint16_t VAR_4, uint16_t VAR_5, uint8_t *VAR_6, size_t VAR_7)
{
 usb_device_request_t VAR_8;
 int VAR_9;

 VAR_8.bmRequestType = VAR_2;
 VAR_8.bRequest = VAR_3;
 FUNC_1(VAR_8.wIndex, VAR_4);
 FUNC_1(VAR_8.wValue, VAR_5);
 FUNC_1(VAR_8.wLength, VAR_7);

 VAR_9 = FUNC_2(VAR_1->sc_udev, ((void*)0),
     &VAR_8, VAR_6, 0, ((void*)0), VAR_0);

 FUNC_0("%s\n", FUNC_3(VAR_9));

 return (VAR_9);
}
