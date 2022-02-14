
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct sis_txdesc {int * tx_m; int tx_dmamap; } ;
struct sis_softc {size_t sis_tx_cons; size_t sis_tx_prod; scalar_t__ sis_tx_cnt; scalar_t__ sis_watchdog_timer; int sis_tx_tag; struct sis_txdesc* sis_txdesc; struct sis_desc* sis_tx_list; int sis_tx_list_map; int sis_tx_list_tag; struct ifnet* sis_ifp; } ;
struct sis_desc {int sis_cmdsts; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct sis_softc*) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct sis_softc *VAR_12)
{
 struct ifnet *VAR_13;
 struct sis_desc *VAR_14;
 struct sis_txdesc *VAR_15;
 uint32_t VAR_16, VAR_17;

 FUNC_1(VAR_12);

 VAR_16 = VAR_12->sis_tx_cons;
 if (VAR_16 == VAR_12->sis_tx_prod)
  return;

 VAR_13 = VAR_12->sis_ifp;
 FUNC_2(VAR_12->sis_tx_list_tag, VAR_12->sis_tx_list_map,
     VAR_0 | VAR_1);





 for (; VAR_16 != VAR_12->sis_tx_prod; FUNC_0(VAR_16, VAR_11)) {
  VAR_14 = &VAR_12->sis_tx_list[VAR_16];
  VAR_17 = FUNC_5(VAR_14->sis_cmdsts);
  if ((VAR_17 & VAR_6) != 0)
   break;
  VAR_15 = &VAR_12->sis_txdesc[VAR_16];
  if (VAR_15->tx_m != ((void*)0)) {
   FUNC_2(VAR_12->sis_tx_tag, VAR_15->tx_dmamap,
       VAR_1);
   FUNC_3(VAR_12->sis_tx_tag, VAR_15->tx_dmamap);
   FUNC_6(VAR_15->tx_m);
   VAR_15->tx_m = ((void*)0);
   if ((VAR_17 & VAR_7) != 0) {
    FUNC_4(VAR_13, VAR_4, 1);
    FUNC_4(VAR_13, VAR_2,
        (VAR_17 & VAR_8) >> 16);
   } else {
    FUNC_4(VAR_13, VAR_3, 1);
    if (VAR_17 & VAR_9)
     FUNC_4(VAR_13, VAR_2, 1);
    if (VAR_17 & VAR_10)
     FUNC_4(VAR_13, VAR_2, 1);
   }
  }
  VAR_12->sis_tx_cnt--;
  VAR_13->if_drv_flags &= ~VAR_5;
 }
 VAR_12->sis_tx_cons = VAR_16;
 if (VAR_12->sis_tx_cnt == 0)
  VAR_12->sis_watchdog_timer = 0;
}
