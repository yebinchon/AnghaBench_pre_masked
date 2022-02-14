
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_stops; } ;
struct oce_wq {int queue_index; TYPE_1__ tx_stats; struct buf_ring* br; } ;
struct TYPE_4__ {int len; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; int if_softc; } ;
struct buf_ring {int dummy; } ;
typedef int POCE_SOFTC ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ifnet*,struct buf_ring*) ;
 int FUNC_2 (struct ifnet*,struct buf_ring*,struct mbuf*) ;
 struct mbuf* FUNC_3 (struct ifnet*,struct buf_ring*) ;
 int FUNC_4 (struct ifnet*,struct buf_ring*,struct mbuf*) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 scalar_t__ FUNC_6 (int ,struct mbuf**,int) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_5, struct mbuf *VAR_6, struct oce_wq *VAR_7)
{
 POCE_SOFTC VAR_8 = VAR_5->if_softc;
 int VAR_9 = 0, VAR_10 = 0;
 struct mbuf *VAR_11 = ((void*)0);
 struct buf_ring *VAR_12 = ((void*)0);

 VAR_12 = VAR_7->br;
 VAR_10 = VAR_7->queue_index;

 if ((VAR_5->if_drv_flags & (VAR_3 | VAR_2)) !=
  VAR_3) {
  if (VAR_6 != ((void*)0))
   VAR_9 = FUNC_2(VAR_5, VAR_12, VAR_6);
  return VAR_9;
 }

 if (VAR_6 != ((void*)0)) {
  if ((VAR_9 = FUNC_2(VAR_5, VAR_12, VAR_6)) != 0)
   return VAR_9;
 }
 while ((VAR_11 = FUNC_3(VAR_5, VAR_12)) != ((void*)0)) {
  if (FUNC_6(VAR_8, &VAR_11, VAR_10)) {
   if (VAR_11 == ((void*)0)) {
    FUNC_1(VAR_5, VAR_12);
   } else {
    FUNC_4(VAR_5, VAR_12, VAR_11);
    VAR_7->tx_stats.tx_stops ++;
    VAR_5->if_drv_flags |= VAR_2;
   }
   break;
  }
  FUNC_1(VAR_5, VAR_12);
  FUNC_5(VAR_5, VAR_0, VAR_11->m_pkthdr.len);
  if (VAR_11->m_flags & VAR_4)
   FUNC_5(VAR_5, VAR_1, 1);
  FUNC_0(VAR_5, VAR_11);
 }

 return 0;
}
