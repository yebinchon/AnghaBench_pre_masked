
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int dummy; } ;
struct mbuf {int dummy; } ;
struct hifn_softc {int sc_needwakeup; int sc_dev; } ;
struct hifn_session {int hs_iv; } ;
struct hifn_command {int cry_masks; int cklen; int mac_masks; struct hifn_softc* softc; struct hifn_session* session; struct cryptop* crp; scalar_t__ mac; int base_masks; struct cryptodesc* maccrd; int ck; scalar_t__ iv; struct cryptodesc* enccrd; struct uio* dst_io; struct uio* src_io; struct mbuf* dst_m; struct mbuf* src_m; } ;
struct cryptop {int crp_flags; int crp_etype; scalar_t__ crp_buf; struct cryptodesc* crp_desc; int crp_session; int * crp_callback; } ;
struct cryptodesc {int crd_alg; int crd_flags; int crd_klen; int crd_key; int crd_inject; int crd_iv; struct cryptodesc* crd_next; } ;
typedef int device_t ;
struct TYPE_2__ {int hst_nomem; int hst_invalid; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int,scalar_t__,int ,int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__,int ,int,scalar_t__) ;
 int FUNC_4 (struct cryptop*) ;
 struct hifn_session* FUNC_5 (int ) ;
 struct hifn_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct hifn_command*,int ) ;
 int FUNC_9 (struct hifn_softc*,struct hifn_command*,struct cryptop*,int) ;
 scalar_t__ VAR_38 ;
 TYPE_1__ VAR_39 ;
 struct hifn_command* FUNC_10 (int,int ,int) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_40, struct cryptop *VAR_41, int VAR_42)
{
 struct hifn_softc *VAR_43 = FUNC_6(VAR_40);
 struct hifn_command *VAR_44 = ((void*)0);
 int VAR_45, VAR_46;
 struct cryptodesc *VAR_47, *VAR_48, *VAR_49, *VAR_50;
 struct hifn_session *VAR_51;

 if (VAR_41 == ((void*)0) || VAR_41->crp_callback == ((void*)0)) {
  VAR_39.hst_invalid++;
  return (VAR_7);
 }

 VAR_51 = FUNC_5(VAR_41->crp_session);
 VAR_44 = FUNC_10(sizeof(struct hifn_command), VAR_35, VAR_36 | VAR_37);
 if (VAR_44 == ((void*)0)) {
  VAR_39.hst_nomem++;
  VAR_45 = VAR_8;
  goto errout;
 }

 if (VAR_41->crp_flags & VAR_4) {
  VAR_44->src_m = (struct mbuf *)VAR_41->crp_buf;
  VAR_44->dst_m = (struct mbuf *)VAR_41->crp_buf;
 } else if (VAR_41->crp_flags & VAR_5) {
  VAR_44->src_io = (struct uio *)VAR_41->crp_buf;
  VAR_44->dst_io = (struct uio *)VAR_41->crp_buf;
 } else {
  VAR_45 = VAR_7;
  goto errout;
 }

 VAR_47 = VAR_41->crp_desc;
 if (VAR_47 == ((void*)0)) {
  VAR_45 = VAR_7;
  goto errout;
 }
 VAR_48 = VAR_47->crd_next;

 if (VAR_48 == ((void*)0)) {
  if (VAR_47->crd_alg == 130 ||
      VAR_47->crd_alg == 128 ||
      VAR_47->crd_alg == 129 ||
      VAR_47->crd_alg == 131) {
   VAR_49 = VAR_47;
   VAR_50 = ((void*)0);
  } else if (VAR_47->crd_alg == 132 ||
      VAR_47->crd_alg == 135 ||
      VAR_47->crd_alg == 134 ||
      VAR_47->crd_alg == 133) {
   if ((VAR_47->crd_flags & VAR_0) == 0)
    VAR_44->base_masks |= VAR_12;
   VAR_49 = ((void*)0);
   VAR_50 = VAR_47;
  } else {
   VAR_45 = VAR_7;
   goto errout;
  }
 } else {
  if ((VAR_47->crd_alg == 130 ||
                     VAR_47->crd_alg == 128 ||
                     VAR_47->crd_alg == 131 ||
                     VAR_47->crd_alg == 129) &&
      (VAR_48->crd_alg == 132 ||
       VAR_48->crd_alg == 135 ||
       VAR_48->crd_alg == 134 ||
       VAR_48->crd_alg == 133) &&
      ((VAR_48->crd_flags & VAR_0) == 0)) {
   VAR_44->base_masks = VAR_12;
   VAR_49 = VAR_47;
   VAR_50 = VAR_48;
  } else if ((VAR_47->crd_alg == 132 ||
       VAR_47->crd_alg == 133 ||
       VAR_47->crd_alg == 135 ||
       VAR_47->crd_alg == 134) &&
      (VAR_48->crd_alg == 130 ||
                     VAR_48->crd_alg == 128 ||
                     VAR_48->crd_alg == 131 ||
                     VAR_48->crd_alg == 129) &&
      (VAR_47->crd_flags & VAR_0)) {
   VAR_50 = VAR_47;
   VAR_49 = VAR_48;
  } else {



   VAR_45 = VAR_7;
   goto errout;
  }
 }

