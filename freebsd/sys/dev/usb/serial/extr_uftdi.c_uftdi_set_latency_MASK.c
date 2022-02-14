
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
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_4(struct ucom_softc *VAR_3, int VAR_4)
{
 struct uftdi_softc *VAR_5 = VAR_3->sc_parent;
 usb_device_request_t VAR_6;

 FUNC_0(2, "\n");

 if (VAR_4 < 0 || VAR_4 > 255)
  return (VAR_1);

 VAR_6.bmRequestType = VAR_2;
 VAR_6.bRequest = VAR_0;

 FUNC_1(VAR_6.wIndex, VAR_5->sc_ucom.sc_portno);
 FUNC_1(VAR_6.wLength, 0);
 FUNC_2(VAR_6.wValue, 0, VAR_4);

 return (FUNC_3(VAR_5->sc_udev, &VAR_5->sc_mtx, &VAR_6, ((void*)0)));
}
