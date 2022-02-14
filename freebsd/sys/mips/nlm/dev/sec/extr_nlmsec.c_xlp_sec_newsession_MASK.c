
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_sec_softc {int dummy; } ;
struct xlp_sec_command {int hash_dst_len; } ;
struct xlp_sec_session {int hs_mlen; int ses_iv; struct xlp_sec_command cmd; } ;
struct cryptoini {int cri_alg; int cri_mlen; struct cryptoini* cri_next; } ;
typedef int device_t ;
typedef int crypto_session_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xlp_sec_session* FUNC_0 (int ) ;
 struct xlp_sec_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, crypto_session_t VAR_4, struct cryptoini *VAR_5)
{
 struct cryptoini *VAR_6;
 struct xlp_sec_softc *VAR_7 = FUNC_1(VAR_3);
 int VAR_8 = 0, VAR_9 = 0;
 struct xlp_sec_session *VAR_10;
 struct xlp_sec_command *VAR_11 = ((void*)0);

 if (VAR_5 == ((void*)0) || VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_10 = FUNC_0(VAR_4);
 VAR_11 = &VAR_10->cmd;

 for (VAR_6 = VAR_5; VAR_6 != ((void*)0); VAR_6 = VAR_6->cri_next) {
  switch (VAR_6->cri_alg) {
  case 131:
  case 129:
  case 130:
  case 128:
   if (VAR_8)
    return (VAR_0);
   VAR_8 = 1;
   VAR_10->hs_mlen = VAR_6->cri_mlen;
   if (VAR_10->hs_mlen == 0) {
    switch (VAR_6->cri_alg) {
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

   FUNC_2(VAR_10->ses_iv, VAR_6->cri_alg ==
       134 ? VAR_1 :
       VAR_2);

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

 VAR_11->hash_dst_len = VAR_10->hs_mlen;
 return (0);
}
