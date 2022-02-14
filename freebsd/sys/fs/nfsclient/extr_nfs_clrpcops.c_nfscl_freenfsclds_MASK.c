
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* nfsess_cbslots; int nfsess_mtx; } ;
struct nfsclds {TYPE_2__ nfsclds_sess; int nfsclds_mtx; struct nfsclds* nfsclds_sockp; struct nfsclds* nr_nam; int nr_mtx; int nr_cred; } ;
struct TYPE_3__ {int * nfssl_reply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct nfsclds*,int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct nfsclds *VAR_4)
{
 int VAR_5;

 if (VAR_4 == ((void*)0))
  return;
 if (VAR_4->nfsclds_sockp != ((void*)0)) {
  FUNC_0(VAR_4->nfsclds_sockp->nr_cred);
  FUNC_1(&VAR_4->nfsclds_sockp->nr_mtx);
  FUNC_2(VAR_4->nfsclds_sockp->nr_nam, VAR_2);
  FUNC_2(VAR_4->nfsclds_sockp, VAR_1);
 }
 FUNC_1(&VAR_4->nfsclds_mtx);
 FUNC_1(&VAR_4->nfsclds_sess.nfsess_mtx);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_4->nfsclds_sess.nfsess_cbslots[VAR_5].nfssl_reply != ((void*)0))
   FUNC_3(
       VAR_4->nfsclds_sess.nfsess_cbslots[VAR_5].nfssl_reply);
 }
 FUNC_2(VAR_4, VAR_0);
}
