
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int authDataLength; int cryptDataLength; } ;
union authctx {TYPE_2__ aes_cbc_mac_ctx; } ;
typedef int uint8_t ;
struct enc_xform {int (* setkey ) (int **,int ,int ) ;int (* zerokey ) (int **) ;int (* decrypt ) (int *,char*) ;int (* reinit ) (int *,char*) ;int (* encrypt ) (int *,char*) ;} ;
struct cryptop {int crp_etype; int crp_buf; int crp_flags; } ;
struct cryptodesc {int crd_flags; int crd_len; scalar_t__ crd_skip; scalar_t__ crd_inject; int crd_iv; } ;
struct TYPE_3__ {int key_len; int enckey; } ;
struct ccr_session {TYPE_1__ blkcipher; } ;
struct auth_hash {int ctxsize; int (* Final ) (char*,union authctx*) ;int (* Update ) (union authctx*,char*,int) ;int (* Reinit ) (union authctx*,char*,int) ;int (* Setkey ) (union authctx*,int ,int ) ;int (* Init ) (union authctx*) ;} ;
typedef int iv ;
typedef int digest2 ;
typedef int digest ;
typedef int block ;


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
 int VAR_11 ;
 int FUNC_0 (char*,int,int ) ;
 struct auth_hash VAR_12 ;
 struct auth_hash VAR_13 ;
 struct auth_hash VAR_14 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int,char*) ;
 int FUNC_3 (int ,int ,scalar_t__,int,char*) ;
 int FUNC_4 (struct cryptop*) ;
 struct enc_xform VAR_15 ;
 int FUNC_5 (union authctx*,int ) ;
 int FUNC_6 (int,int) ;
 union authctx* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (union authctx*,int ,int ) ;
 int FUNC_10 (union authctx*) ;
 int FUNC_11 (union authctx*,char*,int) ;
 int FUNC_12 (char*,union authctx*) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int **) ;
 int FUNC_16 (union authctx*,int ,int ) ;
 int FUNC_17 (int **,int ,int ) ;
 int FUNC_18 (union authctx*,char*,int) ;
 int FUNC_19 (union authctx*,char*,int) ;
 int FUNC_20 (int *,char*) ;
 int FUNC_21 (union authctx*,char*,int) ;
 int FUNC_22 (int *,char*) ;
 int FUNC_23 (int *,char*) ;
 scalar_t__ FUNC_24 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_25(struct ccr_session *VAR_16, struct cryptop *VAR_17,
    struct cryptodesc *VAR_18, struct cryptodesc *VAR_19)
{
 struct auth_hash *VAR_20;
 struct enc_xform *VAR_21;
 union authctx *VAR_22;
 uint8_t *VAR_23;
 char VAR_24[VAR_2];
 char VAR_25[VAR_0];
 char VAR_26[VAR_1];
 int VAR_27, VAR_28, VAR_29;

 VAR_22 = ((void*)0);
 VAR_23 = ((void*)0);


 switch (VAR_16->blkcipher.key_len) {
 case 16:
  VAR_20 = &VAR_12;
  break;
 case 24:
  VAR_20 = &VAR_13;
  break;
 case 32:
  VAR_20 = &VAR_14;
  break;
 default:
  VAR_27 = VAR_7;
  goto out;
 }
 VAR_22 = FUNC_7(VAR_20->ctxsize, VAR_10, VAR_11);
 if (VAR_22 == ((void*)0)) {
  VAR_27 = VAR_8;
  goto out;
 }
 VAR_20->Init(VAR_22);
 VAR_20->Setkey(VAR_22, VAR_16->blkcipher.enckey, VAR_16->blkcipher.key_len);


 VAR_21 = &VAR_15;
 VAR_27 = VAR_21->setkey(&VAR_23, VAR_16->blkcipher.enckey,
     VAR_16->blkcipher.key_len);
 if (VAR_27)
  goto out;

