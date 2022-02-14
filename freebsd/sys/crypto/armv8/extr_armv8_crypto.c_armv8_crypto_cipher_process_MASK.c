
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fpu_kern_ctx {int dummy; } ;
struct cryptop {int crp_buf; int crp_flags; } ;
struct cryptodesc {int crd_flags; int crd_alg; int crd_len; int crd_skip; int crd_inject; int crd_iv; } ;
struct armv8_crypto_session {int algo; int dec_schedule; int rounds; int enc_schedule; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct fpu_kern_ctx*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,struct fpu_kern_ctx*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ,int ,int,int *,int *) ;
 int FUNC_4 (int ,int ,int,int *,int *,int *) ;
 int * FUNC_5 (struct cryptodesc*,struct cryptop*,int*) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ,int ,int ,int,int *) ;
 int FUNC_9 (int ,int ,int ,int,int *) ;
 int VAR_9 ;
 int FUNC_10 (int ,struct fpu_kern_ctx*,int) ;
 int FUNC_11 (int ,struct fpu_kern_ctx*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int
FUNC_15(struct armv8_crypto_session *VAR_10,
    struct cryptodesc *VAR_11, struct cryptop *VAR_12)
{
 struct fpu_kern_ctx *VAR_13;
 uint8_t *VAR_14;
 uint8_t VAR_15[VAR_0];
 int VAR_16, VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;

 VAR_18 = (VAR_11->crd_flags & VAR_1) == VAR_1;

 VAR_14 = FUNC_5(VAR_11, VAR_12, &VAR_16);
 if (VAR_14 == ((void*)0))
  return (VAR_5);

 VAR_20 = FUNC_13(0);
 if (!VAR_20) {
  FUNC_0(VAR_17, VAR_13);
  FUNC_10(VAR_9, VAR_13,
      VAR_7 | VAR_6);
 }

 if ((VAR_11->crd_flags & VAR_4) != 0) {
  FUNC_14("CRD_F_KEY_EXPLICIT");
 }

 switch (VAR_11->crd_alg) {
 case 128:
  VAR_19 = VAR_0;
  break;
 }


 if (VAR_18) {
  if ((VAR_11->crd_flags & VAR_2) != 0)
   FUNC_6(VAR_11->crd_iv, VAR_15, VAR_19);
  else
   FUNC_2(VAR_15, VAR_19, 0);

  if ((VAR_11->crd_flags & VAR_3) == 0)
   FUNC_8(VAR_12->crp_flags, VAR_12->crp_buf,
       VAR_11->crd_inject, VAR_19, VAR_15);
 } else {
  if ((VAR_11->crd_flags & VAR_2) != 0)
   FUNC_6(VAR_11->crd_iv, VAR_15, VAR_19);
  else
   FUNC_9(VAR_12->crp_flags, VAR_12->crp_buf,
       VAR_11->crd_inject, VAR_19, VAR_15);
 }


 switch (VAR_10->algo) {
 case 128:
  if (VAR_18)
   FUNC_4(VAR_10->rounds, VAR_10->enc_schedule,
       VAR_11->crd_len, VAR_14, VAR_14, VAR_15);
  else
   FUNC_3(VAR_10->rounds, VAR_10->dec_schedule,
       VAR_11->crd_len, VAR_14, VAR_15);
  break;
 }

 if (VAR_16)
  FUNC_8(VAR_12->crp_flags, VAR_12->crp_buf, VAR_11->crd_skip,
      VAR_11->crd_len, VAR_14);

 if (!VAR_20) {
  FUNC_11(VAR_9, VAR_13);
  FUNC_1(VAR_17, VAR_13);
 }
 if (VAR_16) {
  FUNC_7(VAR_14, VAR_11->crd_len);
  FUNC_12(VAR_14, VAR_8);
 }
 return (0);
}
