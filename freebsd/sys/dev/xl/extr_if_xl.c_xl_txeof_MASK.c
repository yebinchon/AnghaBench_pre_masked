
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct xl_chain* xl_tx_head; int * xl_tx_tail; struct xl_chain* xl_tx_free; } ;
struct xl_softc {TYPE_1__ xl_cdata; scalar_t__ xl_wdog_timer; int xl_mtag; struct ifnet* xl_ifp; } ;
struct xl_chain {int xl_phys; struct xl_chain* xl_next; int * xl_mbuf; int xl_map; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct xl_softc*,int ) ;
 int FUNC_1 (struct xl_softc*,int ,int ) ;
 int FUNC_2 (struct xl_softc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct xl_softc*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct xl_softc *VAR_8)
{
 struct xl_chain *VAR_9;
 struct ifnet *VAR_10 = VAR_8->xl_ifp;

 FUNC_3(VAR_8);
 while (VAR_8->xl_cdata.xl_tx_head != ((void*)0)) {
  VAR_9 = VAR_8->xl_cdata.xl_tx_head;

  if (FUNC_0(VAR_8, VAR_7))
   break;

  VAR_8->xl_cdata.xl_tx_head = VAR_9->xl_next;
  FUNC_4(VAR_8->xl_mtag, VAR_9->xl_map,
      VAR_0);
  FUNC_5(VAR_8->xl_mtag, VAR_9->xl_map);
  FUNC_7(VAR_9->xl_mbuf);
  VAR_9->xl_mbuf = ((void*)0);
  FUNC_6(VAR_10, VAR_1, 1);
  VAR_10->if_drv_flags &= ~VAR_2;

  VAR_9->xl_next = VAR_8->xl_cdata.xl_tx_free;
  VAR_8->xl_cdata.xl_tx_free = VAR_9;
 }

 if (VAR_8->xl_cdata.xl_tx_head == ((void*)0)) {
  VAR_8->xl_wdog_timer = 0;
  VAR_8->xl_cdata.xl_tx_tail = ((void*)0);
 } else {
  if (FUNC_0(VAR_8, VAR_5) & VAR_6 ||
   !FUNC_0(VAR_8, VAR_7)) {
   FUNC_2(VAR_8, VAR_7,
    VAR_8->xl_cdata.xl_tx_head->xl_phys);
   FUNC_1(VAR_8, VAR_4, VAR_3);
  }
 }
}
