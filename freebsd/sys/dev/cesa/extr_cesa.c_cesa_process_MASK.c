
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cryptop {scalar_t__ crp_ilen; int crp_etype; int crp_buf; int crp_flags; int crp_session; struct cryptodesc* crp_desc; } ;
struct cryptodesc {scalar_t__ crd_alg; int crd_flags; int crd_klen; int crd_key; int crd_inject; int crd_iv; struct cryptodesc* crd_next; } ;
struct cesa_softc {int sc_data_dtag; int sc_blocked; } ;
struct cesa_session {int cs_ivlen; int cs_klen; int cs_key; } ;
struct cesa_request {int cr_dmap; TYPE_1__* cr_csd; struct cesa_session* cr_cs; struct cryptodesc* cr_mac; struct cryptodesc* cr_enc; struct cryptop* cr_crp; } ;
typedef int device_t ;
struct TYPE_2__ {int csd_iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cesa_softc*,struct cesa_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct cesa_softc*,struct cesa_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 struct cesa_request* FUNC_4 (struct cesa_softc*) ;
 int FUNC_5 (struct cesa_softc*,struct cesa_request*) ;
 int FUNC_6 (struct cesa_softc*,struct cesa_request*) ;
 int FUNC_7 (struct cesa_softc*) ;
 int FUNC_8 (struct cesa_softc*,struct cesa_request*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct cesa_session*) ;
 int FUNC_11 (struct cesa_session*,scalar_t__,int ,int) ;
 int FUNC_12 (struct cesa_softc*,int) ;
 int FUNC_13 (int ,int ,int ,int,int ) ;
 int FUNC_14 (int ,int ,int ,int,int ) ;
 int FUNC_15 (struct cryptop*) ;
 struct cesa_session* FUNC_16 (int ) ;
 struct cesa_softc* FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int) ;
 struct cesa_softc* VAR_17 ;

__attribute__((used)) static int
FUNC_19(device_t VAR_18, struct cryptop *VAR_19, int VAR_20)
{
 struct cesa_request *VAR_21;
 struct cesa_session *VAR_22;
 struct cryptodesc *VAR_23;
 struct cryptodesc *VAR_24;
 struct cryptodesc *VAR_25;
 struct cesa_softc *VAR_26;
 int VAR_27;

 VAR_26 = FUNC_17(VAR_18);
 VAR_23 = VAR_19->crp_desc;
 VAR_24 = ((void*)0);
 VAR_25 = ((void*)0);
 VAR_27 = 0;

 VAR_22 = FUNC_16(VAR_19->crp_session);


 if (VAR_19->crp_ilen > VAR_6) {
  VAR_19->crp_etype = VAR_14;
  FUNC_15(VAR_19);
  return (0);
 }

 if (FUNC_9(VAR_23->crd_alg))
  VAR_25 = VAR_23;
 else
  VAR_24 = VAR_23;

 VAR_23 = VAR_23->crd_next;

 if (VAR_23) {
  if (!VAR_24 && !FUNC_9(VAR_23->crd_alg))
   VAR_24 = VAR_23;

  if (!VAR_25 && FUNC_9(VAR_23->crd_alg))
   VAR_25 = VAR_23;

  if (VAR_23->crd_next || !(VAR_24 && VAR_25)) {
   VAR_19->crp_etype = VAR_15;
   FUNC_15(VAR_19);
   return (0);
  }
 }





 VAR_21 = FUNC_4(VAR_26);
 if (!VAR_21) {
  FUNC_0(VAR_26, VAR_26);
  VAR_26->sc_blocked = VAR_13;
  FUNC_1(VAR_26, VAR_26);
  return (VAR_16);
 }


 VAR_21->cr_crp = VAR_19;
 VAR_21->cr_enc = VAR_24;
 VAR_21->cr_mac = VAR_25;
 VAR_21->cr_cs = VAR_22;

 FUNC_0(VAR_26, VAR_17);
 FUNC_12(VAR_26, VAR_0 | VAR_1);

 if (VAR_24 && VAR_24->crd_flags & VAR_7) {
  if (VAR_24->crd_flags & VAR_8)
   FUNC_18(VAR_21->cr_csd->csd_iv, VAR_24->crd_iv, VAR_22->cs_ivlen);
  else
   FUNC_2(VAR_21->cr_csd->csd_iv, VAR_22->cs_ivlen, 0);

  if ((VAR_24->crd_flags & VAR_9) == 0)
   FUNC_13(VAR_19->crp_flags, VAR_19->crp_buf,
       VAR_24->crd_inject, VAR_22->cs_ivlen, VAR_21->cr_csd->csd_iv);
 } else if (VAR_24) {
  if (VAR_24->crd_flags & VAR_8)
   FUNC_18(VAR_21->cr_csd->csd_iv, VAR_24->crd_iv, VAR_22->cs_ivlen);
  else
   FUNC_14(VAR_19->crp_flags, VAR_19->crp_buf,
       VAR_24->crd_inject, VAR_22->cs_ivlen, VAR_21->cr_csd->csd_iv);
 }

 if (VAR_24 && VAR_24->crd_flags & VAR_10) {
  if ((VAR_24->crd_klen / 8) <= VAR_4) {
   VAR_22->cs_klen = VAR_24->crd_klen / 8;
   FUNC_18(VAR_22->cs_key, VAR_24->crd_key, VAR_22->cs_klen);
   if (VAR_24->crd_alg == VAR_11)
    VAR_27 = FUNC_10(VAR_22);
  } else
   VAR_27 = VAR_14;
 }

 if (!VAR_27 && VAR_25 && VAR_25->crd_flags & VAR_10) {
  if ((VAR_25->crd_klen / 8) <= VAR_5)
   VAR_27 = FUNC_11(VAR_22, VAR_25->crd_alg, VAR_25->crd_key,
       VAR_25->crd_klen / 8);
  else
   VAR_27 = VAR_14;
 }


 if (!VAR_27)
  VAR_27 = FUNC_5(VAR_26, VAR_21);

 FUNC_12(VAR_26, VAR_2 | VAR_3);
 FUNC_1(VAR_26, VAR_17);

 if (VAR_27) {
  FUNC_8(VAR_26, VAR_21);
  VAR_19->crp_etype = VAR_27;
  FUNC_15(VAR_19);
  return (0);
 }

 FUNC_3(VAR_26->sc_data_dtag, VAR_21->cr_dmap, VAR_2 |
     VAR_3);


 FUNC_6(VAR_26, VAR_21);


 if ((VAR_20 & VAR_12) == 0)
  FUNC_7(VAR_26);

 return (0);
}
