
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int csum_flags; scalar_t__ len; } ;
struct mbuf {struct mbuf* m_nextpkt; TYPE_1__ m_pkthdr; } ;
struct if_rxd_info {int iri_cidx; scalar_t__ iri_len; scalar_t__ iri_nfrags; int iri_frags; TYPE_4__* iri_ifp; int iri_qsidx; } ;
typedef int qidx_t ;
typedef TYPE_2__* iflib_rxq_t ;
typedef TYPE_3__* iflib_fl_t ;
typedef TYPE_4__* if_t ;
typedef TYPE_5__* if_softc_ctx_t ;
typedef TYPE_6__* if_shared_ctx_t ;
typedef TYPE_7__* if_ctx_t ;
struct TYPE_27__ {scalar_t__* isc_nrxd; } ;
struct TYPE_29__ {int (* isc_rxd_pkt_get ) (int ,struct if_rxd_info*) ;int ifc_flags; int ifc_softc; TYPE_4__* ifc_ifp; TYPE_5__ ifc_softc_ctx; TYPE_6__* ifc_sctx; } ;
struct TYPE_28__ {int isc_flags; int isc_nfl; } ;
struct TYPE_26__ {int (* if_input ) (TYPE_4__*,struct mbuf*) ;int if_vnet; } ;
struct TYPE_25__ {int ifl_cidx; } ;
struct TYPE_24__ {int ifr_cq_cidx; int ifr_lc; TYPE_3__* ifr_fl; int ifr_frags; int ifr_id; TYPE_7__* ifr_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*,TYPE_3__*,int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,int ,int) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (struct mbuf*,int,int) ;
 struct mbuf* FUNC_14 (struct mbuf*) ;
 int FUNC_15 (int *,int*,int*) ;
 int FUNC_16 (TYPE_7__*,TYPE_2__*,int,int) ;
 struct mbuf* FUNC_17 (TYPE_2__*,struct if_rxd_info*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_18 (struct if_rxd_info*) ;
 int FUNC_19 (int ,struct if_rxd_info*) ;
 int FUNC_20 (TYPE_4__*,struct mbuf*) ;
 int FUNC_21 (TYPE_4__*,struct mbuf*) ;
 int FUNC_22 (TYPE_4__*,struct mbuf*) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int *,struct mbuf*,int ) ;

