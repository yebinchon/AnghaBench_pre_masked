
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptoini {int cri_klen; int cri_key; } ;
struct armv8_crypto_session {int algo; void** dec_schedule; void** enc_schedule; int rounds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

 int VAR_3 ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (void**,int ,int ) ;
 int FUNC_4 (void**,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct armv8_crypto_session *VAR_4,
    struct cryptoini *VAR_5)
{
 int VAR_6;

 switch (VAR_4->algo) {
 case 128:
  switch (VAR_5->cri_klen) {
  case 128:
   VAR_4->rounds = VAR_0;
   break;
  case 192:
   VAR_4->rounds = VAR_1;
   break;
  case 256:
   VAR_4->rounds = VAR_2;
   break;
  default:
   FUNC_0("invalid CBC/ICM/GCM key length");
   return (VAR_3);
  }
  break;
 default:
  return (VAR_3);
 }

 FUNC_4(VAR_4->enc_schedule, VAR_5->cri_key,
     VAR_5->cri_klen);
 FUNC_3(VAR_4->dec_schedule, VAR_5->cri_key,
     VAR_5->cri_klen);
 for (VAR_6 = 0; VAR_6 < FUNC_2(VAR_4->enc_schedule); VAR_6++) {
  VAR_4->enc_schedule[VAR_6] = FUNC_1(VAR_4->enc_schedule[VAR_6]);
  VAR_4->dec_schedule[VAR_6] = FUNC_1(VAR_4->dec_schedule[VAR_6]);
 }

 return (0);
}
