
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_softc {int sc_version; } ;
struct sec_session {int ss_klen; int ss_mklen; struct sec_eu_methods* ss_eu; int ss_mkey; int ss_key; } ;
struct sec_eu_methods {int (* sem_newsession ) (struct sec_softc*,struct sec_session*,struct cryptoini*,struct cryptoini*) ;int * sem_make_desc; } ;
struct cryptoini {int cri_klen; scalar_t__ cri_key; } ;
typedef int device_t ;
typedef int crypto_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sec_session* FUNC_0 (int ) ;
 struct sec_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 struct sec_eu_methods* VAR_3 ;
 int FUNC_3 (struct cryptoini*,struct cryptoini**,struct cryptoini**) ;
 int FUNC_4 (struct sec_softc*,struct sec_session*,struct cryptoini*,struct cryptoini*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, crypto_session_t VAR_5, struct cryptoini *VAR_6)
{
 struct sec_softc *VAR_7 = FUNC_1(VAR_4);
 struct sec_eu_methods *VAR_8 = VAR_3;
 struct cryptoini *VAR_9 = ((void*)0);
 struct cryptoini *VAR_10 = ((void*)0);
 struct sec_session *VAR_11;
 int VAR_12 = -1;

 VAR_12 = FUNC_3(VAR_6, &VAR_9, &VAR_10);
 if (VAR_12)
  return (VAR_12);


 if (VAR_9 && VAR_9->cri_key && (VAR_9->cri_klen / 8) > VAR_2)
  return (VAR_0);

 if (VAR_10 && VAR_10->cri_key && (VAR_10->cri_klen / 8) > VAR_2)
  return (VAR_0);


 if (VAR_7->sc_version < 3 && VAR_10 && VAR_10->cri_klen > 256)
  return (VAR_0);

 VAR_11 = FUNC_0(VAR_5);


 while (VAR_8->sem_make_desc != ((void*)0)) {
  VAR_12 = VAR_8->sem_newsession(VAR_7, VAR_11, VAR_9, VAR_10);
  if (VAR_12 >= 0)
   break;

  VAR_8++;
 }


 if (VAR_12 < 0)
  return (VAR_1);


 if (VAR_9 && VAR_9->cri_key) {
  VAR_11->ss_klen = VAR_9->cri_klen / 8;
  FUNC_2(VAR_11->ss_key, VAR_9->cri_key, VAR_11->ss_klen);
 }


 if (VAR_10 && VAR_10->cri_key) {
  VAR_11->ss_mklen = VAR_10->cri_klen / 8;
  FUNC_2(VAR_11->ss_mkey, VAR_10->cri_key, VAR_11->ss_mklen);
 }

 VAR_11->ss_eu = VAR_8;
 return (0);
}
