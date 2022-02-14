
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsslot {int dummy; } ;
struct nfsclsession {scalar_t__ nfsess_slots; scalar_t__* nfsess_slotseq; TYPE_1__* nfsess_cbslots; } ;
struct TYPE_2__ {int * nfssl_reply; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nfsclsession *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->nfsess_cbslots[VAR_2].nfssl_reply != ((void*)0))
   FUNC_1(VAR_1->nfsess_cbslots[VAR_2].nfssl_reply);
  FUNC_0(&VAR_1->nfsess_cbslots[VAR_2], sizeof(struct nfsslot));
 }
 for (VAR_2 = 0; VAR_2 < 64; VAR_2++)
  VAR_1->nfsess_slotseq[VAR_2] = 0;
 VAR_1->nfsess_slots = 0;
}
