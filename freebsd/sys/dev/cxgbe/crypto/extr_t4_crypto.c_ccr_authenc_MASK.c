
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct wrqe {int dummy; } ;
struct cryptop {int crp_buf; int crp_flags; } ;
struct cryptodesc {scalar_t__ crd_len; int crd_alg; scalar_t__ crd_skip; int crd_flags; scalar_t__ crd_inject; char* crd_iv; } ;
struct cpl_rx_phys_dsgl {int dummy; } ;
struct TYPE_9__ {char* key; int ctx_hdr; } ;
struct TYPE_8__ {void* ivgen_hdrlen; void* seqno_numivs; void* cipherstop_lo_authinsert; void* aadstart_cipherstop_hi; void* pldlen; void* op_ivinsrtofst; } ;
struct chcr_wr {TYPE_2__ key_ctx; TYPE_1__ sec_cpl; } ;
struct ccr_softc {int adapter; int tx_channel_id; int stats_wr_nomem; int txq; TYPE_5__* sg_ulptx; int sg_crp; TYPE_5__* sg_dsgl; int sg_iv_aad; } ;
struct TYPE_11__ {scalar_t__ key_len; scalar_t__ iv_len; char* enckey; char* deckey; int key_ctx_hdr; int cipher_mode; } ;
struct TYPE_10__ {scalar_t__ hash_len; scalar_t__ partial_digest_len; char* pads; int auth_mode; struct auth_hash* auth_hash; } ;
struct ccr_session {TYPE_4__ blkcipher; TYPE_3__ hmac; } ;
struct auth_hash {scalar_t__ hashsize; } ;
struct TYPE_12__ {int sg_nseg; } ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
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
 scalar_t__ FUNC_24 (int) ;
 scalar_t__ FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (int ) ;
 scalar_t__ FUNC_30 (int ) ;
 struct wrqe* FUNC_31 (scalar_t__,int ) ;
 int FUNC_32 (char*,scalar_t__,int ) ;
 int FUNC_33 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_34 (scalar_t__,scalar_t__) ;
 int FUNC_35 (int) ;
 int FUNC_36 (struct ccr_softc*,struct chcr_wr*,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__,struct cryptop*) ;
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
FUNC_51(struct ccr_softc *VAR_17, struct ccr_session *VAR_18, struct cryptop *VAR_19,
    struct cryptodesc *VAR_20, struct cryptodesc *VAR_21)
{
 char VAR_22[VAR_3];
 struct chcr_wr *VAR_23;
 struct wrqe *VAR_24;
 struct auth_hash *VAR_25;
 char *VAR_26;
 u_int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 u_int VAR_32, VAR_33, VAR_34;
 u_int VAR_35, VAR_36, VAR_37;
 u_int VAR_38, VAR_39, VAR_40;
 u_int VAR_41, VAR_42;
 u_int VAR_43, VAR_44;
 int VAR_45, VAR_46;
 int VAR_47, VAR_48;
 int VAR_49;





 if (VAR_18->blkcipher.key_len == 0 || VAR_21->crd_len == 0)
  return (VAR_10);
 if (VAR_21->crd_alg == 130 &&
     (VAR_21->crd_len % VAR_0) != 0)
  return (VAR_10);
 if (VAR_20->crd_len + VAR_20->crd_skip > VAR_21->crd_len + VAR_21->crd_skip)
  return (VAR_10);
 if (VAR_20->crd_skip < VAR_21->crd_skip) {
  if (VAR_20->crd_skip + VAR_20->crd_len > VAR_21->crd_skip)
   VAR_36 = (VAR_21->crd_skip - VAR_20->crd_skip);
  else
   VAR_36 = VAR_20->crd_len;
 } else
  VAR_36 = 0;
 if (VAR_36 + VAR_18->blkcipher.iv_len > VAR_12)
  return (VAR_10);

 VAR_25 = VAR_18->hmac.auth_hash;
 VAR_32 = VAR_18->hmac.hash_len;
 if (VAR_21->crd_flags & VAR_5)
  VAR_29 = VAR_2;
 else
  VAR_29 = VAR_1;
 if (VAR_29 == VAR_2) {
  if (VAR_18->blkcipher.iv_len + VAR_36 + VAR_21->crd_len +
      VAR_32 > VAR_13)
   return (VAR_9);
 } else {
  if (VAR_18->blkcipher.iv_len + VAR_36 + VAR_21->crd_len >
      VAR_13)
   return (VAR_9);
 }
 FUNC_48(VAR_17->sg_dsgl);
 VAR_49 = FUNC_47(VAR_17->sg_dsgl, VAR_17->sg_iv_aad, 0,
     VAR_18->blkcipher.iv_len + VAR_36);
 if (VAR_49)
  return (VAR_49);
 VAR_49 = FUNC_47(VAR_17->sg_dsgl, VAR_17->sg_crp, VAR_21->crd_skip,
     VAR_21->crd_len);
 if (VAR_49)
  return (VAR_49);
 if (VAR_29 == VAR_2) {
  VAR_49 = FUNC_47(VAR_17->sg_dsgl, VAR_17->sg_crp,
      VAR_20->crd_inject, VAR_32);
  if (VAR_49)
   return (VAR_49);
 }
 VAR_45 = FUNC_33(VAR_17->sg_dsgl, VAR_8);
 if (VAR_45 > VAR_14)
  return (VAR_9);
 VAR_46 = FUNC_35(VAR_45);


