
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct enc_xform {int (* setkey ) (int **,int ,int ) ;int (* zerokey ) (int **) ;int (* decrypt ) (int *,char*) ;int (* encrypt ) (int *,char*) ;int (* reinit ) (int *,char*) ;} ;
struct cryptop {int crp_etype; int crp_buf; int crp_flags; } ;
struct cryptodesc {int crd_flags; int crd_len; scalar_t__ crd_skip; scalar_t__ crd_inject; int crd_iv; } ;
struct TYPE_2__ {int key_len; int enckey; } ;
struct ccr_session {TYPE_1__ blkcipher; } ;
struct auth_hash {int ctxsize; int (* Final ) (char*,void*) ;int (* Update ) (void*,char*,int) ;int (* Reinit ) (void*,char*,int) ;int (* Setkey ) (void*,int ,int ) ;int (* Init ) (void*) ;} ;
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
 int FUNC_0 (char*,int,int ) ;
 struct auth_hash VAR_11 ;
 struct auth_hash VAR_12 ;
 struct auth_hash VAR_13 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int,char*) ;
 int FUNC_3 (int ,int ,scalar_t__,int,char*) ;
 int FUNC_4 (struct cryptop*) ;
 struct enc_xform VAR_14 ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 void* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (void*,int ,int ) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*,char*,int) ;
 int FUNC_13 (char*,void*) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int **) ;
 int FUNC_16 (void*,int ,int ) ;
 int FUNC_17 (int **,int ,int ) ;
 int FUNC_18 (void*,char*,int) ;
 int FUNC_19 (void*,char*,int) ;
 int FUNC_20 (int *,char*) ;
 int FUNC_21 (int *,char*) ;
 int FUNC_22 (void*,char*,int) ;
 int FUNC_23 (void*,char*,int) ;
 scalar_t__ FUNC_24 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_25(struct ccr_session *VAR_15, struct cryptop *VAR_16,
    struct cryptodesc *VAR_17, struct cryptodesc *VAR_18)
{
 struct auth_hash *VAR_19;
 struct enc_xform *VAR_20;
 void *VAR_21;
 uint8_t *VAR_22;
 char VAR_23[VAR_7];
 char VAR_24[VAR_8];
 char VAR_25[VAR_0];
 int VAR_26, VAR_27, VAR_28;

 VAR_21 = ((void*)0);
 VAR_22 = ((void*)0);


 switch (VAR_15->blkcipher.key_len) {
 case 16:
  VAR_19 = &VAR_11;
  break;
 case 24:
  VAR_19 = &VAR_12;
  break;
 case 32:
  VAR_19 = &VAR_13;
  break;
 default:
  VAR_26 = VAR_5;
  goto out;
 }
 VAR_21 = FUNC_8(VAR_19->ctxsize, VAR_9, VAR_10);
 if (VAR_21 == ((void*)0)) {
  VAR_26 = VAR_6;
  goto out;
 }
 VAR_19->Init(VAR_21);
 VAR_19->Setkey(VAR_21, VAR_15->blkcipher.enckey, VAR_15->blkcipher.key_len);


 VAR_20 = &VAR_14;
 VAR_26 = VAR_20->setkey(&VAR_22, VAR_15->blkcipher.enckey,
     VAR_15->blkcipher.key_len);
 if (VAR_26)
  goto out;





 if (VAR_18->crd_flags & VAR_1) {
  if (VAR_18->crd_flags & VAR_2)
   FUNC_9(VAR_25, VAR_18->crd_iv, 12);
  else
   FUNC_0(VAR_25, 12, 0);
  if ((VAR_18->crd_flags & VAR_3) == 0)
   FUNC_2(VAR_16->crp_flags, VAR_16->crp_buf,
       VAR_18->crd_inject, 12, VAR_25);
 } else {
  if (VAR_18->crd_flags & VAR_2)
   FUNC_9(VAR_25, VAR_18->crd_iv, 12);
  else
   FUNC_3(VAR_16->crp_flags, VAR_16->crp_buf,
       VAR_18->crd_inject, 12, VAR_25);
 }
 *(uint32_t *)&VAR_25[12] = FUNC_6(1);

