
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_cipher {void* dec; void* enc; } ;
typedef enum crypto_cipher_alg { ____Placeholder_crypto_cipher_alg } crypto_cipher_alg ;
typedef int EVP_CIPHER ;







 int FUNC_0 (void*) ;
 void* FUNC_1 () ;
 int FUNC_2 (void*,size_t) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (void*,int const*,int *,int const*,int const*) ;
 int FUNC_5 (void*,int const*,int *,int const*,int const*) ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int * FUNC_8 () ;
 int * FUNC_9 () ;
 int * FUNC_10 () ;
 int * FUNC_11 () ;
 int * FUNC_12 () ;
 int FUNC_13 (struct crypto_cipher*) ;
 struct crypto_cipher* FUNC_14 (int) ;

struct crypto_cipher * FUNC_15(enum crypto_cipher_alg VAR_0,
       const u8 *VAR_1, const u8 *VAR_2,
       size_t VAR_3)
{
 struct crypto_cipher *VAR_4;
 const EVP_CIPHER *VAR_5;

 VAR_4 = FUNC_14(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 switch (VAR_0) {


 case 128:
  VAR_5 = FUNC_12();
  break;



 case 131:
  switch (VAR_3) {
  case 16:
   VAR_5 = FUNC_6();
   break;

  case 24:
   VAR_5 = FUNC_7();
   break;

  case 32:
   VAR_5 = FUNC_8();
   break;
  default:
   FUNC_13(VAR_4);
   return ((void*)0);
  }
  break;


 case 132:
  VAR_5 = FUNC_10();
  break;
 case 130:
  VAR_5 = FUNC_9();
  break;


 case 129:
  VAR_5 = FUNC_11();
  break;

 default:
  FUNC_13(VAR_4);
  return ((void*)0);
 }

 if (!(VAR_4->enc = FUNC_1()) ||
     !FUNC_3(VAR_4->enc, 0) ||
     !FUNC_5(VAR_4->enc, VAR_5, ((void*)0), ((void*)0), ((void*)0)) ||
     !FUNC_2(VAR_4->enc, VAR_3) ||
     !FUNC_5(VAR_4->enc, ((void*)0), ((void*)0), VAR_2, VAR_1)) {
  if (VAR_4->enc)
   FUNC_0(VAR_4->enc);
  FUNC_13(VAR_4);
  return ((void*)0);
 }

 if (!(VAR_4->dec = FUNC_1()) ||
     !FUNC_3(VAR_4->dec, 0) ||
     !FUNC_4(VAR_4->dec, VAR_5, ((void*)0), ((void*)0), ((void*)0)) ||
     !FUNC_2(VAR_4->dec, VAR_3) ||
     !FUNC_4(VAR_4->dec, ((void*)0), ((void*)0), VAR_2, VAR_1)) {
  FUNC_0(VAR_4->enc);
  if (VAR_4->dec)
   FUNC_0(VAR_4->dec);
  FUNC_13(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
