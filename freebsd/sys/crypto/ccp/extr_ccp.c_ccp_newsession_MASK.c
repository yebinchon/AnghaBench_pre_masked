
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cryptoini {int cri_alg; scalar_t__ cri_mlen; int cri_klen; int * cri_key; struct cryptoini* cri_next; } ;
struct ccp_softc {int valid_queues; int lock; int queues; scalar_t__ detaching; } ;
struct TYPE_6__ {int cipher_mode; unsigned int iv_len; } ;
struct TYPE_5__ {unsigned int auth_mode; unsigned int partial_digest_len; scalar_t__ hash_len; struct auth_hash* auth_hash; } ;
struct TYPE_4__ {scalar_t__ hash_len; } ;
struct ccp_session {unsigned int queue; int active; TYPE_3__ blkcipher; TYPE_2__ hmac; TYPE_1__ gmac; int mode; } ;
struct auth_hash {scalar_t__ hashsize; } ;
typedef enum ccp_aes_mode { ____Placeholder_ccp_aes_mode } ccp_aes_mode ;
typedef int device_t ;
typedef int crypto_session_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 struct auth_hash VAR_22 ;
 struct auth_hash VAR_23 ;
 struct auth_hash VAR_24 ;
 struct auth_hash VAR_25 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ccp_session*,int,int *,int ) ;
 int FUNC_3 (struct ccp_session*,int,int *,int ) ;
 struct ccp_session* FUNC_4 (int ) ;
 struct ccp_softc* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_26, crypto_session_t VAR_27, struct cryptoini *VAR_28)
{
 struct ccp_softc *VAR_29;
 struct ccp_session *VAR_30;
 struct auth_hash *VAR_31;
 struct cryptoini *VAR_32, *VAR_33, *VAR_34;
 enum ccp_aes_mode VAR_35;
 unsigned VAR_36, VAR_37;
 unsigned VAR_38;
 unsigned VAR_39;
 int VAR_40;
 bool VAR_41;

 if (VAR_28 == ((void*)0))
  return (VAR_11);

 VAR_30 = FUNC_4(VAR_27);

 VAR_41 = 0;
 VAR_34 = ((void*)0);
 VAR_33 = ((void*)0);
 VAR_31 = ((void*)0);

 VAR_36 = 0;
 VAR_35 = VAR_7;
 VAR_37 = 0;
 VAR_38 = 0;
 for (VAR_32 = VAR_28; VAR_32 != ((void*)0); VAR_32 = VAR_32->cri_next) {
  switch (VAR_32->cri_alg) {
  case 131:
  case 130:
  case 129:
  case 128:
  case 138:
  case 137:
  case 136:
   if (VAR_33)
    return (VAR_11);
   VAR_33 = VAR_32;
   switch (VAR_32->cri_alg) {
   case 131:
    VAR_31 = &VAR_22;
    VAR_36 = VAR_15;
    VAR_38 = VAR_16;
    break;
   case 130:
    VAR_31 = &VAR_23;
    VAR_36 = VAR_17;
    VAR_38 = VAR_18;
    break;
   case 129:
    VAR_31 = &VAR_24;
    VAR_36 = VAR_19;
    VAR_38 = VAR_21;
    break;
   case 128:
    VAR_31 = &VAR_25;
    VAR_36 = VAR_20;
    VAR_38 = VAR_21;
    break;
   case 138:
   case 137:
   case 136:
    VAR_41 = 1;



    break;
   }
   break;
  case 135:
  case 134:
  case 133:
  case 132:
   if (VAR_34)
    return (VAR_11);
   VAR_34 = VAR_32;
   switch (VAR_32->cri_alg) {
   case 135:
    VAR_35 = VAR_5;
    VAR_37 = VAR_0;
    break;
   case 134:
    VAR_35 = VAR_6;
    VAR_37 = VAR_0;
    break;
   case 133:
    VAR_35 = VAR_8;
    VAR_37 = VAR_1;
    break;
   case 132:
    VAR_35 = VAR_9;
    VAR_37 = VAR_0;
    break;
   }
   if (VAR_32->cri_key != ((void*)0)) {
    VAR_40 = FUNC_1(VAR_32->cri_alg,
        VAR_32->cri_klen);
    if (VAR_40 != 0)
     return (VAR_40);
   }
   break;
  default:
   return (VAR_11);
  }
 }
 if (VAR_41 != (VAR_35 == VAR_8))
  return (VAR_11);
 if (VAR_33 == ((void*)0) && VAR_34 == ((void*)0))
  return (VAR_11);
 if (VAR_33 != ((void*)0) && VAR_33->cri_key == ((void*)0))
  return (VAR_11);

 VAR_29 = FUNC_5(VAR_26);
 FUNC_6(&VAR_29->lock);
 if (VAR_29->detaching) {
  FUNC_7(&VAR_29->lock);
  return (VAR_12);
 }


 for (VAR_39 = 0; VAR_39 < FUNC_8(VAR_29->queues); VAR_39++)
  if ((VAR_29->valid_queues & (1 << VAR_39)) != 0)
   break;
 if (VAR_39 == FUNC_8(VAR_29->queues)) {
  FUNC_7(&VAR_29->lock);
  return (VAR_12);
 }
 VAR_30->queue = VAR_39;

 if (VAR_41)
  VAR_30->mode = VAR_13;
 else if (VAR_33 != ((void*)0) && VAR_34 != ((void*)0))
  VAR_30->mode = VAR_3;
 else if (VAR_33 != ((void*)0))
  VAR_30->mode = VAR_14;
 else {
  FUNC_0(VAR_34 != ((void*)0));
  VAR_30->mode = VAR_4;
 }
 if (VAR_41) {
  if (VAR_33->cri_mlen == 0)
   VAR_30->gmac.hash_len = VAR_2;
  else
   VAR_30->gmac.hash_len = VAR_33->cri_mlen;
 } else if (VAR_33 != ((void*)0)) {
  VAR_30->hmac.auth_hash = VAR_31;
  VAR_30->hmac.auth_mode = VAR_36;
  VAR_30->hmac.partial_digest_len = VAR_38;
  if (VAR_33->cri_mlen == 0)
   VAR_30->hmac.hash_len = VAR_31->hashsize;
  else
   VAR_30->hmac.hash_len = VAR_33->cri_mlen;
  FUNC_3(VAR_30, VAR_33->cri_alg, VAR_33->cri_key,
      VAR_33->cri_klen);
 }
 if (VAR_34 != ((void*)0)) {
  VAR_30->blkcipher.cipher_mode = VAR_35;
  VAR_30->blkcipher.iv_len = VAR_37;
  if (VAR_34->cri_key != ((void*)0))
   FUNC_2(VAR_30, VAR_34->cri_alg, VAR_34->cri_key,
       VAR_34->cri_klen);
 }

 VAR_30->active = 1;
 FUNC_7(&VAR_29->lock);

 return (0);
}
