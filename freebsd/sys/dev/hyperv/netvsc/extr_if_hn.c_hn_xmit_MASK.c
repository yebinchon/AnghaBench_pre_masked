
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; } ;
struct hn_txdesc {int dummy; } ;
struct hn_tx_ring {int hn_suspended; int hn_oactive; scalar_t__ hn_agg_pktleft; int * hn_agg_txd; int hn_mbuf_br; int hn_no_txdescs; int hn_tx_lock; struct hn_softc* hn_sc; } ;
struct hn_softc {struct ifnet* hn_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ifnet*,int ) ;
 struct mbuf* FUNC_3 (struct ifnet*,int ) ;
 int FUNC_4 (struct ifnet*,int ,struct mbuf*) ;
 int FUNC_5 (struct ifnet*,struct hn_tx_ring*,struct hn_txdesc*,struct mbuf**) ;
 int FUNC_6 (struct ifnet*,struct hn_tx_ring*) ;
 struct hn_txdesc* FUNC_7 (struct hn_tx_ring*) ;
 int FUNC_8 (struct ifnet*,struct hn_tx_ring*,struct hn_txdesc*) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int
FUNC_10(struct hn_tx_ring *VAR_3, int VAR_4)
{
 struct hn_softc *VAR_5 = VAR_3->hn_sc;
 struct ifnet *VAR_6 = VAR_5->hn_ifp;
 struct mbuf *VAR_7;
 int VAR_8 = 0;

 FUNC_9(&VAR_3->hn_tx_lock, VAR_1);




 FUNC_0(VAR_3->hn_agg_txd == ((void*)0), ("lingering aggregating txdesc"));

 if (FUNC_1(VAR_3->hn_suspended))
  return (0);

 if ((VAR_6->if_drv_flags & VAR_0) == 0 || VAR_3->hn_oactive)
  return (0);

 while ((VAR_7 = FUNC_3(VAR_6, VAR_3->hn_mbuf_br)) != ((void*)0)) {
  struct hn_txdesc *VAR_9;
  int VAR_10;

  if (VAR_4 > 0 && VAR_7->m_pkthdr.len > VAR_4) {





   FUNC_4(VAR_6, VAR_3->hn_mbuf_br, VAR_7);
   VAR_8 = 1;
   break;
  }

  VAR_9 = FUNC_7(VAR_3);
  if (VAR_9 == ((void*)0)) {
   VAR_3->hn_no_txdescs++;
   FUNC_4(VAR_6, VAR_3->hn_mbuf_br, VAR_7);
   VAR_3->hn_oactive = 1;
   break;
  }

  VAR_10 = FUNC_5(VAR_6, VAR_3, VAR_9, &VAR_7);
  if (VAR_10) {

   FUNC_0(VAR_3->hn_agg_txd == ((void*)0),
       ("encap failed w/ pending aggregating txdesc"));
   FUNC_2(VAR_6, VAR_3->hn_mbuf_br);
   continue;
  }

  if (VAR_3->hn_agg_pktleft == 0) {
   if (VAR_3->hn_agg_txd != ((void*)0)) {
    FUNC_0(VAR_7 == ((void*)0),
        ("pending mbuf for aggregating txdesc"));
    VAR_10 = FUNC_6(VAR_6, VAR_3);
    if (FUNC_1(VAR_10)) {
     VAR_3->hn_oactive = 1;
     break;
    }
   } else {
    FUNC_0(VAR_7 != ((void*)0), ("mbuf was freed"));
    VAR_10 = FUNC_8(VAR_6, VAR_3, VAR_9);
    if (FUNC_1(VAR_10)) {

     FUNC_4(VAR_6, VAR_3->hn_mbuf_br,
         VAR_7);
     VAR_3->hn_oactive = 1;
     break;
    }
   }
  }
  FUNC_2(VAR_6, VAR_3->hn_mbuf_br);
 }


 if (VAR_3->hn_agg_txd != ((void*)0))
  FUNC_6(VAR_6, VAR_3);
 return (VAR_8);
}
