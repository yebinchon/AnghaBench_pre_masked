
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptoini {int cri_alg; struct cryptoini* cri_next; } ;
struct armv8_crypto_softc {int lock; scalar_t__ dieing; } ;
struct armv8_crypto_session {int algo; } ;
typedef int device_t ;
typedef int crypto_session_t ;


 int FUNC_0 (char*) ;

 int VAR_0 ;
 int FUNC_1 (struct armv8_crypto_session*,struct cryptoini*) ;
 struct armv8_crypto_session* FUNC_2 (int ) ;
 struct armv8_crypto_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, crypto_session_t VAR_2,
    struct cryptoini *VAR_3)
{
 struct armv8_crypto_softc *VAR_4;
 struct armv8_crypto_session *VAR_5;
 struct cryptoini *VAR_6;
 int VAR_7;

 if (VAR_3 == ((void*)0)) {
  FUNC_0("no cri");
  return (VAR_0);
 }

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4->dieing)
  return (VAR_0);

 VAR_5 = ((void*)0);
 VAR_6 = ((void*)0);
 for (; VAR_3 != ((void*)0); VAR_3 = VAR_3->cri_next) {
  switch (VAR_3->cri_alg) {
  case 128:
   if (VAR_6 != ((void*)0)) {
    FUNC_0("encini already set");
    return (VAR_0);
   }
   VAR_6 = VAR_3;
   break;
  default:
   FUNC_0("unhandled algorithm");
   return (VAR_0);
  }
 }
 if (VAR_6 == ((void*)0)) {
  FUNC_0("no cipher");
  return (VAR_0);
 }

 FUNC_4(&VAR_4->lock);
 if (VAR_4->dieing) {
  FUNC_5(&VAR_4->lock);
  return (VAR_0);
 }

 VAR_5 = FUNC_2(VAR_2);
 VAR_5->algo = VAR_6->cri_alg;

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (VAR_7 != 0) {
  FUNC_0("setup failed");
  FUNC_5(&VAR_4->lock);
  return (VAR_7);
 }

 FUNC_5(&VAR_4->lock);
 return (0);
}
