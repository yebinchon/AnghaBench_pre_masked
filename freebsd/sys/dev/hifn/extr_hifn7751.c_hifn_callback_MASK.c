
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_5__ {int len; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; struct mbuf* m_next; } ;
struct hifn_softc {int sc_dstk; int sc_dstu; scalar_t__ sc_dmamap; int sc_dmat; struct hifn_dma* sc_dma; } ;
struct hifn_dma {TYPE_2__* dstr; int * slop; } ;
struct hifn_command {scalar_t__ src_map; scalar_t__ dst_map; int src_mapsize; scalar_t__ sloplen; size_t slopidx; int base_masks; TYPE_3__* session; scalar_t__ dst_mapsize; struct mbuf* src_m; struct mbuf* dst_m; struct cryptop* crp; } ;
struct cryptop {int crp_flags; int * crp_buf; struct cryptodesc* crp_desc; } ;
struct cryptodesc {scalar_t__ crd_alg; scalar_t__ crd_inject; struct cryptodesc* crd_next; scalar_t__ crd_len; scalar_t__ crd_skip; } ;
typedef int * caddr_t ;
struct TYPE_8__ {int hst_obytes; } ;
struct TYPE_7__ {int hs_mlen; int hs_iv; } ;
struct TYPE_6__ {int l; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,int *,scalar_t__,int,int *) ;
 int FUNC_4 (int,int *,scalar_t__,int,int ) ;
 int FUNC_5 (struct cryptop*) ;
 int FUNC_6 (struct hifn_command*,int ) ;
 TYPE_4__ VAR_19 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_9(struct hifn_softc *VAR_20, struct hifn_command *VAR_21, u_int8_t *VAR_22)
{
 struct hifn_dma *VAR_23 = VAR_20->sc_dma;
 struct cryptop *VAR_24 = VAR_21->crp;
 struct cryptodesc *VAR_25;
 struct mbuf *VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;

 if (VAR_21->src_map == VAR_21->dst_map) {
  FUNC_1(VAR_20->sc_dmat, VAR_21->src_map,
      VAR_1 | VAR_0);
 } else {
  FUNC_1(VAR_20->sc_dmat, VAR_21->src_map,
      VAR_1);
  FUNC_1(VAR_20->sc_dmat, VAR_21->dst_map,
      VAR_0);
 }

 if (VAR_24->crp_flags & VAR_7) {
  if (VAR_21->src_m != VAR_21->dst_m) {
   VAR_24->crp_buf = (caddr_t)VAR_21->dst_m;
   VAR_27 = VAR_21->src_mapsize;
   for (VAR_26 = VAR_21->dst_m; VAR_26 != ((void*)0); VAR_26 = VAR_26->m_next) {
    if (VAR_27 < VAR_26->m_len) {
     VAR_26->m_len = VAR_27;
     VAR_27 = 0;
    } else
     VAR_27 -= VAR_26->m_len;
   }
   VAR_21->dst_m->m_pkthdr.len = VAR_21->src_m->m_pkthdr.len;
   FUNC_8(VAR_21->src_m);
  }
 }

 if (VAR_21->sloplen != 0) {
  FUNC_3(VAR_24->crp_flags, VAR_24->crp_buf,
      VAR_21->src_mapsize - VAR_21->sloplen, VAR_21->sloplen,
      (caddr_t)&VAR_23->slop[VAR_21->slopidx]);
 }

 VAR_28 = VAR_20->sc_dstk; VAR_29 = VAR_20->sc_dstu;
 while (VAR_29 != 0) {
  if (VAR_28 == VAR_15)
   VAR_28 = 0;
  FUNC_1(VAR_20->sc_dmat, VAR_20->sc_dmamap,
      VAR_0 | VAR_1);
  if (VAR_23->dstr[VAR_28].l & FUNC_7(VAR_16)) {
   FUNC_1(VAR_20->sc_dmat, VAR_20->sc_dmamap,
       VAR_2 | VAR_3);
   break;
  }
  VAR_28++, VAR_29--;
 }
 VAR_20->sc_dstk = VAR_28; VAR_20->sc_dstu = VAR_29;

 VAR_19.hst_obytes += VAR_21->dst_mapsize;

 if ((VAR_21->base_masks & (VAR_13 | VAR_14)) ==
     VAR_13) {
  for (VAR_25 = VAR_24->crp_desc; VAR_25; VAR_25 = VAR_25->crd_next) {
   if (VAR_25->crd_alg != VAR_6 &&
       VAR_25->crd_alg != VAR_4 &&
       VAR_25->crd_alg != VAR_5)
    continue;
   VAR_30 = ((VAR_25->crd_alg == VAR_5) ?
    VAR_12 : VAR_17);
   FUNC_4(VAR_24->crp_flags, VAR_24->crp_buf,
       VAR_25->crd_skip + VAR_25->crd_len - VAR_30, VAR_30,
       VAR_21->session->hs_iv);
   break;
  }
 }

 if (VAR_22 != ((void*)0)) {
  for (VAR_25 = VAR_24->crp_desc; VAR_25; VAR_25 = VAR_25->crd_next) {
                        int VAR_31;

   if (VAR_25->crd_alg != VAR_8 &&
       VAR_25->crd_alg != VAR_10 &&
       VAR_25->crd_alg != VAR_9 &&
       VAR_25->crd_alg != VAR_11) {
    continue;
   }
   VAR_31 = VAR_21->session->hs_mlen;
   FUNC_3(VAR_24->crp_flags, VAR_24->crp_buf,
       VAR_25->crd_inject, VAR_31, VAR_22);
   break;
  }
 }

 if (VAR_21->src_map != VAR_21->dst_map) {
  FUNC_2(VAR_20->sc_dmat, VAR_21->dst_map);
  FUNC_0(VAR_20->sc_dmat, VAR_21->dst_map);
 }
 FUNC_2(VAR_20->sc_dmat, VAR_21->src_map);
 FUNC_0(VAR_20->sc_dmat, VAR_21->src_map);
 FUNC_6(VAR_21, VAR_18);
 FUNC_5(VAR_24);
}
