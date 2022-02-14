
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u_int ;
struct wrqe {int dummy; } ;
struct cryptop {int crp_buf; int crp_flags; struct cryptodesc* crp_desc; } ;
struct cryptodesc {scalar_t__ crd_len; int crd_skip; } ;
struct TYPE_7__ {void* ctx_hdr; int key; } ;
struct TYPE_6__ {void* ivgen_hdrlen; void* seqno_numivs; void* cipherstop_lo_authinsert; void* pldlen; void* op_ivinsrtofst; } ;
struct chcr_wr {TYPE_2__ key_ctx; TYPE_1__ sec_cpl; } ;
struct ccr_softc {int adapter; int tx_channel_id; int stats_wr_nomem; int txq; TYPE_4__* sg_ulptx; int sg_crp; } ;
struct TYPE_8__ {scalar_t__ partial_digest_len; int mk_size; int pads; int auth_mode; struct auth_hash* auth_hash; } ;
struct ccr_session {scalar_t__ mode; TYPE_3__ hmac; } ;
struct auth_hash {scalar_t__ hashsize; scalar_t__ blocksize; } ;
struct _key_ctx {int dummy; } ;
struct TYPE_9__ {int sg_nseg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 struct wrqe* FUNC_24 (scalar_t__,int ) ;
 int FUNC_25 (struct ccr_softc*,struct chcr_wr*,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__,struct cryptop*) ;
 int FUNC_26 (int) ;
 scalar_t__ FUNC_27 (scalar_t__,scalar_t__) ;
 int FUNC_28 (struct ccr_softc*,char*,int) ;
 int FUNC_29 (int ,int ,int ,int,char*) ;
 void* FUNC_30 (int) ;
 int FUNC_31 (int) ;
 int FUNC_32 (int ,int ,scalar_t__) ;
 int FUNC_33 (struct chcr_wr*,int ,scalar_t__) ;
 scalar_t__ FUNC_34 (scalar_t__,int) ;
 int FUNC_35 (TYPE_4__*,int ,int ,scalar_t__) ;
 int FUNC_36 (TYPE_4__*) ;
 int FUNC_37 (int ,struct wrqe*) ;
 struct chcr_wr* FUNC_38 (struct wrqe*) ;

__attribute__((used)) static int
FUNC_39(struct ccr_softc *VAR_12, struct ccr_session *VAR_13, struct cryptop *VAR_14)
{
 struct chcr_wr *VAR_15;
 struct wrqe *VAR_16;
 struct auth_hash *VAR_17;
 struct cryptodesc *VAR_18;
 char *VAR_19;
 u_int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 u_int VAR_25, VAR_26, VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31;

 VAR_18 = VAR_14->crp_desc;


 if (VAR_18->crd_len > VAR_6)
  return (VAR_3);

 VAR_17 = VAR_13->hmac.auth_hash;

 if (VAR_13->mode == VAR_5) {
  VAR_31 = 1;
  VAR_25 = VAR_9;
 } else {
  VAR_31 = 0;
  VAR_25 = VAR_8;
 }


 VAR_27 = FUNC_34(VAR_13->hmac.partial_digest_len, 16);





 VAR_22 = VAR_27;
 if (VAR_31)
  VAR_22 += VAR_27;
 VAR_20 = VAR_17->hashsize;
 VAR_23 = FUNC_0(VAR_22);

 if (VAR_18->crd_len == 0) {
  VAR_26 = VAR_17->blocksize;
  VAR_29 = 0;
  VAR_30 = 0;
 } else if (FUNC_27(VAR_23, VAR_18->crd_len)) {
  VAR_26 = VAR_18->crd_len;
  VAR_29 = 0;
  VAR_30 = 0;
 } else {
  VAR_26 = 0;
  FUNC_36(VAR_12->sg_ulptx);
  VAR_28 = FUNC_35(VAR_12->sg_ulptx, VAR_12->sg_crp,
      VAR_18->crd_skip, VAR_18->crd_len);
  if (VAR_28)
   return (VAR_28);
  VAR_29 = VAR_12->sg_ulptx->sg_nseg;
  VAR_30 = FUNC_26(VAR_29);
 }

 VAR_24 = FUNC_34(VAR_23, 16) + FUNC_34(VAR_26, 16) + VAR_30;
 if (VAR_24 > VAR_11)
  return (VAR_3);
 VAR_16 = FUNC_24(VAR_24, VAR_12->txq);
 if (VAR_16 == ((void*)0)) {
  VAR_12->stats_wr_nomem++;
  return (VAR_4);
 }
 VAR_15 = FUNC_38(VAR_16);
 FUNC_33(VAR_15, 0, VAR_24);

 FUNC_25(VAR_12, VAR_15, VAR_22, VAR_24, VAR_26, VAR_30,
     VAR_20, VAR_14);


 VAR_15->sec_cpl.op_ivinsrtofst = FUNC_30(
     FUNC_6(VAR_1) |
     FUNC_8(VAR_12->tx_channel_id) |
     FUNC_1(0) | FUNC_9(1) |
     FUNC_4(2) | FUNC_7(0) |
     FUNC_5(0));

 VAR_15->sec_cpl.pldlen = FUNC_30(VAR_18->crd_len == 0 ? VAR_17->blocksize :
     VAR_18->crd_len);

 VAR_15->sec_cpl.cipherstop_lo_authinsert = FUNC_30(
     FUNC_2(1) | FUNC_3(0));


 VAR_15->sec_cpl.seqno_numivs = FUNC_30(
     FUNC_23(0) |
     FUNC_22(VAR_10) |
     FUNC_17(VAR_7) |
     FUNC_16(VAR_13->hmac.auth_mode) |
     FUNC_18(VAR_25));
 VAR_15->sec_cpl.ivgen_hdrlen = FUNC_30(
     FUNC_19(0) |
     FUNC_21(VAR_18->crd_len == 0 ? 1 : 0) | FUNC_20(1));

 FUNC_32(VAR_15->key_ctx.key, VAR_13->hmac.pads, VAR_22);


 VAR_21 = (sizeof(struct _key_ctx) + VAR_22) / 16;
 VAR_15->key_ctx.ctx_hdr = FUNC_30(FUNC_11(VAR_21) |
     FUNC_13(VAR_31) |
     FUNC_14(1) |
     FUNC_10(VAR_0) |
     FUNC_12(VAR_13->hmac.mk_size) | FUNC_15(1));

 VAR_19 = (char *)(VAR_15 + 1) + VAR_22 + VAR_2;
 if (VAR_18->crd_len == 0) {
  VAR_19[0] = 0x80;
  if (VAR_13->mode == VAR_5)
   *(uint64_t *)(VAR_19 + VAR_17->blocksize - sizeof(uint64_t)) =
       FUNC_31(VAR_17->blocksize << 3);
 } else if (VAR_26 != 0)
  FUNC_29(VAR_14->crp_flags, VAR_14->crp_buf, VAR_18->crd_skip,
      VAR_18->crd_len, VAR_19);
 else
  FUNC_28(VAR_12, VAR_19, VAR_29);


 FUNC_37(VAR_12->adapter, VAR_16);

 return (0);
}
