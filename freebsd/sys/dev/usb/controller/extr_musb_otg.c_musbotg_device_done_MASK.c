
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {struct musbotg_td* td_transfer_cache; TYPE_1__* xroot; int endpoint; } ;
struct musbotg_td {int channel; } ;
struct musbotg_softc {int dummy; } ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 struct musbotg_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct musbotg_softc*,struct musbotg_td*) ;
 int FUNC_4 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct musbotg_td *VAR_3;
 struct musbotg_softc *VAR_4;

 FUNC_2(VAR_1->xroot->bus, VAR_0);

 FUNC_0(1, "xfer=%p, endpoint=%p, error=%d\n",
     VAR_1, VAR_1->endpoint, VAR_2);

 FUNC_0(14, "disabled interrupts on endpoint\n");

 VAR_4 = FUNC_1(VAR_1->xroot->bus);
 VAR_3 = VAR_1->td_transfer_cache;

 if (VAR_3 && (VAR_3->channel != -1))
  FUNC_3(VAR_4, VAR_3);


 FUNC_4(VAR_1, VAR_2);
}
