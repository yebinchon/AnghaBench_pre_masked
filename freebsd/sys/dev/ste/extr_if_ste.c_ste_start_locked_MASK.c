
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ste_tx_cnt; size_t ste_tx_prod; struct ste_chain* ste_last_tx; int ste_tx_list_map; int ste_tx_list_tag; struct ste_chain* ste_tx_chain; } ;
struct TYPE_4__ {int ste_tx_list_paddr; } ;
struct ste_softc {int ste_flags; int ste_timer; TYPE_3__ ste_cdata; TYPE_1__ ste_ldata; } ;
struct ste_chain {int ste_phys; TYPE_2__* ste_ptr; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct ste_softc* if_softc; } ;
struct TYPE_5__ {int ste_next; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ste_softc*,int ,int) ;
 int FUNC_2 (struct ste_softc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,struct mbuf*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct mbuf*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct ste_softc*) ;
 int FUNC_8 (struct ste_softc*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int ,int ,int) ;
 scalar_t__ FUNC_10 (struct ste_softc*,struct mbuf**,struct ste_chain*) ;
 int FUNC_11 (struct ste_softc*) ;

__attribute__((used)) static void
FUNC_12(struct ifnet *VAR_12)
{
 struct ste_softc *VAR_13;
 struct ste_chain *VAR_14;
 struct mbuf *VAR_15 = ((void*)0);
 int VAR_16;

 VAR_13 = VAR_12->if_softc;
 FUNC_7(VAR_13);

 if ((VAR_12->if_drv_flags & (VAR_3 | VAR_2)) !=
     VAR_3 || (VAR_13->ste_flags & VAR_7) == 0)
  return;

 for (VAR_16 = 0; !FUNC_4(&VAR_12->if_snd);) {
  if (VAR_13->ste_cdata.ste_tx_cnt == VAR_10 - 1) {





   VAR_12->if_drv_flags |= VAR_2;
   break;
  }
  FUNC_3(&VAR_12->if_snd, VAR_15);
  if (VAR_15 == ((void*)0))
   break;
  VAR_14 = &VAR_13->ste_cdata.ste_tx_chain[VAR_13->ste_cdata.ste_tx_prod];
  if (FUNC_10(VAR_13, &VAR_15, VAR_14) != 0) {
   if (VAR_15 == ((void*)0))
    break;
   FUNC_5(&VAR_12->if_snd, VAR_15);
   break;
  }
  if (VAR_13->ste_cdata.ste_last_tx == ((void*)0)) {
   FUNC_9(VAR_13->ste_cdata.ste_tx_list_tag,
       VAR_13->ste_cdata.ste_tx_list_map,
       VAR_0 | VAR_1);
   FUNC_8(VAR_13, VAR_4, VAR_5);
   FUNC_11(VAR_13);
   FUNC_2(VAR_13, VAR_8,
           FUNC_6(VAR_13->ste_ldata.ste_tx_list_paddr));
   FUNC_1(VAR_13, VAR_9, 64);
   FUNC_8(VAR_13, VAR_4, VAR_6);
   FUNC_11(VAR_13);
  } else {
   VAR_13->ste_cdata.ste_last_tx->ste_ptr->ste_next =
       VAR_13->ste_cdata.ste_last_tx->ste_phys;
   FUNC_9(VAR_13->ste_cdata.ste_tx_list_tag,
       VAR_13->ste_cdata.ste_tx_list_map,
       VAR_0 | VAR_1);
  }
  VAR_13->ste_cdata.ste_last_tx = VAR_14;

  VAR_16++;




  FUNC_0(VAR_12, VAR_15);
 }

 if (VAR_16 > 0)
  VAR_13->ste_timer = VAR_11;
}
