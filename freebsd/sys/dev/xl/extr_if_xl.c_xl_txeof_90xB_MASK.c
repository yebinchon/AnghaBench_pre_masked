
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int xl_tx_cons; int xl_tx_prod; scalar_t__ xl_tx_cnt; struct xl_chain* xl_tx_chain; } ;
struct TYPE_4__ {int xl_tx_dmamap; int xl_tx_tag; } ;
struct xl_softc {TYPE_3__ xl_cdata; scalar_t__ xl_wdog_timer; int xl_mtag; TYPE_1__ xl_ldata; struct ifnet* xl_ifp; } ;
struct xl_chain {int * xl_mbuf; int xl_map; TYPE_2__* xl_ptr; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_5__ {int xl_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct xl_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct xl_softc *VAR_6)
{
 struct xl_chain *VAR_7 = ((void*)0);
 struct ifnet *VAR_8 = VAR_6->xl_ifp;
 int VAR_9;

 FUNC_1(VAR_6);

 FUNC_2(VAR_6->xl_ldata.xl_tx_tag, VAR_6->xl_ldata.xl_tx_dmamap,
     VAR_0);
 VAR_9 = VAR_6->xl_cdata.xl_tx_cons;
 while (VAR_9 != VAR_6->xl_cdata.xl_tx_prod) {
  VAR_7 = &VAR_6->xl_cdata.xl_tx_chain[VAR_9];

  if (!(FUNC_5(VAR_7->xl_ptr->xl_status) &
        VAR_4))
   break;

  if (VAR_7->xl_mbuf != ((void*)0)) {
   FUNC_2(VAR_6->xl_mtag, VAR_7->xl_map,
       VAR_1);
   FUNC_3(VAR_6->xl_mtag, VAR_7->xl_map);
   FUNC_6(VAR_7->xl_mbuf);
   VAR_7->xl_mbuf = ((void*)0);
  }

  FUNC_4(VAR_8, VAR_2, 1);

  VAR_6->xl_cdata.xl_tx_cnt--;
  FUNC_0(VAR_9, VAR_5);
 }

 if (VAR_6->xl_cdata.xl_tx_cnt == 0)
  VAR_6->xl_wdog_timer = 0;
 VAR_6->xl_cdata.xl_tx_cons = VAR_9;

 if (VAR_7 != ((void*)0))
  VAR_8->if_drv_flags &= ~VAR_3;
}
