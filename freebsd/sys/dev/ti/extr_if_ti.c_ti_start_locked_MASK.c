
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ti_tx_ring_map; int ti_tx_ring_tag; } ;
struct TYPE_3__ {int * ti_tx_ring; } ;
struct ti_softc {int ti_txcnt; int ti_timer; int ti_tx_saved_prodidx; TYPE_2__ ti_cdata; TYPE_1__ ti_rdata; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct ti_softc* if_softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ti_softc*,int ,int ) ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct ti_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_7(struct ifnet *VAR_4)
{
 struct ti_softc *VAR_5;
 struct mbuf *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 VAR_5 = VAR_4->if_softc;

 for (; !FUNC_3(&VAR_4->if_snd) &&
     VAR_5->ti_txcnt < (VAR_3 - 16);) {
  FUNC_2(&VAR_4->if_snd, VAR_6);
  if (VAR_6 == ((void*)0))
   break;






  if (FUNC_6(VAR_5, &VAR_6)) {
   if (VAR_6 == ((void*)0))
    break;
   FUNC_4(&VAR_4->if_snd, VAR_6);
   VAR_4->if_drv_flags |= VAR_1;
   break;
  }

  VAR_7++;




  FUNC_1(VAR_4, VAR_6);
 }

 if (VAR_7 > 0) {
  if (VAR_5->ti_rdata.ti_tx_ring != ((void*)0))
   FUNC_5(VAR_5->ti_cdata.ti_tx_ring_tag,
       VAR_5->ti_cdata.ti_tx_ring_map, VAR_0);

  FUNC_0(VAR_5, VAR_2, VAR_5->ti_tx_saved_prodidx);




  VAR_5->ti_timer = 5;
 }
}
