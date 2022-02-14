
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct wrqe {int dummy; } ;
struct cryptop {int crp_buf; int crp_flags; struct cryptodesc* crp_desc; } ;
struct cryptodesc {int crd_len; int crd_alg; int crd_flags; char* crd_iv; int crd_skip; int crd_inject; } ;
struct cpl_rx_phys_dsgl {int dummy; } ;
struct TYPE_8__ {char* key; int ctx_hdr; } ;
struct TYPE_7__ {void* ivgen_hdrlen; void* seqno_numivs; void* cipherstop_lo_authinsert; void* aadstart_cipherstop_hi; void* pldlen; void* op_ivinsrtofst; } ;
struct chcr_wr {TYPE_2__ key_ctx; TYPE_1__ sec_cpl; } ;
struct ccr_softc {int adapter; int tx_channel_id; int stats_wr_nomem; int txq; TYPE_4__* sg_ulptx; int sg_crp; TYPE_4__* sg_dsgl; } ;
struct TYPE_9__ {scalar_t__ key_len; int iv_len; char* enckey; char* deckey; int key_ctx_hdr; int cipher_mode; } ;
struct ccr_session {TYPE_3__ blkcipher; } ;
struct TYPE_10__ {int sg_nseg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 struct wrqe* FUNC_25 (scalar_t__,int ) ;
 int FUNC_26 (char*,scalar_t__,int ) ;
 int FUNC_27 (TYPE_4__*,int ) ;
 int FUNC_28 (int) ;
 int FUNC_29 (struct ccr_softc*,struct chcr_wr*,scalar_t__,scalar_t__,scalar_t__,int,int ,struct cryptop*) ;
 int FUNC_30 (int) ;
 scalar_t__ FUNC_31 (scalar_t__,int) ;
 int FUNC_32 (struct ccr_softc*,char*,int) ;
 int FUNC_33 (struct ccr_softc*,char*,int) ;
 int FUNC_34 (int ,int ,int ,scalar_t__,char*) ;
 int FUNC_35 (int ,int ,int ,int,char*) ;
 void* FUNC_36 (int) ;
 int FUNC_37 (char*,char*,scalar_t__) ;
 int FUNC_38 (struct chcr_wr*,int ,scalar_t__) ;
 scalar_t__ FUNC_39 (scalar_t__,int) ;
 int FUNC_40 (TYPE_4__*,int ,int ,int) ;
 int FUNC_41 (TYPE_4__*) ;
 int FUNC_42 (int ,struct wrqe*) ;
 struct chcr_wr* FUNC_43 (struct wrqe*) ;

__attribute__((used)) static int
FUNC_44(struct ccr_softc *VAR_18, struct ccr_session *VAR_19, struct cryptop *VAR_20)
{
 char VAR_21[VAR_3];
 struct chcr_wr *VAR_22;
 struct wrqe *VAR_23;
 struct cryptodesc *VAR_24;
 char *VAR_25;
 u_int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 u_int VAR_31;
 int VAR_32, VAR_33;
 int VAR_34, VAR_35;
 int VAR_36;

 VAR_24 = VAR_20->crp_desc;

 if (VAR_19->blkcipher.key_len == 0 || VAR_24->crd_len == 0)
  return (VAR_10);
 if (VAR_24->crd_alg == 130 &&
     (VAR_24->crd_len % VAR_0) != 0)
  return (VAR_10);


 if (VAR_24->crd_len > VAR_12)
  return (VAR_9);

 if (VAR_24->crd_flags & VAR_5)
  VAR_28 = VAR_2;
 else
  VAR_28 = VAR_1;

 FUNC_41(VAR_18->sg_dsgl);
 VAR_36 = FUNC_40(VAR_18->sg_dsgl, VAR_18->sg_crp, VAR_24->crd_skip,
     VAR_24->crd_len);
 if (VAR_36)
  return (VAR_36);
 VAR_32 = FUNC_27(VAR_18->sg_dsgl, VAR_8);
 if (VAR_32 > VAR_13)
  return (VAR_9);
 VAR_33 = FUNC_28(VAR_32);


 VAR_26 = FUNC_39(VAR_19->blkcipher.key_len, 16);
 VAR_29 = FUNC_0(VAR_26, VAR_33);

 if (FUNC_31(VAR_29, VAR_24->crd_len +
     VAR_19->blkcipher.iv_len)) {
  VAR_31 = VAR_24->crd_len;
  VAR_34 = 0;
  VAR_35 = 0;
 } else {
  VAR_31 = 0;
  FUNC_41(VAR_18->sg_ulptx);
  VAR_36 = FUNC_40(VAR_18->sg_ulptx, VAR_18->sg_crp,
      VAR_24->crd_skip, VAR_24->crd_len);
  if (VAR_36)
   return (VAR_36);
  VAR_34 = VAR_18->sg_ulptx->sg_nseg;
  VAR_35 = FUNC_30(VAR_34);
 }

 VAR_30 = FUNC_39(VAR_29, 16) + VAR_19->blkcipher.iv_len +
     FUNC_39(VAR_31, 16) + VAR_35;
 if (VAR_30 > VAR_17)
  return (VAR_9);
 VAR_23 = FUNC_25(VAR_30, VAR_18->txq);
 if (VAR_23 == ((void*)0)) {
  VAR_18->stats_wr_nomem++;
  return (VAR_11);
 }
 VAR_22 = FUNC_43(VAR_23);
 FUNC_38(VAR_22, 0, VAR_30);






 if (VAR_28 == VAR_2) {
  if (VAR_24->crd_flags & VAR_6)
   FUNC_37(VAR_21, VAR_24->crd_iv, VAR_19->blkcipher.iv_len);
  else
   FUNC_26(VAR_21, VAR_19->blkcipher.iv_len, 0);
  if ((VAR_24->crd_flags & VAR_7) == 0)
   FUNC_34(VAR_20->crp_flags, VAR_20->crp_buf,
       VAR_24->crd_inject, VAR_19->blkcipher.iv_len, VAR_21);
 } else {
  if (VAR_24->crd_flags & VAR_6)
   FUNC_37(VAR_21, VAR_24->crd_iv, VAR_19->blkcipher.iv_len);
  else
   FUNC_35(VAR_20->crp_flags, VAR_20->crp_buf,
       VAR_24->crd_inject, VAR_19->blkcipher.iv_len, VAR_21);
 }

 FUNC_29(VAR_18, VAR_22, VAR_26, VAR_30, VAR_31, VAR_35, 0,
     VAR_20);


 VAR_22->sec_cpl.op_ivinsrtofst = FUNC_36(
     FUNC_7(VAR_4) |
     FUNC_9(VAR_18->tx_channel_id) |
     FUNC_1(0) | FUNC_10(1) |
     FUNC_5(2) | FUNC_8(0) |
     FUNC_6(1));

 VAR_22->sec_cpl.pldlen = FUNC_36(VAR_19->blkcipher.iv_len + VAR_24->crd_len);

 VAR_22->sec_cpl.aadstart_cipherstop_hi = FUNC_36(
     FUNC_2(VAR_19->blkcipher.iv_len + 1) |
     FUNC_3(0));
 VAR_22->sec_cpl.cipherstop_lo_authinsert = FUNC_36(
     FUNC_4(0));


 VAR_22->sec_cpl.seqno_numivs = FUNC_36(
     FUNC_24(0) |
     FUNC_23(VAR_16) |
     FUNC_14(VAR_28) |
     FUNC_13(VAR_19->blkcipher.cipher_mode) |
     FUNC_12(VAR_14) |
     FUNC_16(VAR_15) |
     FUNC_18(VAR_19->blkcipher.iv_len / 2) |
     FUNC_22(0));
 VAR_22->sec_cpl.ivgen_hdrlen = FUNC_36(
     FUNC_17(0) |
     FUNC_21(0) | FUNC_19(0) | FUNC_20(0) |
     FUNC_11(1) | FUNC_15(VAR_33));

 VAR_22->key_ctx.ctx_hdr = VAR_19->blkcipher.key_ctx_hdr;
 switch (VAR_24->crd_alg) {
 case 130:
  if (VAR_24->crd_flags & VAR_5)
   FUNC_37(VAR_22->key_ctx.key, VAR_19->blkcipher.enckey,
       VAR_19->blkcipher.key_len);
  else
   FUNC_37(VAR_22->key_ctx.key, VAR_19->blkcipher.deckey,
       VAR_19->blkcipher.key_len);
  break;
 case 129:
  FUNC_37(VAR_22->key_ctx.key, VAR_19->blkcipher.enckey,
      VAR_19->blkcipher.key_len);
  break;
 case 128:
  VAR_27 = VAR_19->blkcipher.key_len / 2;
  FUNC_37(VAR_22->key_ctx.key, VAR_19->blkcipher.enckey + VAR_27,
      VAR_27);
  if (VAR_24->crd_flags & VAR_5)
   FUNC_37(VAR_22->key_ctx.key + VAR_27,
       VAR_19->blkcipher.enckey, VAR_27);
  else
   FUNC_37(VAR_22->key_ctx.key + VAR_27,
       VAR_19->blkcipher.deckey, VAR_27);
  break;
 }

 VAR_25 = (char *)(VAR_22 + 1) + VAR_26;
 FUNC_32(VAR_18, VAR_25, VAR_32);
 VAR_25 += sizeof(struct cpl_rx_phys_dsgl) + VAR_33;
 FUNC_37(VAR_25, VAR_21, VAR_19->blkcipher.iv_len);
 VAR_25 += VAR_19->blkcipher.iv_len;
 if (VAR_31 != 0)
  FUNC_35(VAR_20->crp_flags, VAR_20->crp_buf, VAR_24->crd_skip,
      VAR_24->crd_len, VAR_25);
 else
  FUNC_33(VAR_18, VAR_25, VAR_34);


 FUNC_42(VAR_18->adapter, VAR_23);

 return (0);
}
