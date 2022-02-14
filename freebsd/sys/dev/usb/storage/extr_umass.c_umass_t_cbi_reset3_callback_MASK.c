
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct umass_softc {scalar_t__* sc_xfer; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct usb_xfer*,size_t,int ,int ) ;
 struct umass_softc* FUNC_1 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_2(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct umass_softc *VAR_6 = FUNC_1(VAR_4);

 FUNC_0
     (VAR_4, (VAR_6->sc_xfer[VAR_2] &&
     VAR_6->sc_xfer[VAR_3]) ?
     VAR_2 : VAR_0,
     VAR_1, VAR_5);
}
