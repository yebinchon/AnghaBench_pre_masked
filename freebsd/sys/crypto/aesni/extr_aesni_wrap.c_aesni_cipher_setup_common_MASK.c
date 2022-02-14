
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct aesni_session {int algo; void* rounds; int xts_schedule; int dec_schedule; int enc_schedule; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*) ;





 int VAR_3 ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (int const*,int ,void*) ;

int
FUNC_3(struct aesni_session *VAR_4, const uint8_t *VAR_5,
    int VAR_6)
{
 int VAR_7;

 VAR_7 = 1;

 switch (VAR_4->algo) {
 case 130:
 case 129:
 case 131:
  VAR_7 = 0;

 case 132:
  switch (VAR_6) {
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
 case 128:
  switch (VAR_6) {
  case 256:
   VAR_4->rounds = VAR_0;
   break;
  case 512:
   VAR_4->rounds = VAR_2;
   break;
  default:
   FUNC_0("invalid XTS key length");
   return (VAR_3);
  }
  break;
 default:
  return (VAR_3);
 }

 FUNC_2(VAR_5, VAR_4->enc_schedule, VAR_4->rounds);
 if (VAR_7)
  FUNC_1(VAR_4->enc_schedule, VAR_4->dec_schedule,
      VAR_4->rounds);

 if (VAR_4->algo == 128)
  FUNC_2(VAR_5 + VAR_6 / 16, VAR_4->xts_schedule,
      VAR_4->rounds);

 return (0);
}
