
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xlp_sec_softc {int dummy; } ;
struct xlp_sec_command {scalar_t__ cipheralg; int cipherlen; int cipheroff; int ivlen; int ivoff; int paramp; int ctrlp; int ciphermode; scalar_t__ des3key; struct cryptodesc* enccrd; } ;
struct cryptodesc {int crd_flags; int crd_klen; scalar_t__ crd_key; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xlp_sec_softc*,struct xlp_sec_command*) ;
 int FUNC_1 (int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,scalar_t__,int ,unsigned char*,int,int *,int ) ;
 int FUNC_3 (struct xlp_sec_command*) ;

int
FUNC_4(struct xlp_sec_softc *VAR_3, struct xlp_sec_command *VAR_4)
{
 struct cryptodesc *VAR_5 = ((void*)0);
 unsigned char *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 VAR_5 = VAR_4->enccrd;
 VAR_6 = (unsigned char *)VAR_5->crd_key;
 if (VAR_4->cipheralg == VAR_1) {
  if (!(VAR_5->crd_flags & VAR_0)) {
                        uint64_t *VAR_8, *VAR_9;
   VAR_8 = (uint64_t *)VAR_5->crd_key;
   VAR_9 = (uint64_t *)VAR_4->des3key;
   VAR_9[2] = VAR_8[0];
   VAR_9[1] = VAR_8[1];
   VAR_9[0] = VAR_8[2];
   VAR_6 = (unsigned char *)VAR_9;
  }
 }
 FUNC_2(VAR_4->ctrlp, 0, VAR_2, 0,
     VAR_4->cipheralg, VAR_4->ciphermode, VAR_6,
     (VAR_5->crd_klen >> 3), ((void*)0), 0);

 FUNC_1(VAR_4->ctrlp, VAR_4->paramp,
     (VAR_5->crd_flags & VAR_0) ? 1 : 0, VAR_4->ivoff,
     VAR_4->ivlen, VAR_4->cipheroff, VAR_4->cipherlen);
 FUNC_3(VAR_4);

 VAR_7 = FUNC_0(VAR_3, VAR_4);
 return (VAR_7);
}
