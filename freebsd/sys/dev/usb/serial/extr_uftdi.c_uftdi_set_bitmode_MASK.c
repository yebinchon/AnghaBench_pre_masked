
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int wValue; int wLength; int wIndex; int bRequest; int bmRequestType; } ;
typedef TYPE_2__ usb_device_request_t ;
typedef int uint8_t ;
struct TYPE_4__ {int sc_portno; } ;
struct uftdi_softc {int sc_bitmode; int sc_mtx; int sc_udev; TYPE_1__ sc_ucom; } ;
struct ucom_softc {struct uftdi_softc* sc_parent; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_4(struct ucom_softc *VAR_4, uint8_t VAR_5, uint8_t VAR_6)
{
 struct uftdi_softc *VAR_7 = VAR_4->sc_parent;
 usb_device_request_t VAR_8;
 int VAR_9;

 FUNC_0(2, "\n");

 VAR_8.bmRequestType = VAR_3;
 VAR_8.bRequest = VAR_0;

 FUNC_1(VAR_8.wIndex, VAR_7->sc_ucom.sc_portno);
 FUNC_1(VAR_8.wLength, 0);

 if (VAR_5 == VAR_1)
     FUNC_2(VAR_8.wValue, 0, 0);
 else
     FUNC_2(VAR_8.wValue, (1 << VAR_5), VAR_6);

 VAR_9 = FUNC_3(VAR_7->sc_udev, &VAR_7->sc_mtx, &VAR_8, ((void*)0));
 if (VAR_9 == VAR_2)
  VAR_7->sc_bitmode = VAR_5;

 return (VAR_9);
}
