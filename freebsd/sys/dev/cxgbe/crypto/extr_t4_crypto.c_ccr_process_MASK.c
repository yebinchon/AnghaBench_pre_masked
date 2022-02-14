
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cryptop {int crp_etype; int crp_session; struct cryptodesc* crp_desc; } ;
struct cryptodesc {int crd_flags; int crd_klen; int crd_key; int crd_alg; struct cryptodesc* crd_next; int crd_len; } ;
struct ccr_softc {int lock; int stats_process_error; int stats_inflight; int stats_ccm_decrypt; int stats_ccm_encrypt; int stats_sw_fallback; int stats_gcm_decrypt; int stats_gcm_encrypt; int stats_authenc_decrypt; int stats_authenc_encrypt; int stats_blkcipher_decrypt; int stats_blkcipher_encrypt; int stats_hmac; int stats_hash; int stats_sglist_error; int sg_crp; } ;
struct TYPE_4__ {int ghash_h; } ;
struct TYPE_3__ {int pads; int partial_digest_len; int auth_hash; } ;
struct ccr_session {int mode; int pending; TYPE_2__ gmac; TYPE_1__ hmac; } ;
typedef int device_t ;





 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ccr_session*,int ,int ,int ) ;
 int FUNC_2 (struct ccr_softc*,struct ccr_session*,struct cryptop*,struct cryptodesc*,struct cryptodesc*) ;
 int FUNC_3 (struct ccr_softc*,struct ccr_session*,struct cryptop*) ;
 int FUNC_4 (struct ccr_softc*,struct ccr_session*,struct cryptop*,struct cryptodesc*,struct cryptodesc*) ;
 int FUNC_5 (struct ccr_session*,struct cryptop*,struct cryptodesc*,struct cryptodesc*) ;
 int FUNC_6 (struct ccr_softc*,struct ccr_session*,struct cryptop*,struct cryptodesc*,struct cryptodesc*) ;
 int FUNC_7 (struct ccr_session*,struct cryptop*,struct cryptodesc*,struct cryptodesc*) ;
 int FUNC_8 (struct ccr_softc*,struct ccr_session*,struct cryptop*) ;
 int FUNC_9 (int ,struct cryptop*) ;
 int FUNC_10 (struct cryptop*) ;
 struct ccr_session* FUNC_11 (int ) ;
 struct ccr_softc* FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_6, struct cryptop *VAR_7, int VAR_8)
{
 struct ccr_softc *VAR_9;
 struct ccr_session *VAR_10;
 struct cryptodesc *VAR_11, *VAR_12, *VAR_13;
 int VAR_14;

 if (VAR_7 == ((void*)0))
  return (VAR_4);

 VAR_11 = VAR_7->crp_desc;
 VAR_10 = FUNC_11(VAR_7->crp_session);
 VAR_9 = FUNC_12(VAR_6);

 FUNC_13(&VAR_9->lock);
 VAR_14 = FUNC_9(VAR_9->sg_crp, VAR_7);
 if (VAR_14) {
  VAR_9->stats_sglist_error++;
  goto out;
 }

