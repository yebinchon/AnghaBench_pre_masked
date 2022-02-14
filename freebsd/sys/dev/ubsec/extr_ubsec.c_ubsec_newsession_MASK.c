
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubsec_softc {int dummy; } ;
struct ubsec_session {scalar_t__ ses_mlen; int ses_iv; } ;
struct cryptoini {scalar_t__ cri_alg; scalar_t__ cri_mlen; int cri_klen; int * cri_key; struct cryptoini* cri_next; } ;
typedef int device_t ;
typedef int crypto_session_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ubsec_session* FUNC_0 (int ) ;
 struct ubsec_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct ubsec_session*,scalar_t__,int *) ;
 int FUNC_4 (struct ubsec_session*,scalar_t__,int *,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7, crypto_session_t VAR_8, struct cryptoini *VAR_9)
{
 struct ubsec_softc *VAR_10 = FUNC_1(VAR_7);
 struct cryptoini *VAR_11, *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 struct ubsec_session *VAR_14 = ((void*)0);

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
  return (VAR_4);

 for (VAR_11 = VAR_9; VAR_11 != ((void*)0); VAR_11 = VAR_11->cri_next) {
  if (VAR_11->cri_alg == VAR_2 ||
      VAR_11->cri_alg == VAR_3) {
   if (VAR_13)
    return (VAR_4);
   VAR_13 = VAR_11;
  } else if (VAR_11->cri_alg == VAR_1 ||
      VAR_11->cri_alg == VAR_0) {
   if (VAR_12)
    return (VAR_4);
   VAR_12 = VAR_11;
  } else
   return (VAR_4);
 }
 if (VAR_12 == ((void*)0) && VAR_13 == ((void*)0))
  return (VAR_4);

 VAR_14 = FUNC_0(VAR_8);
 if (VAR_12) {


  FUNC_2(VAR_14->ses_iv, sizeof(VAR_14->ses_iv));

  if (VAR_12->cri_key != ((void*)0)) {
   FUNC_3(VAR_14, VAR_12->cri_alg,
       VAR_12->cri_key);
  }
 }

 if (VAR_13) {
  VAR_14->ses_mlen = VAR_13->cri_mlen;
  if (VAR_14->ses_mlen == 0) {
   if (VAR_13->cri_alg == VAR_2)
    VAR_14->ses_mlen = VAR_5;
   else
    VAR_14->ses_mlen = VAR_6;
  }

  if (VAR_13->cri_key != ((void*)0)) {
   FUNC_4(VAR_14, VAR_13->cri_alg,
       VAR_13->cri_key, VAR_13->cri_klen / 8);
  }
 }

 return (0);
}
