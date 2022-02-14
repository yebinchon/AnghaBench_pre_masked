
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct rm_priotracker {int dummy; } ;
struct TYPE_3__ {int len; int csum_flags; int flowid; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_bpf; struct hn_softc* if_softc; } ;
struct hn_tx_ring {int hn_tx_task; int hn_tx_taskq; int hn_tx_lock; int hn_direct_tx_size; scalar_t__ hn_sched_tx; scalar_t__ hn_oactive; int hn_mbuf_br; } ;
struct hn_softc {int hn_xvf_flags; int hn_tx_ring_inuse; struct hn_tx_ring* hn_tx_ring; int hn_vf_lock; TYPE_2__* hn_vf_ifp; } ;
struct TYPE_4__ {int (* if_transmit ) (TYPE_2__*,struct mbuf*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (struct mbuf*) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ifnet*,int ,struct mbuf*) ;
 struct mbuf* FUNC_6 (struct mbuf*,int*) ;
 struct mbuf* FUNC_7 (struct mbuf*) ;
 struct mbuf* FUNC_8 (struct mbuf*) ;
 int FUNC_9 (struct hn_tx_ring*,int ) ;
 int FUNC_10 (struct ifnet*,int ,int) ;
 struct mbuf* FUNC_11 (struct mbuf*,int ) ;
 int FUNC_12 (struct mbuf*) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,struct rm_priotracker*) ;
 int FUNC_16 (int *,struct rm_priotracker*) ;
 scalar_t__ FUNC_17 (int,scalar_t__,int*) ;
 int FUNC_18 (TYPE_2__*,struct mbuf*) ;
 int FUNC_19 (int ,int *) ;

__attribute__((used)) static int
FUNC_20(struct ifnet *VAR_17, struct mbuf *VAR_18)
{
 struct hn_softc *VAR_19 = VAR_17->if_softc;
 struct hn_tx_ring *VAR_20;
 int VAR_21, VAR_22 = 0;

 if (VAR_19->hn_xvf_flags & VAR_8) {
  struct rm_priotracker VAR_23;

  FUNC_15(&VAR_19->hn_vf_lock, &VAR_23);
  if (FUNC_3(VAR_19->hn_xvf_flags & VAR_8)) {
   struct mbuf *VAR_24 = ((void*)0);
   int VAR_25, VAR_26;

   VAR_25 = VAR_18->m_pkthdr.len;
   VAR_26 = (VAR_18->m_flags & VAR_15) != 0;

   if (VAR_19->hn_xvf_flags & VAR_7) {
    if (FUNC_4(VAR_17->if_bpf)) {
     VAR_24 = FUNC_11(VAR_18, VAR_16);
     if (VAR_24 == ((void*)0)) {




      FUNC_0(VAR_17, VAR_18);
     }
    }
   } else {
    FUNC_0(VAR_17, VAR_18);
   }

   VAR_21 = VAR_19->hn_vf_ifp->if_transmit(VAR_19->hn_vf_ifp, VAR_18);
   FUNC_16(&VAR_19->hn_vf_lock, &VAR_23);

   if (VAR_24 != ((void*)0)) {
    if (!VAR_21)
     FUNC_0(VAR_17, VAR_24);
    FUNC_12(VAR_24);
   }

   if (VAR_21 == VAR_6) {
    FUNC_10(VAR_17, VAR_13, 1);
   } else if (VAR_21) {
    FUNC_10(VAR_17, VAR_10, 1);
   } else {
    FUNC_10(VAR_17, VAR_12, 1);
    FUNC_10(VAR_17, VAR_9, VAR_25);
    if (VAR_26) {
     FUNC_10(VAR_17, VAR_11,
         VAR_26);
    }
   }
   return (VAR_21);
  }
  FUNC_16(&VAR_19->hn_vf_lock, &VAR_23);
 }
 if (FUNC_1(VAR_18) != VAR_14) {
  {
   const int VAR_27 = 0;

   if (VAR_27)
    VAR_22 = 0;
   else
    VAR_22 = VAR_18->m_pkthdr.flowid % VAR_19->hn_tx_ring_inuse;
  }
 }
 VAR_20 = &VAR_19->hn_tx_ring[VAR_22];

 VAR_21 = FUNC_5(VAR_17, VAR_20->hn_mbuf_br, VAR_18);
 if (VAR_21) {
  FUNC_10(VAR_17, VAR_13, 1);
  return VAR_21;
 }

 if (VAR_20->hn_oactive)
  return 0;

 if (VAR_20->hn_sched_tx)
  goto do_sched;

 if (FUNC_13(&VAR_20->hn_tx_lock)) {
  int VAR_28;

  VAR_28 = FUNC_9(VAR_20, VAR_20->hn_direct_tx_size);
  FUNC_14(&VAR_20->hn_tx_lock);
  if (!VAR_28)
   return 0;
 }
do_sched:
 FUNC_19(VAR_20->hn_tx_taskq, &VAR_20->hn_tx_task);
 return 0;
}
