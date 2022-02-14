
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hifn_softc {int dummy; } ;
struct hifn_session {int hs_mlen; int hs_iv; } ;
struct cryptoini {int cri_alg; int cri_mlen; struct cryptoini* cri_next; } ;
typedef int device_t ;
typedef int crypto_session_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct hifn_session* FUNC_1 (int ) ;
 struct hifn_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, crypto_session_t VAR_4, struct cryptoini *VAR_5)
{
 struct hifn_softc *VAR_6 = FUNC_2(VAR_3);
 struct cryptoini *VAR_7;
 int VAR_8 = 0, VAR_9 = 0;
 struct hifn_session *VAR_10;

 FUNC_0(VAR_6 != ((void*)0), ("hifn_newsession: null softc"));
 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_10 = FUNC_1(VAR_4);

 for (VAR_7 = VAR_5; VAR_7 != ((void*)0); VAR_7 = VAR_7->cri_next) {
  switch (VAR_7->cri_alg) {
  case 131:
  case 129:
  case 130:
  case 128:
   if (VAR_8)
    return (VAR_0);
   VAR_8 = 1;
   VAR_10->hs_mlen = VAR_7->cri_mlen;
   if (VAR_10->hs_mlen == 0) {
    switch (VAR_7->cri_alg) {
    case 131:
    case 130:
     VAR_10->hs_mlen = 16;
     break;
    case 129:
    case 128:
     VAR_10->hs_mlen = 20;
     break;
    }
   }
   break;
  case 132:
  case 135:
  case 134:

   FUNC_3(VAR_10->hs_iv,
    VAR_7->cri_alg == 134 ?
     VAR_1 : VAR_2);

  case 133:
   if (VAR_9)
    return (VAR_0);
   VAR_9 = 1;
   break;
  default:
   return (VAR_0);
  }
 }
 if (VAR_8 == 0 && VAR_9 == 0)
  return (VAR_0);
 return (0);
}
