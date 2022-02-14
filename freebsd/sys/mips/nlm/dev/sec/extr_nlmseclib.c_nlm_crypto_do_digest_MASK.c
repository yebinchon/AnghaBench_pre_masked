
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_sec_softc {int dummy; } ;
struct xlp_sec_command {scalar_t__ hashdest; int hmacpad; int hashlen; int hashoff; int paramp; int ctrlp; int hashmode; int hashalg; struct cryptodesc* maccrd; } ;
struct cryptodesc {int crd_klen; int crd_key; } ;


 int VAR_0 ;
 int FUNC_0 (struct xlp_sec_softc*,struct xlp_sec_command*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,unsigned char*) ;
 int FUNC_2 (int ,int,int ,int ,int ,int ,int *,int ,int ,int) ;
 int FUNC_3 (struct xlp_sec_command*) ;

int
FUNC_4(struct xlp_sec_softc *VAR_1, struct xlp_sec_command *VAR_2)
{
 struct cryptodesc *VAR_3 = ((void*)0);
 int VAR_4=0;

 VAR_3 = VAR_2->maccrd;

 FUNC_2(VAR_2->ctrlp, (VAR_3->crd_klen) ? 1 : 0,
     VAR_2->hashalg, VAR_2->hashmode, VAR_0, 0,
     ((void*)0), 0, VAR_3->crd_key, VAR_3->crd_klen >> 3);

 FUNC_1(VAR_2->ctrlp, VAR_2->paramp,
     VAR_2->hashoff, VAR_2->hashlen, VAR_2->hmacpad,
     (unsigned char *)VAR_2->hashdest);

 FUNC_3(VAR_2);

 VAR_4 = FUNC_0(VAR_1, VAR_2);

 return (VAR_4);
}
