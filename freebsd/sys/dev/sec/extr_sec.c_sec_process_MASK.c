
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sec_softc {int sc_version; int sc_blocked; scalar_t__ sc_shutdown; } ;
struct sec_session {int ss_ivlen; int ss_klen; int ss_mklen; TYPE_1__* ss_eu; int ss_mkey; int ss_key; } ;
struct sec_desc {TYPE_2__* sd_desc; struct cryptop* sd_crp; scalar_t__ sd_error; scalar_t__ sd_lt_used; } ;
struct cryptop {scalar_t__ crp_ilen; int crp_etype; int crp_flags; int crp_buf; int crp_session; } ;
struct cryptodesc {int crd_flags; int crd_klen; int crd_key; int crd_inject; int crd_iv; } ;
typedef int device_t ;
struct TYPE_4__ {int shd_dn; int shd_mkey; int shd_key; int shd_iv; } ;
struct TYPE_3__ {int (* sem_make_desc ) (struct sec_softc*,struct sec_session*,struct sec_desc*,struct cryptop*,int) ;} ;


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
 int FUNC_0 (struct sec_softc*) ;
 int FUNC_1 (struct sec_desc*) ;
 int FUNC_2 (struct sec_softc*,struct sec_desc*) ;
 int FUNC_3 (struct sec_softc*,int) ;
 int FUNC_4 (struct sec_desc*,int) ;
 scalar_t__ FUNC_5 (struct sec_softc*) ;
 struct sec_desc* FUNC_6 (struct sec_softc*) ;
 int FUNC_7 (struct sec_softc*,int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (struct sec_softc*) ;
 int VAR_19 ;
 int FUNC_9 (struct sec_softc*,int ) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int,int ,int ,int,int ) ;
 int FUNC_12 (int,int ,int ,int,int ) ;
 int FUNC_13 (struct cryptop*) ;
 struct sec_session* FUNC_14 (int ) ;
 int VAR_20 ;
 struct sec_softc* FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (struct sec_softc*) ;
 scalar_t__ FUNC_18 (struct cryptop*,struct cryptodesc**,struct cryptodesc**) ;
 int FUNC_19 (struct sec_softc*,struct sec_session*,struct sec_desc*,struct cryptop*,int) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_21, struct cryptop *VAR_22, int VAR_23)
{
 struct sec_softc *VAR_24 = FUNC_15(VAR_21);
 struct sec_desc *VAR_25 = ((void*)0);
 struct cryptodesc *VAR_26, *VAR_27;
 struct sec_session *VAR_28;
 int VAR_29, VAR_30 = 0;

 VAR_28 = FUNC_14(VAR_22->crp_session);


 if (VAR_22->crp_ilen > VAR_15) {
  VAR_22->crp_etype = VAR_12;
  FUNC_13(VAR_22);
  return (0);
 }


 if (FUNC_18(VAR_22, &VAR_27, &VAR_26)) {
  VAR_22->crp_etype = VAR_13;
  FUNC_13(VAR_22);
  return (0);
 }

 FUNC_7(VAR_24, VAR_20);
 FUNC_3(VAR_24, VAR_2 | VAR_3);


 if (FUNC_5(VAR_24) == 0 || VAR_24->sc_shutdown) {
  VAR_24->sc_blocked |= VAR_11;
  FUNC_9(VAR_24, VAR_20);
  return (VAR_14);
 }


 VAR_25 = FUNC_6(VAR_24);
 VAR_25->sd_lt_used = 0;
 VAR_25->sd_error = 0;
 VAR_25->sd_crp = VAR_22;

 if (VAR_22->crp_flags & VAR_9)
  VAR_29 = VAR_19;
 else if (VAR_22->crp_flags & VAR_8)
  VAR_29 = VAR_17;
 else
  VAR_29 = VAR_18;

 if (VAR_27 && VAR_27->crd_flags & VAR_4) {
  if (VAR_27->crd_flags & VAR_5)
   FUNC_16(VAR_25->sd_desc->shd_iv, VAR_27->crd_iv,
       VAR_28->ss_ivlen);
  else
   FUNC_10(VAR_25->sd_desc->shd_iv, VAR_28->ss_ivlen, 0);

  if ((VAR_27->crd_flags & VAR_6) == 0)
   FUNC_11(VAR_22->crp_flags, VAR_22->crp_buf,
       VAR_27->crd_inject, VAR_28->ss_ivlen,
       VAR_25->sd_desc->shd_iv);
 } else if (VAR_27) {
  if (VAR_27->crd_flags & VAR_5)
   FUNC_16(VAR_25->sd_desc->shd_iv, VAR_27->crd_iv,
       VAR_28->ss_ivlen);
  else
   FUNC_12(VAR_22->crp_flags, VAR_22->crp_buf,
       VAR_27->crd_inject, VAR_28->ss_ivlen,
       VAR_25->sd_desc->shd_iv);
 }

 if (VAR_27 && VAR_27->crd_flags & VAR_7) {
  if ((VAR_27->crd_klen / 8) <= VAR_16) {
   VAR_28->ss_klen = VAR_27->crd_klen / 8;
   FUNC_16(VAR_28->ss_key, VAR_27->crd_key, VAR_28->ss_klen);
  } else
   VAR_30 = VAR_12;
 }

 if (!VAR_30 && VAR_26 && VAR_26->crd_flags & VAR_7) {
  if ((VAR_26->crd_klen / 8) <= VAR_16) {
   VAR_28->ss_mklen = VAR_26->crd_klen / 8;
   FUNC_16(VAR_28->ss_mkey, VAR_26->crd_key, VAR_28->ss_mklen);
  } else
   VAR_30 = VAR_12;
 }

 if (!VAR_30) {
  FUNC_16(VAR_25->sd_desc->shd_key, VAR_28->ss_key, VAR_28->ss_klen);
  FUNC_16(VAR_25->sd_desc->shd_mkey, VAR_28->ss_mkey, VAR_28->ss_mklen);

  VAR_30 = VAR_28->ss_eu->sem_make_desc(VAR_24, VAR_28, VAR_25, VAR_22, VAR_29);
 }

 if (VAR_30) {
  FUNC_1(VAR_25);
  FUNC_2(VAR_24, VAR_25);
  FUNC_8(VAR_24);
  FUNC_9(VAR_24, VAR_20);
  VAR_22->crp_etype = VAR_30;
  FUNC_13(VAR_22);
  return (0);
 }






 if ((VAR_23 & VAR_10) && VAR_24->sc_version == 3)
  VAR_25->sd_desc->shd_dn = 0;
 else
  VAR_25->sd_desc->shd_dn = 1;

 FUNC_3(VAR_24, VAR_0 | VAR_1);
 FUNC_4(VAR_25, VAR_0 |
     VAR_1);
 FUNC_0(VAR_24);
 FUNC_9(VAR_24, VAR_20);


 FUNC_17(VAR_24);

 return (0);
}
