
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xfer {int dummy; } ;
struct uath_softc {scalar_t__ sc_tx_timer; } ;
struct uath_data {int * ni; int * m; } ;


 int FUNC_0 (struct uath_softc*) ;
 int FUNC_1 (int *,int *,int ) ;
 struct uath_softc* FUNC_2 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_3(struct usb_xfer *VAR_0, struct uath_data *VAR_1)
{
 struct uath_softc *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2);

 if (VAR_1->m) {

  FUNC_1(VAR_1->ni, VAR_1->m, 0);
  VAR_1->m = ((void*)0);
  VAR_1->ni = ((void*)0);
 }
 VAR_2->sc_tx_timer = 0;
}
