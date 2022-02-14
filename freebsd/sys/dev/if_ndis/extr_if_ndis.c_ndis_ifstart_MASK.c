
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct ndis_softc {size_t ndis_txidx; scalar_t__ ndis_txpending; int ndis_tx_timer; TYPE_6__* ndis_chars; int ndis_80211; int * ndis_tmaps; int ndis_ttag; scalar_t__ ndis_sc; TYPE_8__** ndis_txarray; int ndis_txpool; int ndis_link; } ;
struct TYPE_15__ {int csum_flags; } ;
struct mbuf {TYPE_3__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; int if_capenable; int if_snd; struct ndis_softc* if_softc; } ;
struct TYPE_16__ {int ntc_txflags; } ;
struct TYPE_19__ {TYPE_4__ u; } ;
typedef TYPE_7__ ndis_tcpip_csum ;
struct TYPE_17__ {int npp_flags; } ;
struct TYPE_14__ {int ** npe_info; } ;
struct TYPE_13__ {int npo_status; } ;
struct TYPE_20__ {size_t np_txidx; TYPE_5__ np_private; TYPE_2__ np_ext; int np_sclist; TYPE_1__ np_oob; struct mbuf* np_m0; } ;
typedef TYPE_8__ ndis_packet ;
struct TYPE_18__ {int * nmc_sendmulti_func; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (struct ndis_softc*) ;
 int FUNC_4 (struct ndis_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct ndis_softc*) ;
 int FUNC_6 (int*,TYPE_8__**,int ) ;
 int FUNC_7 (int ,int ,struct mbuf*,int ,int *,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_9 (struct mbuf*,TYPE_8__**) ;
 size_t VAR_15 ;
 int FUNC_10 (struct ndis_softc*,TYPE_8__*) ;
 int FUNC_11 (struct ndis_softc*,TYPE_8__**,int) ;
 size_t VAR_16 ;

__attribute__((used)) static void
FUNC_12(struct ifnet *VAR_17)
{
 struct ndis_softc *VAR_18;
 struct mbuf *VAR_19 = ((void*)0);
 ndis_packet **VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
 ndis_tcpip_csum *VAR_22;
 int VAR_23 = 0, VAR_24;

 VAR_18 = VAR_17->if_softc;

 FUNC_4(VAR_18);
 if (!VAR_18->ndis_link || VAR_17->if_drv_flags & VAR_6) {
  FUNC_5(VAR_18);
  return;
 }

 VAR_20 = &VAR_18->ndis_txarray[VAR_18->ndis_txidx];

 while(VAR_18->ndis_txpending) {
  FUNC_1(&VAR_17->if_snd, VAR_19);
  if (VAR_19 == ((void*)0))
   break;

  FUNC_6(&VAR_24,
      &VAR_18->ndis_txarray[VAR_18->ndis_txidx], VAR_18->ndis_txpool);

  if (VAR_24 != VAR_9)
   break;

  if (FUNC_9(VAR_19, &VAR_18->ndis_txarray[VAR_18->ndis_txidx])) {
   FUNC_2(&VAR_17->if_snd, VAR_19);
   FUNC_5(VAR_18);
   return;
  }






  VAR_21 = VAR_18->ndis_txarray[VAR_18->ndis_txidx];
  VAR_21->np_txidx = VAR_18->ndis_txidx;
  VAR_21->np_m0 = VAR_19;
  VAR_21->np_oob.npo_status = VAR_8;




  if (VAR_18->ndis_sc) {
   FUNC_7(VAR_18->ndis_ttag,
       VAR_18->ndis_tmaps[VAR_18->ndis_txidx], VAR_19,
       VAR_14, &VAR_21->np_sclist, VAR_1);
   FUNC_8(VAR_18->ndis_ttag,
       VAR_18->ndis_tmaps[VAR_18->ndis_txidx],
       VAR_0);
   VAR_21->np_ext.npe_info[VAR_15] = &VAR_21->np_sclist;
  }



  if (VAR_17->if_capenable & VAR_5 &&
      VAR_19->m_pkthdr.csum_flags) {
   VAR_22 = (ndis_tcpip_csum *)
    &VAR_21->np_ext.npe_info[VAR_16];
   VAR_22->u.ntc_txflags = VAR_11;
   if (VAR_19->m_pkthdr.csum_flags & VAR_2)
    VAR_22->u.ntc_txflags |= VAR_10;
   if (VAR_19->m_pkthdr.csum_flags & VAR_3)
    VAR_22->u.ntc_txflags |= VAR_12;
   if (VAR_19->m_pkthdr.csum_flags & VAR_4)
    VAR_22->u.ntc_txflags |= VAR_13;
   VAR_21->np_private.npp_flags = VAR_7;
  }

  FUNC_3(VAR_18);
  VAR_18->ndis_txpending--;

  VAR_23++;





  if (!VAR_18->ndis_80211)
   FUNC_0(VAR_17, VAR_19);
  if (VAR_18->ndis_txidx == 0)
   break;
 }

 if (VAR_23 == 0) {
  FUNC_5(VAR_18);
  return;
 }

 if (VAR_18->ndis_txpending == 0)
  VAR_17->if_drv_flags |= VAR_6;




 VAR_18->ndis_tx_timer = 5;

 FUNC_5(VAR_18);







 if (VAR_18->ndis_chars->nmc_sendmulti_func != ((void*)0))
  FUNC_11(VAR_18, VAR_20, VAR_23);
 else
  FUNC_10(VAR_18, VAR_21);

 return;
}
