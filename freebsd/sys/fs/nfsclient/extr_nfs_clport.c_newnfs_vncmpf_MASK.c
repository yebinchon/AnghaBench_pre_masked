
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct nfsnode {TYPE_1__* n_fhp; } ;
struct nfsfh {scalar_t__ nfh_len; int nfh_fh; } ;
struct TYPE_2__ {scalar_t__ nfh_len; int nfh_fh; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 struct nfsnode* FUNC_1 (struct vnode*) ;

int
FUNC_2(struct vnode *VAR_0, void *VAR_1)
{
 struct nfsfh *VAR_2 = (struct nfsfh *)VAR_1;
 struct nfsnode *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->n_fhp->nfh_len != VAR_2->nfh_len ||
     FUNC_0(VAR_3->n_fhp->nfh_fh, VAR_2->nfh_fh, VAR_2->nfh_len))
  return (1);
 return (0);
}
