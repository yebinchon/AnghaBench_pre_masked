
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptoini {int cri_alg; int cri_klen; void* cri_mlen; scalar_t__ cri_key; struct cryptoini* cri_next; } ;
struct cesa_softc {int dummy; } ;
struct cesa_session {int cs_config; int cs_ivlen; int cs_mblen; void* cs_hlen; int cs_klen; int cs_key; } ;
typedef int device_t ;
typedef int crypto_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cesa_session*) ;
 int FUNC_2 (struct cesa_session*,int const,scalar_t__,int) ;
 struct cesa_session* FUNC_3 (int ) ;
 struct cesa_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_25, crypto_session_t VAR_26, struct cryptoini *VAR_27)
{
 struct cesa_session *VAR_28;
 struct cesa_softc *VAR_29;
 struct cryptoini *VAR_30;
 struct cryptoini *VAR_31;
 int VAR_32;

 VAR_29 = FUNC_4(VAR_25);
 VAR_30 = ((void*)0);
 VAR_31 = ((void*)0);
 VAR_32 = 0;


 if (FUNC_0(VAR_27->cri_alg))
  VAR_31 = VAR_27;
 else
  VAR_30 = VAR_27;

 VAR_27 = VAR_27->cri_next;

 if (VAR_27) {
  if (!VAR_30 && !FUNC_0(VAR_27->cri_alg))
   VAR_30 = VAR_27;

  if (!VAR_31 && FUNC_0(VAR_27->cri_alg))
   VAR_31 = VAR_27;

  if (VAR_27->cri_next || !(VAR_30 && VAR_31))
   return (VAR_18);
 }

 if ((VAR_30 && (VAR_30->cri_klen / 8) > VAR_13) ||
     (VAR_31 && (VAR_31->cri_klen / 8) > VAR_14))
  return (VAR_17);


 VAR_28 = FUNC_3(VAR_26);


 VAR_28->cs_config = 0;
 VAR_28->cs_ivlen = 1;
 VAR_28->cs_mblen = 1;

 if (VAR_30) {
  switch (VAR_30->cri_alg) {
  case 134:
   VAR_28->cs_config |= VAR_4 | VAR_5;
   VAR_28->cs_ivlen = VAR_0;
   break;
  case 133:
   VAR_28->cs_config |= VAR_6 | VAR_5;
   VAR_28->cs_ivlen = VAR_16;
   break;
  case 135:
   VAR_28->cs_config |= VAR_1 | VAR_2 |
       VAR_5;
   VAR_28->cs_ivlen = VAR_15;
   break;
  default:
   VAR_32 = VAR_18;
   break;
  }
 }

 if (!VAR_32 && VAR_31) {
  switch (VAR_31->cri_alg) {
  case 132:
   VAR_28->cs_mblen = 1;
   VAR_28->cs_hlen = (VAR_31->cri_mlen == 0) ? VAR_20 :
       VAR_31->cri_mlen;
   VAR_28->cs_config |= VAR_7;
   break;
  case 131:
   VAR_28->cs_mblen = VAR_19;
   VAR_28->cs_hlen = (VAR_31->cri_mlen == 0) ? VAR_20 :
       VAR_31->cri_mlen;
   VAR_28->cs_config |= VAR_8;
   if (VAR_28->cs_hlen == VAR_12)
    VAR_28->cs_config |= VAR_3;
   break;
  case 130:
   VAR_28->cs_mblen = 1;
   VAR_28->cs_hlen = (VAR_31->cri_mlen == 0) ? VAR_22 :
       VAR_31->cri_mlen;
   VAR_28->cs_config |= VAR_9;
   break;
  case 129:
   VAR_28->cs_mblen = VAR_21;
   VAR_28->cs_hlen = (VAR_31->cri_mlen == 0) ? VAR_22 :
       VAR_31->cri_mlen;
   VAR_28->cs_config |= VAR_10;
   if (VAR_28->cs_hlen == VAR_12)
    VAR_28->cs_config |= VAR_3;
   break;
  case 128:
   VAR_28->cs_mblen = VAR_23;
   VAR_28->cs_hlen = (VAR_31->cri_mlen == 0) ? VAR_24 :
       VAR_31->cri_mlen;
   VAR_28->cs_config |= VAR_11;
   break;
  default:
   VAR_32 = VAR_18;
   break;
  }
 }


 if (!VAR_32 && VAR_30 && VAR_30->cri_key) {
  VAR_28->cs_klen = VAR_30->cri_klen / 8;
  FUNC_5(VAR_28->cs_key, VAR_30->cri_key, VAR_28->cs_klen);
  if (VAR_30->cri_alg == 134)
   VAR_32 = FUNC_1(VAR_28);
 }


 if (!VAR_32 && VAR_31 && VAR_31->cri_key)
  VAR_32 = FUNC_2(VAR_28, VAR_31->cri_alg, VAR_31->cri_key,
      VAR_31->cri_klen / 8);

 if (VAR_32)
  return (VAR_32);

 return (0);
}
