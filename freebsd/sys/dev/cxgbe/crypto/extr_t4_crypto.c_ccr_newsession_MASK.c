
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct cryptoini {int cri_alg; scalar_t__ cri_mlen; int cri_klen; int * cri_key; struct cryptoini* cri_next; } ;
struct ccr_softc {int lock; scalar_t__ detaching; TYPE_4__* txq; TYPE_3__* rxq; } ;
struct TYPE_8__ {unsigned int cipher_mode; unsigned int iv_len; } ;
struct TYPE_14__ {unsigned int auth_mode; unsigned int mk_size; unsigned int partial_digest_len; scalar_t__ hash_len; int pads; struct auth_hash* auth_hash; } ;
struct TYPE_13__ {scalar_t__ hash_len; } ;
struct TYPE_12__ {scalar_t__ hash_len; int ghash_h; } ;
struct ccr_session {int active; TYPE_1__ blkcipher; TYPE_7__ hmac; TYPE_6__ ccm_mac; TYPE_5__ gmac; int mode; } ;
struct auth_hash {scalar_t__ hashsize; } ;
typedef int device_t ;
typedef int crypto_session_t ;
struct TYPE_11__ {int * adapter; } ;
struct TYPE_9__ {int * adapter; } ;
struct TYPE_10__ {TYPE_2__ iq; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 struct auth_hash VAR_34 ;
 struct auth_hash VAR_35 ;
 struct auth_hash VAR_36 ;
 struct auth_hash VAR_37 ;
 struct auth_hash VAR_38 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ccr_session*,int,int *,int ) ;
 int FUNC_3 (struct ccr_session*,int) ;
 struct ccr_session* FUNC_4 (int ) ;
 struct ccr_softc* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (struct auth_hash*,unsigned int,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_39, crypto_session_t VAR_40, struct cryptoini *VAR_41)
{
 struct ccr_softc *VAR_42;
 struct ccr_session *VAR_43;
 struct auth_hash *VAR_44;
 struct cryptoini *VAR_45, *VAR_46, *VAR_47;
 unsigned int VAR_48, VAR_49, VAR_50, VAR_51;
 unsigned int VAR_52;
 int VAR_53;
 bool VAR_54, VAR_55;

 if (VAR_41 == ((void*)0))
  return (VAR_12);

 VAR_54 = 0;
 VAR_55 = 0;
 VAR_47 = ((void*)0);
 VAR_46 = ((void*)0);
 VAR_44 = ((void*)0);
 VAR_48 = VAR_19;
 VAR_49 = VAR_30;
 VAR_50 = 0;
 VAR_51 = 0;
 VAR_52 = 0;
 for (VAR_45 = VAR_41; VAR_45 != ((void*)0); VAR_45 = VAR_45->cri_next) {
  switch (VAR_45->cri_alg) {
  case 137:
  case 135:
  case 133:
  case 131:
  case 129:
  case 136:
  case 134:
  case 132:
  case 130:
  case 128:
  case 146:
  case 145:
  case 144:
  case 141:
   if (VAR_46)
    return (VAR_12);
   VAR_46 = VAR_45;
   switch (VAR_45->cri_alg) {
   case 137:
   case 136:
    VAR_44 = &VAR_34;
    VAR_48 = VAR_20;
    VAR_51 = VAR_9;
    VAR_52 = VAR_31;
    break;
   case 135:
   case 134:
    VAR_44 = &VAR_35;
    VAR_48 = VAR_21;
    VAR_51 = VAR_10;
    VAR_52 = VAR_32;
    break;
   case 133:
   case 132:
    VAR_44 = &VAR_36;
    VAR_48 = VAR_22;
    VAR_51 = VAR_10;
    VAR_52 = VAR_32;
    break;
   case 131:
   case 130:
    VAR_44 = &VAR_37;
    VAR_48 = VAR_23;
    VAR_51 = VAR_11;
    VAR_52 = VAR_33;
    break;
   case 129:
   case 128:
    VAR_44 = &VAR_38;
    VAR_48 = VAR_24;
    VAR_51 = VAR_11;
    VAR_52 = VAR_33;
    break;
   case 146:
   case 145:
   case 144:
    VAR_54 = 1;
    VAR_48 = VAR_18;
    VAR_51 = VAR_8;
    break;
   case 141:
    VAR_48 = VAR_17;
    break;
   }
   switch (VAR_45->cri_alg) {
   case 136:
   case 134:
   case 132:
   case 130:
   case 128:
    VAR_55 = 1;
    break;
   }
   break;
  case 143:
  case 140:
  case 139:
  case 138:
  case 142:
   if (VAR_47)
    return (VAR_12);
   VAR_47 = VAR_45;
   switch (VAR_45->cri_alg) {
   case 143:
    VAR_49 = VAR_25;
    VAR_50 = VAR_0;
    break;
   case 140:
    VAR_49 = VAR_27;
    VAR_50 = VAR_0;
    break;
   case 139:
    VAR_49 = VAR_28;
    VAR_50 = VAR_3;
    break;
   case 138:
    VAR_49 = VAR_29;
    VAR_50 = VAR_0;
    break;
   case 142:
    VAR_49 = VAR_26;
    VAR_50 = VAR_2;
    break;
   }
   if (VAR_45->cri_key != ((void*)0)) {
    VAR_53 = FUNC_1(VAR_45->cri_alg,
        VAR_45->cri_klen);
    if (VAR_53)
     return (VAR_53);
   }
   break;
  default:
   return (VAR_12);
  }
 }
 if (VAR_54 != (VAR_49 == VAR_28))
  return (VAR_12);
 if ((VAR_48 == VAR_17) !=
     (VAR_49 == VAR_26))
  return (VAR_12);
 if (VAR_46 == ((void*)0) && VAR_47 == ((void*)0))
  return (VAR_12);
 if (VAR_46 != ((void*)0)) {
  if (VAR_55 || VAR_54 || VAR_48 == VAR_17) {
   if (VAR_46->cri_key == ((void*)0))
    return (VAR_12);
  } else {
   if (VAR_46->cri_key != ((void*)0))
    return (VAR_12);
  }
 }

