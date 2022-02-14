
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct usb_xfer {int interval; int qh_pos; TYPE_1__* xroot; } ;
struct TYPE_5__ {scalar_t__* sc_intr_stat; } ;
typedef TYPE_2__ ohci_softc_t ;
struct TYPE_4__ {int bus; } ;


 int FUNC_0 (int,char*,int,int) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct usb_xfer *VAR_1)
{
 ohci_softc_t *VAR_2 = FUNC_1(VAR_1->xroot->bus);
 uint16_t VAR_3;
 uint16_t VAR_4;
 uint16_t VAR_5;

 VAR_3 = 0;
 VAR_4 = VAR_0 / 2;
 while (VAR_4) {
  if (VAR_1->interval >= VAR_4) {
   VAR_5 = VAR_4;
   VAR_3 = VAR_4;
   while (VAR_5 & VAR_4) {
    if (VAR_2->sc_intr_stat[VAR_5] <
        VAR_2->sc_intr_stat[VAR_3]) {
     VAR_3 = VAR_5;
    }
    VAR_5++;
   }
   break;
  }
  VAR_4 >>= 1;
 }

 VAR_2->sc_intr_stat[VAR_3]++;
 VAR_1->qh_pos = VAR_3;

 FUNC_0(3, "best=%d interval=%d\n",
     VAR_3, VAR_1->interval);
}
