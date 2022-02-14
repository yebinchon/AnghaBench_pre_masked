
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glxsb_softc {int sc_dev; } ;
struct glxsb_session {int ses_klen; int ses_key; int ses_iv; } ;
struct cryptoini {int cri_alg; int cri_klen; int cri_key; struct cryptoini* cri_next; } ;
typedef int device_t ;
typedef int crypto_session_t ;
 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct glxsb_session* FUNC_2 (int ) ;
 struct glxsb_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct glxsb_session*,struct cryptoini*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, crypto_session_t VAR_2,
    struct cryptoini *VAR_3)
{
 struct glxsb_softc *VAR_4 = FUNC_3(VAR_1);
 struct glxsb_session *VAR_5;
 struct cryptoini *VAR_6, *VAR_7;
 int VAR_8;

 if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
  return (VAR_0);

 VAR_6 = VAR_7 = ((void*)0);
 for (; VAR_3 != ((void*)0); VAR_3 = VAR_3->cri_next) {
  switch(VAR_3->cri_alg) {
  case 133:
  case 134:
  case 131:
  case 132:
  case 130:
  case 129:
  case 128:
   if (VAR_7 != ((void*)0))
    return (VAR_0);
   VAR_7 = VAR_3;
   break;
  case 135:
   if (VAR_6 != ((void*)0))
    return (VAR_0);
   VAR_6 = VAR_3;
   break;
  default:
   return (VAR_0);
  }
 }






 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_6->cri_alg == 135) {
  if (VAR_6->cri_klen != 128) {
   FUNC_4(VAR_4->sc_dev, VAR_2);
   return (VAR_0);
  }
  FUNC_0(VAR_5->ses_iv, sizeof(VAR_5->ses_iv), 0);
  VAR_5->ses_klen = VAR_6->cri_klen;


  FUNC_1(VAR_6->cri_key, VAR_5->ses_key, sizeof(VAR_5->ses_key));
 }

 if (VAR_7 != ((void*)0)) {
  VAR_8 = FUNC_5(VAR_5, VAR_7);
  if (VAR_8 != 0) {
   FUNC_4(VAR_4->sc_dev, VAR_2);
   return (VAR_8);
  }
 }

 return (0);
}
