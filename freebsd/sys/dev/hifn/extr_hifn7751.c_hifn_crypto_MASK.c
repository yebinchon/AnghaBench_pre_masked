
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_5__ {int len; } ;
struct mbuf {int m_flags; int m_len; struct mbuf* m_next; TYPE_1__ m_pkthdr; } ;
struct hifn_softc {int sc_cmdu; size_t sc_resu; scalar_t__ sc_srcu; scalar_t__ sc_dstu; int sc_cmdi; int sc_dmaier; size_t sc_resi; scalar_t__ sc_curbatch; int sc_c_busy; int sc_s_busy; int sc_r_busy; int sc_d_busy; int sc_active; int sc_dmat; int sc_dev; struct hifn_command** sc_hifn_commands; struct hifn_dma* sc_dma; } ;
struct hifn_dma {TYPE_3__* resr; TYPE_2__* cmdr; int * command_bufs; } ;
struct hifn_command {int sloplen; int src_mapsize; scalar_t__ src_nsegs; scalar_t__ dst_nsegs; int slopidx; int * src_map; struct mbuf* dst_m; struct mbuf* src_m; int * dst_map; int dst; int dst_io; int src; int src_io; } ;
struct cryptop {int crp_flags; } ;
struct TYPE_8__ {int hst_ibytes; scalar_t__ hst_maxbatch; int hst_totbatch; int hst_ipackets; int hst_nomem_sd; int hst_nomem_load; int hst_nomem_map; int hst_nomem_mcl; int hst_nomem_mbuf; int hst_unaligned; int hst_nomem_cr; } ;
struct TYPE_7__ {void* l; } ;
struct TYPE_6__ {void* l; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct hifn_softc*,int,int) ;
 int FUNC_1 (struct hifn_softc*,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (struct hifn_softc*) ;
 int VAR_24 ;
 int FUNC_3 (struct hifn_softc*,int,int) ;
 int FUNC_4 (struct hifn_softc*,int,int) ;
 int FUNC_5 (struct hifn_softc*) ;
 int FUNC_6 (int,char*) ;
 int VAR_25 ;
 int FUNC_7 (struct mbuf*,int ) ;
 int FUNC_8 (struct mbuf*,int ,int ) ;
 int FUNC_9 (struct mbuf*,int ,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_10 (struct hifn_softc*,int ) ;
 int FUNC_11 (struct hifn_softc*,int ,int) ;
 scalar_t__ FUNC_12 (int ,int ,int **) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int *,struct mbuf*,int ,int *,int ) ;
 scalar_t__ FUNC_15 (int ,int *,int ,int ,int *,int ) ;
 int FUNC_16 (int ,int *,int) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,char*,int,int,...) ;
 scalar_t__ VAR_32 ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (struct hifn_softc*,struct hifn_command*) ;
 int FUNC_21 (struct hifn_softc*,struct hifn_command*) ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int FUNC_22 (struct hifn_command*,int ) ;
 TYPE_4__ VAR_35 ;
 void* FUNC_23 (int) ;
 int FUNC_24 (struct mbuf*,struct mbuf*,int ) ;
 int FUNC_25 (struct mbuf*) ;
 int FUNC_26 (struct mbuf*) ;
 int FUNC_27 (char*) ;