 VAR_42 = FUNC_5(VAR_39);







 if (VAR_42->rxq->iq.adapter == ((void*)0) || VAR_42->txq->adapter == ((void*)0))
  return (VAR_13);

 FUNC_6(&VAR_42->lock);
 if (VAR_42->detaching) {
  FUNC_7(&VAR_42->lock);
  return (VAR_13);
 }

 VAR_43 = FUNC_4(VAR_40);

 if (VAR_54)
  VAR_43->mode = VAR_14;
 else if (VAR_49 == VAR_26)
  VAR_43->mode = VAR_7;
 else if (VAR_46 != ((void*)0) && VAR_47 != ((void*)0))
  VAR_43->mode = VAR_5;
 else if (VAR_46 != ((void*)0)) {
  if (VAR_55)
   VAR_43->mode = VAR_16;
  else
   VAR_43->mode = VAR_15;
 } else {
  FUNC_0(VAR_47 != ((void*)0));
  VAR_43->mode = VAR_6;
 }
 if (VAR_54) {
  if (VAR_46->cri_mlen == 0)
   VAR_43->gmac.hash_len = VAR_4;
  else
   VAR_43->gmac.hash_len = VAR_46->cri_mlen;
  FUNC_8(VAR_46->cri_key, VAR_46->cri_klen,
      VAR_43->gmac.ghash_h);
 } else if (VAR_48 == VAR_17) {
  if (VAR_46->cri_mlen == 0)
   VAR_43->ccm_mac.hash_len = VAR_1;
  else
   VAR_43->ccm_mac.hash_len = VAR_46->cri_mlen;
 } else if (VAR_46 != ((void*)0)) {
  VAR_43->hmac.auth_hash = VAR_44;
  VAR_43->hmac.auth_mode = VAR_48;
  VAR_43->hmac.mk_size = VAR_51;
  VAR_43->hmac.partial_digest_len = VAR_52;
  if (VAR_46->cri_mlen == 0)
   VAR_43->hmac.hash_len = VAR_44->hashsize;
  else
   VAR_43->hmac.hash_len = VAR_46->cri_mlen;
  if (VAR_55)
   FUNC_9(VAR_44, VAR_52,
       VAR_46->cri_key, VAR_46->cri_klen, VAR_43->hmac.pads);
  else
   FUNC_3(VAR_43, VAR_46->cri_alg);
 }
 if (VAR_47 != ((void*)0)) {
  VAR_43->blkcipher.cipher_mode = VAR_49;
  VAR_43->blkcipher.iv_len = VAR_50;
  if (VAR_47->cri_key != ((void*)0))
   FUNC_2(VAR_43, VAR_47->cri_alg, VAR_47->cri_key,
       VAR_47->cri_klen);
 }

 VAR_43->active = 1;
 FUNC_7(&VAR_42->lock);
 return (0);
}
