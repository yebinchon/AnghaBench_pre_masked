
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_sec_softc {int sc_needwakeup; } ;
struct xlp_sec_session {int hs_mlen; } ;
struct xlp_sec_command {unsigned int nsegs; int hashsrc; struct cryptodesc* enccrd; int cipherlen; int cipheroff; scalar_t__ hmacpad; struct cryptodesc* maccrd; int hashlen; int hashoff; scalar_t__ ivoff; int ivlen; int hash_dst_len; struct xlp_sec_session* ses; struct cryptop* crp; } ;
struct cryptop {int crp_etype; struct cryptodesc* crp_desc; int crp_session; int * crp_callback; } ;
struct cryptodesc {int crd_flags; scalar_t__ crd_alg; int crd_len; int crd_skip; scalar_t__ crd_inject; struct cryptodesc* crd_next; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct cryptop*) ;
 struct xlp_sec_session* FUNC_1 (int ) ;
 struct xlp_sec_softc* FUNC_2 (int ) ;
 struct xlp_sec_command* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct xlp_sec_softc*,struct xlp_sec_command*) ;
 int FUNC_5 (struct xlp_sec_softc*,struct xlp_sec_command*) ;
 int FUNC_6 (struct xlp_sec_softc*,struct xlp_sec_command*) ;
 int FUNC_7 (struct xlp_sec_command*) ;
 int FUNC_8 (struct xlp_sec_command*) ;
 int FUNC_9 (struct xlp_sec_command*,unsigned int) ;
 int FUNC_10 (struct xlp_sec_softc*,struct xlp_sec_command*,struct cryptodesc*) ;
 int FUNC_11 (struct xlp_sec_command*) ;
 int FUNC_12 (struct cryptop*,unsigned int*) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_19, struct cryptop *VAR_20, int VAR_21)
{
 struct xlp_sec_softc *VAR_22 = FUNC_2(VAR_19);
 struct xlp_sec_command *VAR_23 = ((void*)0);
 int VAR_24 = -1, VAR_25 = 0;
 struct cryptodesc *VAR_26, *VAR_27;
 struct xlp_sec_session *VAR_28;
 unsigned int VAR_29 = 0;

 if (VAR_20 == ((void*)0) || VAR_20->crp_callback == ((void*)0)) {
  return (VAR_12);
 }
 if (VAR_22 == ((void*)0)) {
  VAR_24 = VAR_12;
  goto errout;
 }
 VAR_28 = FUNC_1(VAR_20->crp_session);

 if ((VAR_23 = FUNC_3(sizeof(struct xlp_sec_command), VAR_15,
     VAR_16 | VAR_17)) == ((void*)0)) {
  VAR_24 = VAR_13;
  goto errout;
 }

 VAR_23->crp = VAR_20;
 VAR_23->ses = VAR_28;
 VAR_23->hash_dst_len = VAR_28->hs_mlen;

 if ((VAR_26 = VAR_20->crp_desc) == ((void*)0)) {
  VAR_24 = VAR_12;
  goto errout;
 }
 VAR_27 = VAR_26->crd_next;

 if ((VAR_25 = FUNC_12(VAR_20, &VAR_29)) != 0) {
  VAR_24 = VAR_12;
  goto errout;
 }
 if (((VAR_26 != ((void*)0)) && (VAR_26->crd_flags & VAR_1)) ||
     ((VAR_27 != ((void*)0)) && (VAR_27->crd_flags & VAR_1))) {

  VAR_29 += 1;
 }
 VAR_23->nsegs = VAR_29;

 if ((VAR_24 = FUNC_9(VAR_23, VAR_29)) != 0)
  goto errout;

 if ((VAR_26 != ((void*)0)) && (VAR_27 == ((void*)0))) {
  if (VAR_26->crd_alg == VAR_6 ||
      VAR_26->crd_alg == VAR_3 ||
      VAR_26->crd_alg == VAR_4 ||
      VAR_26->crd_alg == VAR_5) {
   VAR_23->enccrd = VAR_26;
   VAR_23->maccrd = ((void*)0);
   if ((VAR_25 = FUNC_7(VAR_23)) != 0) {
    VAR_24 = VAR_12;
    goto errout;
   }
   if (VAR_26->crd_flags & VAR_1)
    VAR_23->cipheroff = VAR_23->ivlen;
   else
    VAR_23->cipheroff = VAR_23->enccrd->crd_skip;
   VAR_23->cipherlen = VAR_23->enccrd->crd_len;
   if (VAR_26->crd_flags & VAR_2)
    VAR_23->ivoff = 0;
   else
    VAR_23->ivoff = VAR_23->enccrd->crd_inject;
   if ((VAR_24 = FUNC_10(VAR_22, VAR_23, VAR_23->enccrd)) != 0)
    goto errout;
   if ((VAR_24 = FUNC_4(VAR_22, VAR_23)) != 0)
    goto errout;
  } else if (VAR_26->crd_alg == VAR_8 ||
      VAR_26->crd_alg == VAR_10 ||
      VAR_26->crd_alg == VAR_9 ||
      VAR_26->crd_alg == VAR_7) {
   VAR_23->enccrd = ((void*)0);
   VAR_23->maccrd = VAR_26;
   if ((VAR_25 = FUNC_8(VAR_23)) != 0) {
    VAR_24 = VAR_12;
    goto errout;
   }
   VAR_23->hashoff = VAR_23->maccrd->crd_skip;
   VAR_23->hashlen = VAR_23->maccrd->crd_len;
   VAR_23->hmacpad = 0;
   VAR_23->hashsrc = 0;
   if ((VAR_24 = FUNC_6(VAR_22, VAR_23)) != 0)
    goto errout;
  } else {
   VAR_24 = VAR_12;
   goto errout;
  }
 } else if( (VAR_26 != ((void*)0)) && (VAR_27 != ((void*)0)) ) {
  if ((VAR_26->crd_alg == VAR_8 ||
      VAR_26->crd_alg == VAR_10 ||
      VAR_26->crd_alg == VAR_7 ||
      VAR_26->crd_alg == VAR_9) &&
      (VAR_27->crd_alg == VAR_6 ||
      VAR_27->crd_alg == VAR_3 ||
      VAR_27->crd_alg == VAR_4 ||
      VAR_27->crd_alg == VAR_5)) {
   VAR_23->maccrd = VAR_26;
   VAR_23->enccrd = VAR_27;
  } else if ((VAR_26->crd_alg == VAR_6 ||
      VAR_26->crd_alg == VAR_5 ||
      VAR_26->crd_alg == VAR_3 ||
      VAR_26->crd_alg == VAR_4) &&
      (VAR_27->crd_alg == VAR_8 ||
      VAR_27->crd_alg == VAR_10 ||
      VAR_27->crd_alg == VAR_7 ||
      VAR_27->crd_alg == VAR_9)) {
   VAR_23->enccrd = VAR_26;
   VAR_23->maccrd = VAR_27;
  } else {
   VAR_24 = VAR_12;
   goto errout;
  }
  if ((VAR_25 = FUNC_7(VAR_23)) != 0) {
   VAR_24 = VAR_12;
   goto errout;
  }
  if ((VAR_25 = FUNC_8(VAR_23)) != 0) {
   VAR_24 = VAR_12;
   goto errout;
  }
  VAR_23->ivoff = VAR_23->enccrd->crd_inject;
  VAR_23->hashoff = VAR_23->maccrd->crd_skip;
  VAR_23->hashlen = VAR_23->maccrd->crd_len;
  VAR_23->hmacpad = 0;
  if (VAR_23->enccrd->crd_flags & VAR_0)
   VAR_23->hashsrc = 1;
  else
   VAR_23->hashsrc = 0;
  VAR_23->cipheroff = VAR_23->enccrd->crd_skip;
  VAR_23->cipherlen = VAR_23->enccrd->crd_len;
  if ((VAR_24 = FUNC_10(VAR_22, VAR_23, VAR_23->enccrd)) != 0)
   goto errout;
  if ((VAR_24 = FUNC_5(VAR_22, VAR_23)) != 0)
   goto errout;
 } else {
  VAR_24 = VAR_12;
  goto errout;
 }
 return (0);
errout:
 FUNC_11(VAR_23);
 if (VAR_24 == VAR_14) {
  VAR_22->sc_needwakeup |= VAR_11;
  VAR_18 = 0;
  return (VAR_24);
 }
 VAR_20->crp_etype = VAR_24;
 FUNC_0(VAR_20);
 return (VAR_24);
}