 VAR_34 = FUNC_46(VAR_18->hmac.partial_digest_len, 16);





 VAR_27 = FUNC_46(VAR_18->blkcipher.key_len, 16) + VAR_34 * 2;
 VAR_30 = FUNC_0(VAR_27, VAR_46);
 VAR_44 = VAR_36 + VAR_21->crd_len;
 if (VAR_44 + FUNC_46(VAR_25->hashsize, 16) + (512 - 16) >
     VAR_13)
  return (VAR_9);
 if (VAR_29 == VAR_1)
  VAR_44 += VAR_32;
 if (FUNC_38(VAR_30, VAR_18->blkcipher.iv_len + VAR_44)) {
  VAR_33 = VAR_44;
  VAR_47 = 0;
  VAR_48 = 0;
 } else {
  VAR_33 = 0;
  FUNC_48(VAR_17->sg_ulptx);
  if (VAR_36 != 0) {
   VAR_49 = FUNC_47(VAR_17->sg_ulptx, VAR_17->sg_crp,
       VAR_20->crd_skip, VAR_36);
   if (VAR_49)
    return (VAR_49);
  }
  VAR_49 = FUNC_47(VAR_17->sg_ulptx, VAR_17->sg_crp,
      VAR_21->crd_skip, VAR_21->crd_len);
  if (VAR_49)
   return (VAR_49);
  if (VAR_29 == VAR_1) {
   VAR_49 = FUNC_47(VAR_17->sg_ulptx, VAR_17->sg_crp,
       VAR_20->crd_inject, VAR_32);
   if (VAR_49)
    return (VAR_49);
  }
  VAR_47 = VAR_17->sg_ulptx->sg_nseg;
  VAR_48 = FUNC_37(VAR_47);
 }






 if (VAR_36 != 0) {
  VAR_35 = VAR_18->blkcipher.iv_len + 1;
  VAR_37 = VAR_35 + VAR_36 - 1;
 } else {
  VAR_35 = 0;
  VAR_37 = 0;
 }
 VAR_41 = VAR_18->blkcipher.iv_len + VAR_36 + 1;
 if (VAR_29 == VAR_1)
  VAR_42 = VAR_32;
 else
  VAR_42 = 0;
 if (VAR_36 == VAR_20->crd_len) {
  VAR_38 = 0;
  VAR_39 = 0;
 } else {
  if (VAR_36 != 0)
   VAR_38 = VAR_41;
  else
   VAR_38 = VAR_18->blkcipher.iv_len + VAR_20->crd_skip -
       VAR_21->crd_skip + 1;
  VAR_39 = (VAR_21->crd_skip + VAR_21->crd_len) -
      (VAR_20->crd_skip + VAR_20->crd_len) + VAR_42;
 }
 if (VAR_29 == VAR_1)
  VAR_40 = VAR_32;
 else
  VAR_40 = 0;

 VAR_31 = FUNC_46(VAR_30, 16) + VAR_18->blkcipher.iv_len +
     FUNC_46(VAR_33, 16) + VAR_48;
 if (VAR_31 > VAR_16)
  return (VAR_9);
 VAR_24 = FUNC_31(VAR_31, VAR_17->txq);
 if (VAR_24 == ((void*)0)) {
  VAR_17->stats_wr_nomem++;
  return (VAR_11);
 }
 VAR_23 = FUNC_50(VAR_24);
 FUNC_45(VAR_23, 0, VAR_31);






 if (VAR_29 == VAR_2) {
  if (VAR_21->crd_flags & VAR_6)
   FUNC_44(VAR_22, VAR_21->crd_iv, VAR_18->blkcipher.iv_len);
  else
   FUNC_32(VAR_22, VAR_18->blkcipher.iv_len, 0);
  if ((VAR_21->crd_flags & VAR_7) == 0)
   FUNC_41(VAR_19->crp_flags, VAR_19->crp_buf,
       VAR_21->crd_inject, VAR_18->blkcipher.iv_len, VAR_22);
 } else {
  if (VAR_21->crd_flags & VAR_6)
   FUNC_44(VAR_22, VAR_21->crd_iv, VAR_18->blkcipher.iv_len);
  else
   FUNC_42(VAR_19->crp_flags, VAR_19->crp_buf,
       VAR_21->crd_inject, VAR_18->blkcipher.iv_len, VAR_22);
 }