__attribute__((used)) static int
FUNC_28(
 struct hifn_softc *VAR_36,
 struct hifn_command *VAR_37,
 struct cryptop *VAR_38,
 int VAR_39)
{
 struct hifn_dma *VAR_40 = VAR_36->sc_dma;
 u_int32_t VAR_41, VAR_42;
 int VAR_43, VAR_44, VAR_45 = 0;






 FUNC_2(VAR_36);
 if ((VAR_36->sc_cmdu + 1) > VAR_16 ||
     (VAR_36->sc_resu + 1) > VAR_21) {







  VAR_35.hst_nomem_cr++;
  FUNC_5(VAR_36);
  return (VAR_8);
 }

 if (FUNC_12(VAR_36->sc_dmat, VAR_2, &VAR_37->src_map)) {
  VAR_35.hst_nomem_map++;
  FUNC_5(VAR_36);
  return (VAR_7);
 }

 if (VAR_38->crp_flags & VAR_3) {
  if (FUNC_14(VAR_36->sc_dmat, VAR_37->src_map,
      VAR_37->src_m, VAR_34, &VAR_37->src, VAR_2)) {
   VAR_35.hst_nomem_load++;
   VAR_45 = VAR_7;
   goto err_srcmap1;
  }
 } else if (VAR_38->crp_flags & VAR_4) {
  if (FUNC_15(VAR_36->sc_dmat, VAR_37->src_map,
      VAR_37->src_io, VAR_34, &VAR_37->src, VAR_2)) {
   VAR_35.hst_nomem_load++;
   VAR_45 = VAR_7;
   goto err_srcmap1;
  }
 } else {
  VAR_45 = VAR_6;
  goto err_srcmap1;
 }

 if (FUNC_19(&VAR_37->src)) {
  VAR_37->sloplen = VAR_37->src_mapsize & 3;
  VAR_37->dst = VAR_37->src;
 } else {
  if (VAR_38->crp_flags & VAR_4) {
   VAR_45 = VAR_6;
   goto err_srcmap;
  } else if (VAR_38->crp_flags & VAR_3) {
   int VAR_46, VAR_47;
   struct mbuf *VAR_48, *VAR_49, *VAR_50;

   FUNC_6(VAR_37->dst_m == VAR_37->src_m,
    ("hifn_crypto: dst_m initialized improperly"));
   VAR_35.hst_unaligned++;
   VAR_46 = VAR_37->src_mapsize;
   if (VAR_37->src_m->m_flags & VAR_31) {
    VAR_47 = VAR_26;
    FUNC_9(VAR_49, VAR_30, VAR_29);
    if (VAR_49 && !FUNC_24(VAR_49, VAR_37->src_m, VAR_30)) {
     FUNC_25(VAR_49);
     VAR_49 = ((void*)0);
    }
   } else {
    VAR_47 = VAR_28;
    FUNC_8(VAR_49, VAR_30, VAR_29);
   }
   if (VAR_49 == ((void*)0)) {
    VAR_35.hst_nomem_mbuf++;
    VAR_45 = VAR_36->sc_cmdu ? VAR_8 : VAR_7;
    goto err_srcmap;
   }
   if (VAR_46 >= VAR_27) {
    if (!(FUNC_7(VAR_49, VAR_30))) {
     VAR_35.hst_nomem_mcl++;
     VAR_45 = VAR_36->sc_cmdu ? VAR_8 : VAR_7;
     FUNC_26(VAR_49);
     goto err_srcmap;
    }
    VAR_47 = VAR_25;
   }
   VAR_46 -= VAR_47;
   VAR_49->m_pkthdr.len = VAR_49->m_len = VAR_47;
   VAR_50 = VAR_49;

   while (VAR_46 > 0) {
    FUNC_8(VAR_48, VAR_30, VAR_29);
    if (VAR_48 == ((void*)0)) {
     VAR_35.hst_nomem_mbuf++;
     VAR_45 = VAR_36->sc_cmdu ? VAR_8 : VAR_7;
     FUNC_26(VAR_49);
     goto err_srcmap;
    }
    VAR_47 = VAR_28;
    if (VAR_46 >= VAR_27) {
     if (!(FUNC_7(VAR_48, VAR_30))) {
      VAR_35.hst_nomem_mcl++;
      VAR_45 = VAR_36->sc_cmdu ? VAR_8 : VAR_7;
      VAR_50->m_next = VAR_48;
      FUNC_26(VAR_49);
      goto err_srcmap;
     }
     VAR_47 = VAR_25;
    }

    VAR_48->m_len = VAR_47;
    VAR_49->m_pkthdr.len += VAR_47;
    VAR_46 -= VAR_47;

    VAR_50->m_next = VAR_48;
    VAR_50 = VAR_48;
   }
   VAR_37->dst_m = VAR_49;
  }
 }

 if (VAR_37->dst_map == ((void*)0)) {
  if (FUNC_12(VAR_36->sc_dmat, VAR_2, &VAR_37->dst_map)) {
   VAR_35.hst_nomem_map++;
   VAR_45 = VAR_7;
   goto err_srcmap;
  }
  if (VAR_38->crp_flags & VAR_3) {
   if (FUNC_14(VAR_36->sc_dmat, VAR_37->dst_map,
       VAR_37->dst_m, VAR_34, &VAR_37->dst, VAR_2)) {
    VAR_35.hst_nomem_map++;
    VAR_45 = VAR_7;
    goto err_dstmap1;
   }
  } else if (VAR_38->crp_flags & VAR_4) {
   if (FUNC_15(VAR_36->sc_dmat, VAR_37->dst_map,
       VAR_37->dst_io, VAR_34, &VAR_37->dst, VAR_2)) {
    VAR_35.hst_nomem_load++;
    VAR_45 = VAR_7;
    goto err_dstmap1;
   }
  }
 }
 if (VAR_37->src_map == VAR_37->dst_map) {
  FUNC_16(VAR_36->sc_dmat, VAR_37->src_map,
      VAR_1|VAR_0);
 } else {
  FUNC_16(VAR_36->sc_dmat, VAR_37->src_map,
      VAR_1);
  FUNC_16(VAR_36->sc_dmat, VAR_37->dst_map,
      VAR_0);
 }




 if ((VAR_36->sc_srcu + VAR_37->src_nsegs) > VAR_22 ||
     (VAR_36->sc_dstu + VAR_37->dst_nsegs + 1) > VAR_17) {
  VAR_35.hst_nomem_sd++;
  VAR_45 = VAR_8;
  goto err_dstmap;
 }

 if (VAR_36->sc_cmdi == VAR_16) {
  VAR_36->sc_cmdi = 0;
  VAR_40->cmdr[VAR_16].l = FUNC_23(VAR_23 |
      VAR_18 | VAR_20);
  FUNC_0(VAR_36, VAR_16,
      VAR_1 | VAR_0);
 }
 VAR_43 = VAR_36->sc_cmdi++;
 VAR_41 = FUNC_22(VAR_37, VAR_40->command_bufs[VAR_43]);
 FUNC_1(VAR_36, VAR_43, VAR_1);


 VAR_40->cmdr[VAR_43].l = FUNC_23(VAR_41 | VAR_23 | VAR_19 |
     VAR_20);
 FUNC_0(VAR_36, VAR_43,
     VAR_1 | VAR_0);
 VAR_36->sc_cmdu++;






 if (VAR_36->sc_cmdu > 1) {
  VAR_36->sc_dmaier |= VAR_15;
  FUNC_11(VAR_36, VAR_10, VAR_36->sc_dmaier);
 }

 VAR_35.hst_ipackets++;
 VAR_35.hst_ibytes += VAR_37->src_mapsize;

 FUNC_21(VAR_36, VAR_37);
 if (VAR_36->sc_resi == VAR_21) {
  VAR_36->sc_resi = 0;
  VAR_40->resr[VAR_21].l = FUNC_23(VAR_23 |
      VAR_18 | VAR_20);
  FUNC_3(VAR_36, VAR_21,
      VAR_0 | VAR_1);
 }
 VAR_44 = VAR_36->sc_resi++;
 FUNC_6(VAR_36->sc_hifn_commands[VAR_44] == ((void*)0),
  ("hifn_crypto: command slot %u busy", VAR_44));
 VAR_36->sc_hifn_commands[VAR_44] = VAR_37;
 FUNC_4(VAR_36, VAR_44, VAR_0);
 if ((VAR_39 & VAR_5) && VAR_36->sc_curbatch < VAR_33) {
  VAR_40->resr[VAR_44].l = FUNC_23(VAR_24 |
      VAR_23 | VAR_19 | VAR_20);
  VAR_36->sc_curbatch++;
  if (VAR_36->sc_curbatch > VAR_35.hst_maxbatch)
   VAR_35.hst_maxbatch = VAR_36->sc_curbatch;
  VAR_35.hst_totbatch++;
 } else {
  VAR_40->resr[VAR_44].l = FUNC_23(VAR_24 |
      VAR_23 | VAR_19);
  VAR_36->sc_curbatch = 0;
 }
 FUNC_3(VAR_36, VAR_44,
     VAR_0 | VAR_1);
 VAR_36->sc_resu++;

 if (VAR_37->sloplen)
  VAR_37->slopidx = VAR_44;

 FUNC_20(VAR_36, VAR_37);

 VAR_42 = 0;
 if (VAR_36->sc_c_busy == 0) {
  VAR_42 |= VAR_11;
  VAR_36->sc_c_busy = 1;
 }
 if (VAR_36->sc_s_busy == 0) {
  VAR_42 |= VAR_14;
  VAR_36->sc_s_busy = 1;
 }
 if (VAR_36->sc_r_busy == 0) {
  VAR_42 |= VAR_13;
  VAR_36->sc_r_busy = 1;
 }
 if (VAR_36->sc_d_busy == 0) {
  VAR_42 |= VAR_12;
  VAR_36->sc_d_busy = 1;
 }
 if (VAR_42)
  FUNC_11(VAR_36, VAR_9, VAR_42);
 VAR_36->sc_active = 5;
 FUNC_5(VAR_36);
 FUNC_6(VAR_45 == 0, ("hifn_crypto: success with error %u", VAR_45));
 return (VAR_45);

err_dstmap:
 if (VAR_37->src_map != VAR_37->dst_map)
  FUNC_17(VAR_36->sc_dmat, VAR_37->dst_map);
err_dstmap1:
 if (VAR_37->src_map != VAR_37->dst_map)
  FUNC_13(VAR_36->sc_dmat, VAR_37->dst_map);
err_srcmap:
 if (VAR_38->crp_flags & VAR_3) {
  if (VAR_37->src_m != VAR_37->dst_m)
   FUNC_26(VAR_37->dst_m);
 }
 FUNC_17(VAR_36->sc_dmat, VAR_37->src_map);
err_srcmap1:
 FUNC_13(VAR_36->sc_dmat, VAR_37->src_map);
 FUNC_5(VAR_36);
 return (VAR_45);
}