__attribute__((used)) static bool
FUNC_25(iflib_rxq_t VAR_10, qidx_t VAR_11)
{
 if_t VAR_12;
 if_ctx_t VAR_13 = VAR_10->ifr_ctx;
 if_shared_ctx_t VAR_14 = VAR_13->ifc_sctx;
 if_softc_ctx_t VAR_15 = &VAR_13->ifc_softc_ctx;
 int VAR_16, VAR_17;
 qidx_t *VAR_18;
 struct if_rxd_info VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23;
 iflib_fl_t VAR_24;
 int VAR_25;
 bool VAR_26, VAR_27, VAR_28;





 struct mbuf *VAR_29, *VAR_30, *VAR_31, *VAR_32;

 VAR_28 = VAR_26 = VAR_27 = 0;
 VAR_12 = VAR_13->ifc_ifp;
 VAR_30 = VAR_31 = ((void*)0);
 FUNC_5(VAR_11 > 0);
 VAR_23 = VAR_22 = 0;
 if (VAR_14->isc_flags & VAR_6)
  VAR_18 = &VAR_10->ifr_cq_cidx;
 else
  VAR_18 = &VAR_10->ifr_fl[0].ifl_cidx;
 if ((VAR_16 = FUNC_16(VAR_13, VAR_10, *VAR_18, VAR_11)) == 0) {
  for (VAR_17 = 0, VAR_24 = &VAR_10->ifr_fl[0]; VAR_17 < VAR_14->isc_nfl; VAR_17++, VAR_24++)
   FUNC_8(VAR_13, VAR_24, VAR_11 + 8);
  FUNC_3(VAR_9);
  return (0);
 }


 FUNC_2(VAR_12->if_vnet);
 for (VAR_21 = VAR_11; VAR_21 > 0 && VAR_16 > 0;) {
  if (FUNC_9(!FUNC_0(VAR_13))) {
   FUNC_3(VAR_7);
   break;
  }



  FUNC_18(&VAR_19);
  VAR_19.iri_qsidx = VAR_10->ifr_id;
  VAR_19.iri_cidx = *VAR_18;
  VAR_19.iri_ifp = VAR_12;
  VAR_19.iri_frags = VAR_10->ifr_frags;
  VAR_20 = VAR_13->isc_rxd_pkt_get(VAR_13->ifc_softc, &VAR_19);

  if (VAR_20)
   goto err;
  VAR_23 += 1;
  VAR_22 += VAR_19.iri_len;
  if (VAR_14->isc_flags & VAR_6) {
   *VAR_18 = VAR_19.iri_cidx;


   while (VAR_10->ifr_cq_cidx >= VAR_15->isc_nrxd[0])
    VAR_10->ifr_cq_cidx -= VAR_15->isc_nrxd[0];

   if (FUNC_9(VAR_19.iri_nfrags == 0))
    continue;
  }
  FUNC_5(VAR_19.iri_nfrags != 0);
  FUNC_5(VAR_19.iri_len != 0);


  VAR_29 = FUNC_17(VAR_10, &VAR_19);
  VAR_16--;
  VAR_21--;
  if (VAR_16 == 0 && VAR_21)
   VAR_16 = FUNC_16(VAR_13, VAR_10, *VAR_18, VAR_21);

  if (FUNC_9(VAR_29 == ((void*)0)))
   continue;


  if (VAR_30 == ((void*)0))
   VAR_30 = VAR_31 = VAR_29;
  else {
   VAR_31->m_nextpkt = VAR_29;
   VAR_31 = VAR_29;
  }
 }
 FUNC_1();

 for (VAR_17 = 0, VAR_24 = &VAR_10->ifr_fl[0]; VAR_17 < VAR_14->isc_nfl; VAR_17++, VAR_24++)
  FUNC_8(VAR_13, VAR_24, VAR_11 + 8);

 VAR_25 = (FUNC_10(VAR_12) & VAR_2);
 if (VAR_25)
  FUNC_15(&VAR_10->ifr_lc, &VAR_26, &VAR_27);
 VAR_31 = VAR_32 = ((void*)0);
 while (VAR_30 != ((void*)0)) {
  VAR_29 = VAR_30;
  VAR_30 = VAR_30->m_nextpkt;
  VAR_29->m_nextpkt = ((void*)0);

  if (!FUNC_4(VAR_29) && (VAR_29 = FUNC_14(VAR_29)) == ((void*)0))
   continue;

  VAR_22 += VAR_29->m_pkthdr.len;
  VAR_23++;
  if (VAR_28) {
   VAR_12->if_input(VAR_12, VAR_29);
   FUNC_3(VAR_8);
   continue;
  }

  if (VAR_32 == ((void*)0))
   VAR_32 = VAR_29;
  if (VAR_31 != ((void*)0))
   VAR_31->m_nextpkt = VAR_29;
  VAR_31 = VAR_29;
 }
 if (VAR_32 != ((void*)0)) {
  VAR_12->if_input(VAR_12, VAR_32);
  FUNC_3(VAR_8);
 }

 FUNC_11(VAR_12, VAR_3, VAR_22);
 FUNC_11(VAR_12, VAR_4, VAR_23);







 if (VAR_16)
  return 1;
 return (FUNC_16(VAR_13, VAR_10, *VAR_18, 1));
err:
 FUNC_6(VAR_13);
 VAR_13->ifc_flags |= VAR_5;
 FUNC_12(VAR_13);
 FUNC_7(VAR_13);
 return (0);
}
