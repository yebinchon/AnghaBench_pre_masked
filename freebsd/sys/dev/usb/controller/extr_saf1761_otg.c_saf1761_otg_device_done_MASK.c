
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
struct TYPE_3__ {scalar_t__ usb_mode; } ;
struct usb_xfer {struct saf1761_otg_td* td_transfer_cache; TYPE_1__ flags_int; int endpoint; TYPE_2__* xroot; } ;
struct saf1761_otg_td {int dummy; } ;
struct saf1761_otg_softc {int sc_bus; } ;
struct TYPE_4__ {int bus; } ;


 int FUNC_0 (int,char*,struct usb_xfer*,int ,int ) ;
 int VAR_0 ;
 struct saf1761_otg_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct saf1761_otg_softc*,struct saf1761_otg_td*) ;
 int FUNC_6 (struct usb_xfer*,int ) ;
 int FUNC_7 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_8(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct saf1761_otg_softc *VAR_4 = FUNC_1(VAR_2->xroot->bus);

 FUNC_2(VAR_2->xroot->bus, VAR_0);

 FUNC_0(2, "xfer=%p, endpoint=%p, error=%d\n",
     VAR_2, VAR_2->endpoint, VAR_3);

 FUNC_3(&VAR_4->sc_bus);

 if (VAR_2->flags_int.usb_mode == VAR_1) {
  FUNC_6(VAR_2, 0);
 } else {
  struct saf1761_otg_td *VAR_5;

  VAR_5 = VAR_2->td_transfer_cache;

  if (VAR_5 != ((void*)0))
   FUNC_5(VAR_4, VAR_5);
 }


 FUNC_7(VAR_2, VAR_3);

 FUNC_4(&VAR_4->sc_bus);
}