 switch (VAR_10->mode) {
 case 129:
  VAR_14 = FUNC_8(VAR_9, VAR_10, VAR_7);
  if (VAR_14 == 0)
   VAR_9->stats_hash++;
  break;
 case 128:
  if (VAR_11->crd_flags & VAR_1)
   FUNC_16(VAR_10->hmac.auth_hash,
       VAR_10->hmac.partial_digest_len, VAR_11->crd_key,
       VAR_11->crd_klen, VAR_10->hmac.pads);
  VAR_14 = FUNC_8(VAR_9, VAR_10, VAR_7);
  if (VAR_14 == 0)
   VAR_9->stats_hmac++;
  break;
 case 135:
  if (VAR_11->crd_flags & VAR_1) {
   VAR_14 = FUNC_0(VAR_11->crd_alg,
       VAR_11->crd_klen);
   if (VAR_14)
    break;
   FUNC_1(VAR_10, VAR_11->crd_alg, VAR_11->crd_key,
       VAR_11->crd_klen);
  }
  VAR_14 = FUNC_3(VAR_9, VAR_10, VAR_7);
  if (VAR_14 == 0) {
   if (VAR_11->crd_flags & VAR_0)
    VAR_9->stats_blkcipher_encrypt++;
   else
    VAR_9->stats_blkcipher_decrypt++;
  }
  break;
 case 136:
  VAR_14 = 0;
  switch (VAR_11->crd_alg) {
  case 133:
  case 132:
  case 131:

   VAR_13 = VAR_11;
   VAR_12 = VAR_11->crd_next;
   if (!(VAR_13->crd_flags & VAR_0)) {
    VAR_14 = VAR_4;
    break;
   }
   break;
  default:
   VAR_12 = VAR_11;
   VAR_13 = VAR_11->crd_next;
   if (VAR_13->crd_flags & VAR_0) {
    VAR_14 = VAR_4;
    break;
   }
   break;
  }
  if (VAR_14)
   break;
  if (VAR_12->crd_flags & VAR_1)
   FUNC_16(VAR_10->hmac.auth_hash,
       VAR_10->hmac.partial_digest_len, VAR_12->crd_key,
       VAR_12->crd_klen, VAR_10->hmac.pads);
  if (VAR_13->crd_flags & VAR_1) {
   VAR_14 = FUNC_0(VAR_13->crd_alg,
       VAR_13->crd_klen);
   if (VAR_14)
    break;
   FUNC_1(VAR_10, VAR_13->crd_alg, VAR_13->crd_key,
       VAR_13->crd_klen);
  }
  VAR_14 = FUNC_2(VAR_9, VAR_10, VAR_7, VAR_12, VAR_13);
  if (VAR_14 == 0) {
   if (VAR_13->crd_flags & VAR_0)
    VAR_9->stats_authenc_encrypt++;
   else
    VAR_9->stats_authenc_decrypt++;
  }
  break;
 case 130:
  VAR_14 = 0;
  if (VAR_11->crd_alg == VAR_3) {
   VAR_13 = VAR_11;
   VAR_12 = VAR_11->crd_next;
  } else {
   VAR_12 = VAR_11;
   VAR_13 = VAR_11->crd_next;
  }
  if (VAR_12->crd_flags & VAR_1)
   FUNC_15(VAR_12->crd_key, VAR_12->crd_klen,
       VAR_10->gmac.ghash_h);
  if (VAR_13->crd_flags & VAR_1) {
   VAR_14 = FUNC_0(VAR_13->crd_alg,
       VAR_13->crd_klen);
   if (VAR_14)
    break;
   FUNC_1(VAR_10, VAR_13->crd_alg, VAR_13->crd_key,
       VAR_13->crd_klen);
  }
  if (VAR_13->crd_len == 0) {
   FUNC_14(&VAR_9->lock);
   FUNC_7(VAR_10, VAR_7, VAR_12, VAR_13);
   return (0);
  }
  VAR_14 = FUNC_6(VAR_9, VAR_10, VAR_7, VAR_12, VAR_13);
  if (VAR_14 == VAR_5) {
   VAR_9->stats_sw_fallback++;
   FUNC_14(&VAR_9->lock);
   FUNC_7(VAR_10, VAR_7, VAR_12, VAR_13);
   return (0);
  }
  if (VAR_14 == 0) {
   if (VAR_13->crd_flags & VAR_0)
    VAR_9->stats_gcm_encrypt++;
   else
    VAR_9->stats_gcm_decrypt++;
  }
  break;
 case 134:
  VAR_14 = 0;
  if (VAR_11->crd_alg == VAR_2) {
   VAR_13 = VAR_11;
   VAR_12 = VAR_11->crd_next;
  } else {
   VAR_12 = VAR_11;
   VAR_13 = VAR_11->crd_next;
  }
  if (VAR_13->crd_flags & VAR_1) {
   VAR_14 = FUNC_0(VAR_13->crd_alg,
       VAR_13->crd_klen);
   if (VAR_14)
    break;
   FUNC_1(VAR_10, VAR_13->crd_alg, VAR_13->crd_key,
       VAR_13->crd_klen);
  }
  VAR_14 = FUNC_4(VAR_9, VAR_10, VAR_7, VAR_12, VAR_13);
  if (VAR_14 == VAR_5) {
   VAR_9->stats_sw_fallback++;
   FUNC_14(&VAR_9->lock);
   FUNC_5(VAR_10, VAR_7, VAR_12, VAR_13);
   return (0);
  }
  if (VAR_14 == 0) {
   if (VAR_13->crd_flags & VAR_0)
    VAR_9->stats_ccm_encrypt++;
   else
    VAR_9->stats_ccm_decrypt++;
  }
  break;
 }

 if (VAR_14 == 0) {
  VAR_10->pending++;
  VAR_9->stats_inflight++;
 } else
  VAR_9->stats_process_error++;

out:
 FUNC_14(&VAR_9->lock);

 if (VAR_14) {
  VAR_7->crp_etype = VAR_14;
  FUNC_10(VAR_7);
 }

 return (0);
}