 VAR_19->Reinit(VAR_21, VAR_25, sizeof(VAR_25));


 for (VAR_27 = 0; VAR_27 < VAR_17->crd_len; VAR_27 += sizeof(VAR_23)) {
  VAR_28 = FUNC_7(VAR_17->crd_len - VAR_27, sizeof(VAR_23));
  FUNC_3(VAR_16->crp_flags, VAR_16->crp_buf, VAR_17->crd_skip +
      VAR_27, VAR_28, VAR_23);
  FUNC_1(VAR_23 + VAR_28, sizeof(VAR_23) - VAR_28);
  VAR_19->Update(VAR_21, VAR_23, sizeof(VAR_23));
 }

 VAR_20->reinit(VAR_22, VAR_25);


 for (VAR_27 = 0; VAR_27 < VAR_18->crd_len; VAR_27 += sizeof(VAR_23)) {
  VAR_28 = FUNC_7(VAR_18->crd_len - VAR_27, sizeof(VAR_23));
  FUNC_3(VAR_16->crp_flags, VAR_16->crp_buf, VAR_18->crd_skip +
      VAR_27, VAR_28, VAR_23);
  FUNC_1(VAR_23 + VAR_28, sizeof(VAR_23) - VAR_28);
  if (VAR_18->crd_flags & VAR_1) {
   VAR_20->encrypt(VAR_22, VAR_23);
   VAR_19->Update(VAR_21, VAR_23, VAR_28);
   FUNC_2(VAR_16->crp_flags, VAR_16->crp_buf,
       VAR_18->crd_skip + VAR_27, VAR_28, VAR_23);
  } else {
   VAR_19->Update(VAR_21, VAR_23, VAR_28);
  }
 }


 FUNC_1(VAR_23, sizeof(VAR_23));
 ((uint32_t *)VAR_23)[1] = FUNC_6(VAR_17->crd_len * 8);
 ((uint32_t *)VAR_23)[3] = FUNC_6(VAR_18->crd_len * 8);
 VAR_19->Update(VAR_21, VAR_23, sizeof(VAR_23));


 VAR_19->Final(VAR_24, VAR_21);


 if (VAR_18->crd_flags & VAR_1) {
  FUNC_2(VAR_16->crp_flags, VAR_16->crp_buf, VAR_17->crd_inject,
      sizeof(VAR_24), VAR_24);
  VAR_26 = 0;
 } else {
  char VAR_29[VAR_8];

  FUNC_3(VAR_16->crp_flags, VAR_16->crp_buf, VAR_17->crd_inject,
      sizeof(VAR_29), VAR_29);
  if (FUNC_24(VAR_24, VAR_29, sizeof(VAR_24)) == 0) {
   VAR_26 = 0;


   for (VAR_27 = 0; VAR_27 < VAR_18->crd_len; VAR_27 += sizeof(VAR_23)) {
    VAR_28 = FUNC_7(VAR_18->crd_len - VAR_27, sizeof(VAR_23));
    FUNC_3(VAR_16->crp_flags, VAR_16->crp_buf,
        VAR_18->crd_skip + VAR_27, VAR_28, VAR_23);
    FUNC_1(VAR_23 + VAR_28, sizeof(VAR_23) - VAR_28);
    VAR_20->decrypt(VAR_22, VAR_23);
    FUNC_2(VAR_16->crp_flags, VAR_16->crp_buf,
        VAR_18->crd_skip + VAR_27, VAR_28, VAR_23);
   }
  } else
   VAR_26 = VAR_4;
 }

 VAR_20->zerokey(&VAR_22);
out:
 if (VAR_21 != ((void*)0)) {
  FUNC_10(VAR_21, 0, VAR_19->ctxsize);
  FUNC_5(VAR_21, VAR_9);
 }
 VAR_16->crp_etype = VAR_26;
 FUNC_4(VAR_16);
}
