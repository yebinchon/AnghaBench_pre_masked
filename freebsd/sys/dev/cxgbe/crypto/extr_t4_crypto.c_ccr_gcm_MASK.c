
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
typedef scalar_t__ u_int ;
struct wrqe {int dummy; } ;
struct cryptop {int crp_buf; int crp_flags; } ;
struct cryptodesc {scalar_t__ crd_len; scalar_t__ crd_skip; int crd_flags; scalar_t__ crd_inject; char* crd_iv; } ;
struct cpl_rx_phys_dsgl {int dummy; } ;
struct TYPE_9__ {char* key; int ctx_hdr; } ;
struct TYPE_8__ {void* ivgen_hdrlen; void* seqno_numivs; void* cipherstop_lo_authinsert; void* aadstart_cipherstop_hi; void* pldlen; void* op_ivinsrtofst; } ;
struct chcr_wr {TYPE_2__ key_ctx; TYPE_1__ sec_cpl; } ;
struct ccr_softc {int adapter; int tx_channel_id; int stats_wr_nomem; int txq; TYPE_5__* sg_ulptx; int sg_crp; TYPE_5__* sg_dsgl; int sg_iv_aad; } ;
struct TYPE_10__ {scalar_t__ hash_len; char* ghash_h; } ;
struct TYPE_11__ {scalar_t__ key_len; int iv_len; char* enckey; int key_ctx_hdr; } ;
struct ccr_session {TYPE_3__ gmac; TYPE_4__ blkcipher; } ;
struct TYPE_12__ {int sg_nseg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (int) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 scalar_t__ FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (int ) ;
 scalar_t__ FUNC_30 (int ) ;
 struct wrqe* FUNC_31 (scalar_t__,int ) ;
 int FUNC_32 (char*,scalar_t__,int ) ;
 int FUNC_33 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_34 (int ,scalar_t__) ;
 int FUNC_35 (int) ;
 int FUNC_36 (struct ccr_softc*,struct chcr_wr*,scalar_t__,scalar_t__,scalar_t__,int,int ,struct cryptop*) ;
 int FUNC_37 (int) ;
 scalar_t__ FUNC_38 (scalar_t__,scalar_t__) ;
 int FUNC_39 (struct ccr_softc*,char*,int) ;
 int FUNC_40 (struct ccr_softc*,char*,int) ;
 int FUNC_41 (int ,int ,scalar_t__,scalar_t__,char*) ;
 int FUNC_42 (int ,int ,scalar_t__,scalar_t__,char*) ;
 void* FUNC_43 (scalar_t__) ;
 int FUNC_44 (char*,char*,scalar_t__) ;
 int FUNC_45 (struct chcr_wr*,int ,scalar_t__) ;
 int FUNC_46 (scalar_t__,int) ;
 int FUNC_47 (TYPE_5__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_48 (TYPE_5__*) ;
 int FUNC_49 (int ,struct wrqe*) ;
 struct chcr_wr* FUNC_50 (struct wrqe*) ;

__attribute__((used)) static int
FUNC_51(struct ccr_softc *VAR_22, struct ccr_session *VAR_23, struct cryptop *VAR_24,
    struct cryptodesc *VAR_25, struct cryptodesc *VAR_26)
{
 char VAR_27[VAR_4];
 struct chcr_wr *VAR_28;
 struct wrqe *VAR_29;
 char *VAR_30;
 u_int VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
 u_int VAR_36, VAR_37;
 u_int VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;
 u_int VAR_43, VAR_44;
 int VAR_45, VAR_46;
 int VAR_47, VAR_48;
 int VAR_49;

 if (VAR_23->blkcipher.key_len == 0)
  return (VAR_11);





 if (VAR_26->crd_len == 0)
  return (VAR_12);





 if (VAR_25->crd_len + VAR_25->crd_skip > VAR_26->crd_len + VAR_26->crd_skip)
  return (VAR_12);

 if (VAR_25->crd_len + VAR_0 > VAR_15)
  return (VAR_12);

 VAR_36 = VAR_23->gmac.hash_len;
 if (VAR_26->crd_flags & VAR_6)
  VAR_33 = VAR_3;
 else
  VAR_33 = VAR_2;
 if (VAR_23->blkcipher.iv_len == 12)
  VAR_31 = VAR_0;
 else
  VAR_31 = VAR_23->blkcipher.iv_len;
 if (VAR_33 == VAR_3) {
  if (VAR_31 + VAR_25->crd_len + VAR_26->crd_len +
      VAR_36 > VAR_16)
   return (VAR_10);
 } else {
  if (VAR_31 + VAR_25->crd_len + VAR_26->crd_len > VAR_16)
   return (VAR_10);
 }
 FUNC_48(VAR_22->sg_dsgl);
 VAR_49 = FUNC_47(VAR_22->sg_dsgl, VAR_22->sg_iv_aad, 0, VAR_31 +
     VAR_25->crd_len);
 if (VAR_49)
  return (VAR_49);
 VAR_49 = FUNC_47(VAR_22->sg_dsgl, VAR_22->sg_crp, VAR_26->crd_skip,
     VAR_26->crd_len);
 if (VAR_49)
  return (VAR_49);
 if (VAR_33 == VAR_3) {
  VAR_49 = FUNC_47(VAR_22->sg_dsgl, VAR_22->sg_crp,
      VAR_25->crd_inject, VAR_36);
  if (VAR_49)
   return (VAR_49);
 }
 VAR_45 = FUNC_33(VAR_22->sg_dsgl, VAR_9);
 if (VAR_45 > VAR_17)
  return (VAR_10);
 VAR_46 = FUNC_35(VAR_45);





 VAR_32 = FUNC_46(VAR_23->blkcipher.key_len, 16) + VAR_14;
 VAR_34 = FUNC_0(VAR_32, VAR_46);
 VAR_44 = VAR_25->crd_len + VAR_26->crd_len;
 if (VAR_33 == VAR_2)
  VAR_44 += VAR_36;
 if (VAR_44 > VAR_16)
  return (VAR_10);
 if (FUNC_38(VAR_34, VAR_31 + VAR_44)) {
  VAR_37 = VAR_44;
  VAR_47 = 0;
  VAR_48 = 0;
 } else {
  VAR_37 = 0;
  FUNC_48(VAR_22->sg_ulptx);
  if (VAR_25->crd_len != 0) {
   VAR_49 = FUNC_47(VAR_22->sg_ulptx, VAR_22->sg_crp,
       VAR_25->crd_skip, VAR_25->crd_len);
   if (VAR_49)
    return (VAR_49);
  }
  VAR_49 = FUNC_47(VAR_22->sg_ulptx, VAR_22->sg_crp,
      VAR_26->crd_skip, VAR_26->crd_len);
  if (VAR_49)
   return (VAR_49);
  if (VAR_33 == VAR_2) {
   VAR_49 = FUNC_47(VAR_22->sg_ulptx, VAR_22->sg_crp,
       VAR_25->crd_inject, VAR_36);
   if (VAR_49)
    return (VAR_49);
  }
  VAR_47 = VAR_22->sg_ulptx->sg_nseg;
  VAR_48 = FUNC_37(VAR_47);
 }

 if (VAR_25->crd_len != 0) {
  VAR_38 = VAR_31 + 1;
  VAR_39 = VAR_38 + VAR_25->crd_len - 1;
 } else {
  VAR_38 = 0;
  VAR_39 = 0;
 }
 VAR_40 = VAR_31 + VAR_25->crd_len + 1;
 if (VAR_33 == VAR_2)
  VAR_41 = VAR_36;
 else
  VAR_41 = 0;
 if (VAR_33 == VAR_2)
  VAR_42 = VAR_36;
 else
  VAR_42 = 0;

 VAR_35 = FUNC_46(VAR_34, 16) + VAR_31 + FUNC_46(VAR_37, 16) +
     VAR_48;
 if (VAR_35 > VAR_21)
  return (VAR_10);
 VAR_29 = FUNC_31(VAR_35, VAR_22->txq);
 if (VAR_29 == ((void*)0)) {
  VAR_22->stats_wr_nomem++;
  return (VAR_13);
 }
 VAR_28 = FUNC_50(VAR_29);
 FUNC_45(VAR_28, 0, VAR_35);
 if (VAR_33 == VAR_3) {
  if (VAR_26->crd_flags & VAR_7)
   FUNC_44(VAR_27, VAR_26->crd_iv, VAR_23->blkcipher.iv_len);
  else
   FUNC_32(VAR_27, VAR_23->blkcipher.iv_len, 0);
  if ((VAR_26->crd_flags & VAR_8) == 0)
   FUNC_41(VAR_24->crp_flags, VAR_24->crp_buf,
       VAR_26->crd_inject, VAR_23->blkcipher.iv_len, VAR_27);
 } else {
  if (VAR_26->crd_flags & VAR_7)
   FUNC_44(VAR_27, VAR_26->crd_iv, VAR_23->blkcipher.iv_len);
  else
   FUNC_42(VAR_24->crp_flags, VAR_24->crp_buf,
       VAR_26->crd_inject, VAR_23->blkcipher.iv_len, VAR_27);
 }
 if (VAR_23->blkcipher.iv_len == 12)
  *(uint32_t *)&VAR_27[12] = FUNC_43(1);

 FUNC_36(VAR_22, VAR_28, VAR_32, VAR_35, VAR_37, VAR_48, 0,
     VAR_24);


 VAR_28->sec_cpl.op_ivinsrtofst = FUNC_43(
     FUNC_12(VAR_5) |
     FUNC_14(VAR_22->tx_channel_id) |
     FUNC_3(0) | FUNC_15(1) |
     FUNC_10(2) | FUNC_13(0) |
     FUNC_11(1));

 VAR_28->sec_cpl.pldlen = FUNC_43(VAR_31 + VAR_44);
 VAR_28->sec_cpl.aadstart_cipherstop_hi = FUNC_43(
     FUNC_1(VAR_38) |
     FUNC_2(VAR_39) |
     FUNC_7(VAR_40) |
     FUNC_8(0));
 VAR_28->sec_cpl.cipherstop_lo_authinsert = FUNC_43(
     FUNC_9(0) |
     FUNC_5(VAR_40) |
     FUNC_6(VAR_41) |
     FUNC_4(VAR_42));


 VAR_43 = FUNC_34(VAR_1, VAR_36);
 VAR_28->sec_cpl.seqno_numivs = FUNC_43(
     FUNC_30(0) |
     FUNC_29(VAR_20) |
     FUNC_20(VAR_33) |
     FUNC_18(VAR_33 == VAR_3 ? 1 : 0) |
     FUNC_19(VAR_19) |
     FUNC_17(VAR_18) |
     FUNC_22(VAR_43) |
     FUNC_24(VAR_31 / 2) |
     FUNC_28(0));
 VAR_28->sec_cpl.ivgen_hdrlen = FUNC_43(
     FUNC_23(0) |
     FUNC_27(0) | FUNC_25(0) | FUNC_26(0) |
     FUNC_16(0) | FUNC_21(VAR_46));

 VAR_28->key_ctx.ctx_hdr = VAR_23->blkcipher.key_ctx_hdr;
 FUNC_44(VAR_28->key_ctx.key, VAR_23->blkcipher.enckey, VAR_23->blkcipher.key_len);
 VAR_30 = VAR_28->key_ctx.key + FUNC_46(VAR_23->blkcipher.key_len, 16);
 FUNC_44(VAR_30, VAR_23->gmac.ghash_h, VAR_14);

 VAR_30 = (char *)(VAR_28 + 1) + VAR_32;
 FUNC_39(VAR_22, VAR_30, VAR_45);
 VAR_30 += sizeof(struct cpl_rx_phys_dsgl) + VAR_46;
 FUNC_44(VAR_30, VAR_27, VAR_31);
 VAR_30 += VAR_31;
 if (VAR_37 != 0) {
  if (VAR_25->crd_len != 0) {
   FUNC_42(VAR_24->crp_flags, VAR_24->crp_buf,
       VAR_25->crd_skip, VAR_25->crd_len, VAR_30);
   VAR_30 += VAR_25->crd_len;
  }
  FUNC_42(VAR_24->crp_flags, VAR_24->crp_buf, VAR_26->crd_skip,
      VAR_26->crd_len, VAR_30);
  VAR_30 += VAR_26->crd_len;
  if (VAR_33 == VAR_2)
   FUNC_42(VAR_24->crp_flags, VAR_24->crp_buf,
       VAR_25->crd_inject, VAR_36, VAR_30);
 } else
  FUNC_40(VAR_22, VAR_30, VAR_47);


 FUNC_49(VAR_22->adapter, VAR_29);

 return (0);
}
