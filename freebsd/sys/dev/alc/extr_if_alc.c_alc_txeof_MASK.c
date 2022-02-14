
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct alc_txdesc {int * tx_m; int tx_dmamap; } ;
struct TYPE_6__ {scalar_t__ alc_tx_cnt; size_t alc_tx_cons; int alc_cmb_map; int alc_cmb_tag; int alc_tx_tag; struct alc_txdesc* alc_txdesc; int alc_tx_ring_map; int alc_tx_ring_tag; } ;
struct TYPE_5__ {TYPE_1__* alc_cmb; } ;
struct alc_softc {int alc_flags; scalar_t__ alc_watchdog_timer; TYPE_3__ alc_cdata; TYPE_2__ alc_rdata; struct ifnet* alc_ifp; } ;
struct TYPE_4__ {size_t cons; } ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct alc_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_2 (struct alc_softc*,int ) ;
 size_t FUNC_3 (struct alc_softc*,int ) ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct alc_softc *VAR_11)
{
 struct ifnet *VAR_12;
 struct alc_txdesc *VAR_13;
 uint32_t VAR_14, VAR_15;
 int VAR_16;

 FUNC_1(VAR_11);

 VAR_12 = VAR_11->alc_ifp;

 if (VAR_11->alc_cdata.alc_tx_cnt == 0)
  return;
 FUNC_4(VAR_11->alc_cdata.alc_tx_ring_tag,
     VAR_11->alc_cdata.alc_tx_ring_map, VAR_6);
 if ((VAR_11->alc_flags & VAR_1) == 0) {
  FUNC_4(VAR_11->alc_cdata.alc_cmb_tag,
      VAR_11->alc_cdata.alc_cmb_map, VAR_5);
  VAR_15 = VAR_11->alc_rdata.alc_cmb->cons;
 } else {
  if ((VAR_11->alc_flags & VAR_0) != 0)
   VAR_15 = FUNC_2(VAR_11, VAR_3);
  else {
   VAR_15 = FUNC_3(VAR_11, VAR_2);

   VAR_15 = (VAR_15 & VAR_9) >>
       VAR_10;
  }
 }
 VAR_14 = VAR_11->alc_cdata.alc_tx_cons;




 for (VAR_16 = 0; VAR_14 != VAR_15; VAR_16++,
     FUNC_0(VAR_14, VAR_4)) {
  if (VAR_11->alc_cdata.alc_tx_cnt <= 0)
   break;
  VAR_16++;
  VAR_12->if_drv_flags &= ~VAR_8;
  VAR_11->alc_cdata.alc_tx_cnt--;
  VAR_13 = &VAR_11->alc_cdata.alc_txdesc[VAR_14];
  if (VAR_13->tx_m != ((void*)0)) {

   FUNC_4(VAR_11->alc_cdata.alc_tx_tag,
       VAR_13->tx_dmamap, VAR_6);
   FUNC_5(VAR_11->alc_cdata.alc_tx_tag,
       VAR_13->tx_dmamap);
   FUNC_6(VAR_13->tx_m);
   VAR_13->tx_m = ((void*)0);
  }
 }

 if ((VAR_11->alc_flags & VAR_1) == 0)
  FUNC_4(VAR_11->alc_cdata.alc_cmb_tag,
      VAR_11->alc_cdata.alc_cmb_map, VAR_7);
 VAR_11->alc_cdata.alc_tx_cons = VAR_14;




 if (VAR_11->alc_cdata.alc_tx_cnt == 0)
  VAR_11->alc_watchdog_timer = 0;
}