 if (VAR_19->crd_flags & VAR_3) {
  if (VAR_19->crd_flags & VAR_4)
   FUNC_8(VAR_26, VAR_19->crd_iv, VAR_1);
  else
   FUNC_0(VAR_26, VAR_1, 0);
  if ((VAR_19->crd_flags & VAR_5) == 0)
   FUNC_2(VAR_17->crp_flags, VAR_17->crp_buf,
       VAR_19->crd_inject, VAR_1, VAR_26);
 } else {
  if (VAR_19->crd_flags & VAR_4)
   FUNC_8(VAR_26, VAR_19->crd_iv, VAR_1);
  else
   FUNC_3(VAR_17->crp_flags, VAR_17->crp_buf,
       VAR_19->crd_inject, VAR_1, VAR_26);
 }

 VAR_22->aes_cbc_mac_ctx.authDataLength = VAR_18->crd_len;
 VAR_22->aes_cbc_mac_ctx.cryptDataLength = VAR_19->crd_len;
 VAR_20->Reinit(VAR_22, VAR_26, sizeof(VAR_26));


 for (VAR_28 = 0; VAR_28 < VAR_18->crd_len; VAR_28 += sizeof(VAR_24)) {
  VAR_29 = FUNC_6(VAR_18->crd_len - VAR_28, sizeof(VAR_24));
  FUNC_3(VAR_17->crp_flags, VAR_17->crp_buf, VAR_18->crd_skip +
      VAR_28, VAR_29, VAR_24);
  FUNC_1(VAR_24 + VAR_29, sizeof(VAR_24) - VAR_29);
  VAR_20->Update(VAR_22, VAR_24, sizeof(VAR_24));
 }

 VAR_21->reinit(VAR_23, VAR_26);


 for (VAR_28 = 0; VAR_28 < VAR_19->crd_len; VAR_28 += sizeof(VAR_24)) {
  VAR_29 = FUNC_6(VAR_19->crd_len - VAR_28, sizeof(VAR_24));
  FUNC_3(VAR_17->crp_flags, VAR_17->crp_buf, VAR_19->crd_skip +
      VAR_28, VAR_29, VAR_24);
  FUNC_1(VAR_24 + VAR_29, sizeof(VAR_24) - VAR_29);
  if (VAR_19->crd_flags & VAR_3) {
   VAR_20->Update(VAR_22, VAR_24, VAR_29);
   VAR_21->encrypt(VAR_23, VAR_24);
   FUNC_2(VAR_17->crp_flags, VAR_17->crp_buf,
       VAR_19->crd_skip + VAR_28, VAR_29, VAR_24);
  } else {
   VAR_21->decrypt(VAR_23, VAR_24);
   VAR_20->Update(VAR_22, VAR_24, VAR_29);
  }
 }


 VAR_20->Final(VAR_25, VAR_22);


 if (VAR_19->crd_flags & VAR_3) {
  FUNC_2(VAR_17->crp_flags, VAR_17->crp_buf, VAR_18->crd_inject,
      sizeof(VAR_25), VAR_25);
  VAR_27 = 0;
 } else {
  char VAR_30[VAR_9];

  FUNC_3(VAR_17->crp_flags, VAR_17->crp_buf, VAR_18->crd_inject,
      sizeof(VAR_30), VAR_30);
  if (FUNC_24(VAR_25, VAR_30, sizeof(VAR_25)) == 0) {
   VAR_27 = 0;


   VAR_21->reinit(VAR_23, VAR_26);
   for (VAR_28 = 0; VAR_28 < VAR_19->crd_len; VAR_28 += sizeof(VAR_24)) {
    VAR_29 = FUNC_6(VAR_19->crd_len - VAR_28, sizeof(VAR_24));
    FUNC_3(VAR_17->crp_flags, VAR_17->crp_buf,
        VAR_19->crd_skip + VAR_28, VAR_29, VAR_24);
    FUNC_1(VAR_24 + VAR_29, sizeof(VAR_24) - VAR_29);
    VAR_21->decrypt(VAR_23, VAR_24);
    FUNC_2(VAR_17->crp_flags, VAR_17->crp_buf,
        VAR_19->crd_skip + VAR_28, VAR_29, VAR_24);
   }
  } else
   VAR_27 = VAR_6;
 }

 VAR_21->zerokey(&VAR_23);
out:
 if (VAR_22 != ((void*)0)) {
  FUNC_9(VAR_22, 0, VAR_20->ctxsize);
  FUNC_5(VAR_22, VAR_10);
 }
 VAR_17->crp_etype = VAR_27;
 FUNC_4(VAR_17);
}
