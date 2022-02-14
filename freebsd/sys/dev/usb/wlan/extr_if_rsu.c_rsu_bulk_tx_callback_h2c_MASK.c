
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct rsu_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_xfer*,int ,int ) ;
 int FUNC_1 (struct rsu_softc*) ;
 struct rsu_softc* FUNC_2 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_3(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct rsu_softc *VAR_3 = FUNC_2(VAR_1);

 FUNC_0(VAR_1, VAR_2, VAR_0);


 FUNC_1(VAR_3);
}
