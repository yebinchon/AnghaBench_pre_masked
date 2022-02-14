
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int wValue; int wLength; int wIndex; int bRequest; int bmRequestType; } ;
typedef TYPE_2__ usb_device_request_t ;
struct TYPE_4__ {int sc_portno; } ;
struct uftdi_softc {int sc_mtx; int sc_udev; TYPE_1__ sc_ucom; } ;
struct ucom_softc {struct uftdi_softc* sc_parent; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_3(struct ucom_softc *VAR_2, int VAR_3)
{
 struct uftdi_softc *VAR_4 = VAR_2->sc_parent;
 usb_device_request_t VAR_5;

 FUNC_0(2, "\n");

 VAR_5.bmRequestType = VAR_1;
 VAR_5.bRequest = VAR_0;

 FUNC_1(VAR_5.wIndex, VAR_4->sc_ucom.sc_portno);
 FUNC_1(VAR_5.wLength, 0);
 FUNC_1(VAR_5.wValue, VAR_3);

 return (FUNC_2(VAR_4->sc_udev, &VAR_4->sc_mtx, &VAR_5, ((void*)0)));
}
