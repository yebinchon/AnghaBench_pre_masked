
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int tag ;
struct cryptop {int crp_buf; int crp_flags; } ;
struct cryptodesc {int crd_flags; int crd_alg; int crd_len; int crd_skip; int crd_inject; int crd_iv; int crd_klen; int crd_key; } ;
struct aesni_session {int algo; int rounds; int enc_schedule; int xts_schedule; int dec_schedule; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int *,int *,int,int,int,int ,int ) ;
 int FUNC_1 (int *,int *,int *,int *,int *,int,int,int,int ,int ) ;
 int FUNC_2 (int *,int *,int *,int *,int *,int,int,int,int ,int ) ;
 int FUNC_3 (int *,int *,int *,int *,int *,int,int,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,char*) ;
 int VAR_8 ;
 int * FUNC_5 (struct cryptodesc*,struct cryptop*,int*) ;
 int FUNC_6 (struct aesni_session*,int ,int ) ;
 int FUNC_7 (int ,int ,int,int *,int *) ;
 int FUNC_8 (int ,int ,int ,int,int *,int *,int *) ;
 int FUNC_9 (int ,int ,int,int *,int *,int *) ;
 int FUNC_10 (int ,int ,int,int *,int *,int *) ;
 int FUNC_11 (int ,int ,int ,int,int *,int *,int *) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int ,int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int ,int ,int ,int,int *) ;
 int FUNC_16 (int ,int ,int ,int,int *) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int ) ;

__attribute__((used)) static int
FUNC_19(struct aesni_session *VAR_9, struct cryptodesc *VAR_10,
 struct cryptodesc *VAR_11, struct cryptop *VAR_12)
{
 uint8_t VAR_13[VAR_0], VAR_14[VAR_7], *VAR_15, *VAR_16;
 int VAR_17, VAR_18;
 bool VAR_19, VAR_20, VAR_21;

 FUNC_4((VAR_9->algo != 129 &&
  VAR_9->algo != 131) || VAR_11 != ((void*)0),
     ("AES_NIST_GCM_16/AES_CCM_16  must include MAC descriptor"));

 VAR_18 = 0;
 VAR_16 = ((void*)0);

 VAR_15 = FUNC_5(VAR_10, VAR_12, &VAR_20);
 if (VAR_15 == ((void*)0))
  return (VAR_6);

 VAR_21 = 0;
 if (VAR_9->algo == 129 ||
     VAR_9->algo == 131) {
  VAR_16 = FUNC_5(VAR_11, VAR_12, &VAR_21);
  if (VAR_16 == ((void*)0)) {
   VAR_17 = VAR_6;
   goto out;
  }
 }

 VAR_17 = 0;
 VAR_19 = (VAR_10->crd_flags & VAR_1) == VAR_1;
 if ((VAR_10->crd_flags & VAR_4) != 0) {
  VAR_17 = FUNC_6(VAR_9, VAR_10->crd_key,
      VAR_10->crd_klen);
  if (VAR_17 != 0)
   goto out;
 }

 switch (VAR_10->crd_alg) {
 case 132:
 case 130:
  VAR_18 = VAR_0;
  break;
 case 128:
  VAR_18 = 8;
  break;
 case 129:
 case 131:
  VAR_18 = 12;
  break;
 }


 if (VAR_19) {
  if ((VAR_10->crd_flags & VAR_2) != 0)
   FUNC_13(VAR_10->crd_iv, VAR_13, VAR_18);
  else
   FUNC_12(VAR_13, VAR_18, 0);

  if ((VAR_10->crd_flags & VAR_3) == 0)
   FUNC_15(VAR_12->crp_flags, VAR_12->crp_buf,
       VAR_10->crd_inject, VAR_18, VAR_13);
 } else {
  if ((VAR_10->crd_flags & VAR_2) != 0)
   FUNC_13(VAR_10->crd_iv, VAR_13, VAR_18);
  else
   FUNC_16(VAR_12->crp_flags, VAR_12->crp_buf,
       VAR_10->crd_inject, VAR_18, VAR_13);
 }

