
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xlp_sec_softc {int dummy; } ;
struct xlp_sec_command {scalar_t__ cipheralg; scalar_t__ hashdest; int cipherlen; int cipheroff; int hmacpad; int hashlen; int hashoff; int ivlen; int ivoff; int hashsrc; int paramp; int ctrlp; int ciphermode; int hashmode; int hashalg; scalar_t__ des3key; struct cryptodesc* maccrd; struct cryptodesc* enccrd; } ;
struct cryptodesc {int crd_flags; int crd_klen; scalar_t__ crd_key; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct xlp_sec_softc*,struct xlp_sec_command*) ;
 int FUNC_1 (int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,unsigned char*) ;
 int FUNC_2 (int ,int,int ,int ,scalar_t__,int ,unsigned char*,int,scalar_t__,int) ;
 int FUNC_3 (struct xlp_sec_command*) ;

int
FUNC_4(struct xlp_sec_softc *VAR_2,
    struct xlp_sec_command *VAR_3)
{
 struct cryptodesc *VAR_4=((void*)0), *VAR_5=((void*)0);
 unsigned char *VAR_6 = ((void*)0);
 int VAR_7=0;

 VAR_4 = VAR_3->enccrd;
 VAR_5 = VAR_3->maccrd;

 VAR_6 = (unsigned char *)VAR_4->crd_key;
 if (VAR_3->cipheralg == VAR_1) {
  if (!(VAR_4->crd_flags & VAR_0)) {
   uint64_t *VAR_8, *VAR_9;
   VAR_8 = (uint64_t *)VAR_4->crd_key;
   VAR_9 = (uint64_t *)VAR_3->des3key;
   VAR_9[2] = VAR_8[0];
   VAR_9[1] = VAR_8[1];
   VAR_9[0] = VAR_8[2];
   VAR_6 = (unsigned char *)VAR_9;
  }
 }
 FUNC_2(VAR_3->ctrlp, (VAR_5->crd_klen) ? 1 : 0,
     VAR_3->hashalg, VAR_3->hashmode, VAR_3->cipheralg, VAR_3->ciphermode,
     VAR_6, (VAR_4->crd_klen >> 3),
     VAR_5->crd_key, (VAR_5->crd_klen >> 3));

 FUNC_1(VAR_3->ctrlp, VAR_3->paramp,
     (VAR_4->crd_flags & VAR_0) ? 1 : 0, VAR_3->hashsrc,
     VAR_3->ivoff, VAR_3->ivlen, VAR_3->hashoff, VAR_3->hashlen,
     VAR_3->hmacpad, VAR_3->cipheroff, VAR_3->cipherlen,
     (unsigned char *)VAR_3->hashdest);

 FUNC_3(VAR_3);

 VAR_7 = FUNC_0(VAR_2, VAR_3);
 return (VAR_7);
}
