
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;
struct hn_txdesc {int dummy; } ;
struct hn_tx_ring {int hn_suspended; scalar_t__ hn_agg_pktleft; int * hn_agg_txd; int hn_no_txdescs; int hn_tx_lock; struct hn_softc* hn_sc; } ;
struct hn_softc {struct hn_tx_ring* hn_tx_ring; struct ifnet* hn_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct mbuf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int,char*) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (struct ifnet*,struct hn_tx_ring*,struct hn_txdesc*,struct mbuf**) ;
 int FUNC_7 (struct ifnet*,struct hn_tx_ring*) ;
 struct mbuf* FUNC_8 (struct mbuf*) ;
 struct mbuf* FUNC_9 (struct mbuf*) ;
 struct hn_txdesc* FUNC_10 (struct hn_tx_ring*) ;
 int FUNC_11 (struct ifnet*,struct hn_tx_ring*,struct hn_txdesc*) ;
 int VAR_9 ;
 int FUNC_12 (struct ifnet*,int ,int) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static int
FUNC_14(struct hn_tx_ring *VAR_10, int VAR_11)
{
 struct hn_softc *VAR_12 = VAR_10->hn_sc;
 struct ifnet *VAR_13 = VAR_12->hn_ifp;
 int VAR_14 = 0;

 FUNC_3(VAR_9,
     ("hn_start_locked is called, when if_start is disabled"));
 FUNC_3(VAR_10 == &VAR_12->hn_tx_ring[0], ("not the first TX ring"));
 FUNC_13(&VAR_10->hn_tx_lock, VAR_8);
 FUNC_3(VAR_10->hn_agg_txd == ((void*)0), ("lingering aggregating txdesc"));

 if (FUNC_4(VAR_10->hn_suspended))
  return (0);

 if ((VAR_13->if_drv_flags & (VAR_7 | VAR_6)) !=
     VAR_7)
  return (0);

 while (!FUNC_1(&VAR_13->if_snd)) {
  struct hn_txdesc *VAR_15;
  struct mbuf *VAR_16;
  int VAR_17;

  FUNC_0(&VAR_13->if_snd, VAR_16);
  if (VAR_16 == ((void*)0))
   break;

  if (VAR_11 > 0 && VAR_16->m_pkthdr.len > VAR_11) {





   FUNC_2(&VAR_13->if_snd, VAR_16);
   VAR_14 = 1;
   break;
  }
  VAR_15 = FUNC_10(VAR_10);
  if (VAR_15 == ((void*)0)) {
   VAR_10->hn_no_txdescs++;
   FUNC_2(&VAR_13->if_snd, VAR_16);
   FUNC_5(&VAR_13->if_drv_flags, VAR_6);
   break;
  }

  VAR_17 = FUNC_6(VAR_13, VAR_10, VAR_15, &VAR_16);
  if (VAR_17) {

   FUNC_3(VAR_10->hn_agg_txd == ((void*)0),
       ("encap failed w/ pending aggregating txdesc"));
   continue;
  }

  if (VAR_10->hn_agg_pktleft == 0) {
   if (VAR_10->hn_agg_txd != ((void*)0)) {
    FUNC_3(VAR_16 == ((void*)0),
        ("pending mbuf for aggregating txdesc"));
    VAR_17 = FUNC_7(VAR_13, VAR_10);
    if (FUNC_4(VAR_17)) {
     FUNC_5(&VAR_13->if_drv_flags,
         VAR_6);
     break;
    }
   } else {
    FUNC_3(VAR_16 != ((void*)0), ("mbuf was freed"));
    VAR_17 = FUNC_11(VAR_13, VAR_10, VAR_15);
    if (FUNC_4(VAR_17)) {

     FUNC_2(&VAR_13->if_snd, VAR_16);
     FUNC_5(&VAR_13->if_drv_flags,
         VAR_6);
     break;
    }
   }
  }
 }


 if (VAR_10->hn_agg_txd != ((void*)0))
  FUNC_7(VAR_13, VAR_10);
 return (VAR_14);
}