 FUNC_36(VAR_17, VAR_23, VAR_27, VAR_31, VAR_33, VAR_48,
     VAR_29 == VAR_1 ? VAR_32 : 0, VAR_19);


 VAR_23->sec_cpl.op_ivinsrtofst = FUNC_43(
     FUNC_12(VAR_4) |
     FUNC_14(VAR_17->tx_channel_id) |
     FUNC_3(0) | FUNC_15(1) |
     FUNC_10(2) | FUNC_13(0) |
     FUNC_11(1));

 VAR_23->sec_cpl.pldlen = FUNC_43(VAR_18->blkcipher.iv_len + VAR_44);

 VAR_23->sec_cpl.aadstart_cipherstop_hi = FUNC_43(
     FUNC_1(VAR_35) |
     FUNC_2(VAR_37) |
     FUNC_7(VAR_41) |
     FUNC_8(VAR_42 >> 4));
 VAR_23->sec_cpl.cipherstop_lo_authinsert = FUNC_43(
     FUNC_9(VAR_42 & 0xf) |
     FUNC_5(VAR_38) |
     FUNC_6(VAR_39) |
     FUNC_4(VAR_40));


 VAR_43 = FUNC_34(VAR_25->hashsize, VAR_32);
 VAR_23->sec_cpl.seqno_numivs = FUNC_43(
     FUNC_30(0) |
     FUNC_29(VAR_15) |
     FUNC_20(VAR_29) |
     FUNC_18(VAR_29 == VAR_2 ? 1 : 0) |
     FUNC_19(VAR_18->blkcipher.cipher_mode) |
     FUNC_17(VAR_18->hmac.auth_mode) |
     FUNC_22(VAR_43) |
     FUNC_24(VAR_18->blkcipher.iv_len / 2) |
     FUNC_28(0));
 VAR_23->sec_cpl.ivgen_hdrlen = FUNC_43(
     FUNC_23(0) |
     FUNC_27(0) | FUNC_25(0) | FUNC_26(0) |
     FUNC_16(0) | FUNC_21(VAR_46));

 VAR_23->key_ctx.ctx_hdr = VAR_18->blkcipher.key_ctx_hdr;
 switch (VAR_21->crd_alg) {
 case 130:
  if (VAR_21->crd_flags & VAR_5)
   FUNC_44(VAR_23->key_ctx.key, VAR_18->blkcipher.enckey,
       VAR_18->blkcipher.key_len);
  else
   FUNC_44(VAR_23->key_ctx.key, VAR_18->blkcipher.deckey,
       VAR_18->blkcipher.key_len);
  break;
 case 129:
  FUNC_44(VAR_23->key_ctx.key, VAR_18->blkcipher.enckey,
      VAR_18->blkcipher.key_len);
  break;
 case 128:
  VAR_28 = VAR_18->blkcipher.key_len / 2;
  FUNC_44(VAR_23->key_ctx.key, VAR_18->blkcipher.enckey + VAR_28,
      VAR_28);
  if (VAR_21->crd_flags & VAR_5)
   FUNC_44(VAR_23->key_ctx.key + VAR_28,
       VAR_18->blkcipher.enckey, VAR_28);
  else
   FUNC_44(VAR_23->key_ctx.key + VAR_28,
       VAR_18->blkcipher.deckey, VAR_28);
  break;
 }

 VAR_26 = VAR_23->key_ctx.key + FUNC_46(VAR_18->blkcipher.key_len, 16);
 FUNC_44(VAR_26, VAR_18->hmac.pads, VAR_34 * 2);

 VAR_26 = (char *)(VAR_23 + 1) + VAR_27;
 FUNC_39(VAR_17, VAR_26, VAR_45);
 VAR_26 += sizeof(struct cpl_rx_phys_dsgl) + VAR_46;
 FUNC_44(VAR_26, VAR_22, VAR_18->blkcipher.iv_len);
 VAR_26 += VAR_18->blkcipher.iv_len;
 if (VAR_33 != 0) {
  if (VAR_36 != 0) {
   FUNC_42(VAR_19->crp_flags, VAR_19->crp_buf,
       VAR_20->crd_skip, VAR_36, VAR_26);
   VAR_26 += VAR_36;
  }
  FUNC_42(VAR_19->crp_flags, VAR_19->crp_buf, VAR_21->crd_skip,
      VAR_21->crd_len, VAR_26);
  VAR_26 += VAR_21->crd_len;
  if (VAR_29 == VAR_1)
   FUNC_42(VAR_19->crp_flags, VAR_19->crp_buf,
       VAR_20->crd_inject, VAR_32, VAR_26);
 } else
  FUNC_40(VAR_17, VAR_26, VAR_47);


 FUNC_49(VAR_17->adapter, VAR_24);

 return (0);
}
