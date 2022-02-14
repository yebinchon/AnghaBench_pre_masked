
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
struct TYPE_5__ {int bmRequestType; int bRequest; int wLength; int wIndex; int wValue; } ;
typedef TYPE_2__ usb_device_request_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int ue_udev; } ;
struct urndis_softc {int sc_mtx; TYPE_1__ sc_ue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,TYPE_2__*,void*,int ,int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct urndis_softc *VAR_2, uint8_t VAR_3, uint8_t VAR_4,
    uint16_t VAR_5, uint16_t VAR_6, void *VAR_7, uint16_t VAR_8)
{
 usb_device_request_t VAR_9;

 VAR_9.bmRequestType = VAR_3;
 VAR_9.bRequest = VAR_4;
 FUNC_0(VAR_9.wValue, VAR_6);
 FUNC_0(VAR_9.wIndex, VAR_5);
 FUNC_0(VAR_9.wLength, VAR_8);

 return (FUNC_1(VAR_2->sc_ue.ue_udev,
     &VAR_2->sc_mtx, &VAR_9, VAR_7, (VAR_3 & VAR_1) ?
     VAR_0 : 0, ((void*)0), 2000 ));
}