 if (VAR_50) {
  VAR_44->enccrd = VAR_50;
  VAR_44->base_masks |= VAR_11;
  switch (VAR_50->crd_alg) {
  case 133:
   VAR_44->cry_masks |= VAR_18;
   break;
  case 132:
   VAR_44->cry_masks |= VAR_16 |
       VAR_22 |
       VAR_23;
   break;
  case 135:
   VAR_44->cry_masks |= VAR_14 |
       VAR_22 |
       VAR_23;
   break;
  case 134:
   VAR_44->cry_masks |= VAR_15 |
       VAR_22 |
       VAR_23;
   break;
  default:
   VAR_45 = VAR_7;
   goto errout;
  }
  if (VAR_50->crd_alg != 133) {
   VAR_46 = ((VAR_50->crd_alg == 134) ?
    VAR_10 : VAR_25);
   if (VAR_50->crd_flags & VAR_0) {
    if (VAR_50->crd_flags & VAR_1)
     FUNC_0(VAR_50->crd_iv, VAR_44->iv, VAR_46);
    else
     FUNC_0(VAR_51->hs_iv, VAR_44->iv, VAR_46);

    if ((VAR_50->crd_flags & VAR_2)
        == 0) {
     FUNC_2(VAR_41->crp_flags,
         VAR_41->crp_buf, VAR_50->crd_inject,
         VAR_46, VAR_44->iv);
    }
   } else {
    if (VAR_50->crd_flags & VAR_1)
     FUNC_0(VAR_50->crd_iv, VAR_44->iv, VAR_46);
    else {
     FUNC_3(VAR_41->crp_flags,
         VAR_41->crp_buf, VAR_50->crd_inject,
         VAR_46, VAR_44->iv);
    }
   }
  }

  if (VAR_50->crd_flags & VAR_3)
   VAR_44->cry_masks |= VAR_24;
  VAR_44->ck = VAR_50->crd_key;
  VAR_44->cklen = VAR_50->crd_klen >> 3;
  VAR_44->cry_masks |= VAR_24;




  if ((VAR_44->cry_masks & VAR_17) ==
      VAR_15) {
   switch (VAR_44->cklen) {
   case 16:
    VAR_44->cry_masks |= VAR_19;
    break;
   case 24:
    VAR_44->cry_masks |= VAR_20;
    break;
   case 32:
    VAR_44->cry_masks |= VAR_21;
    break;
   default:
    VAR_45 = VAR_7;
    goto errout;
   }
  }
 }

 if (VAR_49) {
  VAR_44->maccrd = VAR_49;
  VAR_44->base_masks |= VAR_13;

  switch (VAR_49->crd_alg) {
  case 131:
   VAR_44->mac_masks |= VAR_26 |
       VAR_32 | VAR_28 |
       VAR_31;
                       break;
  case 130:
   VAR_44->mac_masks |= VAR_26 |
       VAR_32 | VAR_29 |
       VAR_31 | VAR_33;
   break;
  case 129:
   VAR_44->mac_masks |= VAR_27 |
       VAR_32 | VAR_28 |
       VAR_31;
   break;
  case 128:
   VAR_44->mac_masks |= VAR_27 |
       VAR_32 | VAR_29 |
       VAR_31 | VAR_33;
   break;
  }

  if (VAR_49->crd_alg == 128 ||
       VAR_49->crd_alg == 130) {
   VAR_44->mac_masks |= VAR_30;
   FUNC_0(VAR_49->crd_key, VAR_44->mac, VAR_49->crd_klen >> 3);
   FUNC_1(VAR_44->mac + (VAR_49->crd_klen >> 3),
       VAR_34 - (VAR_49->crd_klen >> 3));
  }
 }

 VAR_44->crp = VAR_41;
 VAR_44->session = VAR_51;
 VAR_44->softc = VAR_43;

 VAR_45 = FUNC_9(VAR_43, VAR_44, VAR_41, VAR_42);
 if (!VAR_45) {
  return 0;
 } else if (VAR_45 == VAR_9) {
  FUNC_8(VAR_44, VAR_35);
  VAR_43->sc_needwakeup |= VAR_6;
  return (VAR_45);
 }

errout:
 if (VAR_44 != ((void*)0))
  FUNC_8(VAR_44, VAR_35);
 if (VAR_45 == VAR_7)
  VAR_39.hst_invalid++;
 else
  VAR_39.hst_nomem++;
 VAR_41->crp_etype = VAR_45;
 FUNC_4(VAR_41);
 return (VAR_45);
}