 switch (VAR_9->algo) {
 case 132:
  if (VAR_19)
   FUNC_9(VAR_9->rounds, VAR_9->enc_schedule,
       VAR_10->crd_len, VAR_15, VAR_15, VAR_13);
  else
   FUNC_7(VAR_9->rounds, VAR_9->dec_schedule,
       VAR_10->crd_len, VAR_15, VAR_13);
  break;
 case 130:

  FUNC_10(VAR_9->rounds, VAR_9->enc_schedule,
      VAR_10->crd_len, VAR_15, VAR_15, VAR_13);
  break;
 case 128:
  if (VAR_19)
   FUNC_11(VAR_9->rounds, VAR_9->enc_schedule,
       VAR_9->xts_schedule, VAR_10->crd_len, VAR_15, VAR_15,
       VAR_13);
  else
   FUNC_8(VAR_9->rounds, VAR_9->dec_schedule,
       VAR_9->xts_schedule, VAR_10->crd_len, VAR_15, VAR_15,
       VAR_13);
  break;
 case 129:
  if (!VAR_19)
   FUNC_16(VAR_12->crp_flags, VAR_12->crp_buf,
       VAR_11->crd_inject, sizeof(VAR_14), VAR_14);
  else
   FUNC_14(VAR_14, sizeof VAR_14);

  if (VAR_19) {
   FUNC_3(VAR_15, VAR_15, VAR_16, VAR_13, VAR_14,
       VAR_10->crd_len, VAR_11->crd_len, VAR_18,
       VAR_9->enc_schedule, VAR_9->rounds);

   if (VAR_11 != ((void*)0))
    FUNC_15(VAR_12->crp_flags, VAR_12->crp_buf,
        VAR_11->crd_inject, sizeof(VAR_14), VAR_14);
  } else {
   if (!FUNC_2(VAR_15, VAR_15, VAR_16, VAR_13, VAR_14,
       VAR_10->crd_len, VAR_11->crd_len, VAR_18,
       VAR_9->enc_schedule, VAR_9->rounds))
    VAR_17 = VAR_5;
  }
  break;
 case 131:
  if (!VAR_19)
   FUNC_16(VAR_12->crp_flags, VAR_12->crp_buf,
       VAR_11->crd_inject, sizeof(VAR_14), VAR_14);
  else
   FUNC_14(VAR_14, sizeof VAR_14);
  if (VAR_19) {
   FUNC_1(VAR_15, VAR_15, VAR_16, VAR_13, VAR_14,
       VAR_10->crd_len, VAR_11->crd_len, VAR_18,
       VAR_9->enc_schedule, VAR_9->rounds);
   if (VAR_11 != ((void*)0))
    FUNC_15(VAR_12->crp_flags, VAR_12->crp_buf,
        VAR_11->crd_inject, sizeof(VAR_14), VAR_14);
  } else {
   if (!FUNC_0(VAR_15, VAR_15, VAR_16, VAR_13, VAR_14,
       VAR_10->crd_len, VAR_11->crd_len, VAR_18,
       VAR_9->enc_schedule, VAR_9->rounds))
    VAR_17 = VAR_5;
  }
  break;
 }
 if (VAR_20 && VAR_17 == 0)
  FUNC_15(VAR_12->crp_flags, VAR_12->crp_buf, VAR_10->crd_skip,
      VAR_10->crd_len, VAR_15);

out:
 if (VAR_20) {
  FUNC_17(VAR_15, VAR_10->crd_len);
  FUNC_18(VAR_15, VAR_8);
 }
 if (VAR_21) {
  FUNC_17(VAR_16, VAR_11->crd_len);
  FUNC_18(VAR_16, VAR_8);
 }
 return (VAR_17);
}
