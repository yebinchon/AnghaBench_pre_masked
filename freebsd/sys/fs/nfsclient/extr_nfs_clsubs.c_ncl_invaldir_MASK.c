
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; } ;
struct TYPE_3__ {scalar_t__* nfsuquad; } ;
struct nfsnode {int n_cookies; TYPE_1__ n_cookieverf; scalar_t__ n_direofoffset; } ;
struct TYPE_4__ {scalar_t__ ndm_eocookie; } ;


 int FUNC_0 (int,char*) ;
 TYPE_2__* FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 struct nfsnode* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct nfsnode*) ;
 int FUNC_4 (struct nfsnode*) ;

void
FUNC_5(struct vnode *VAR_1)
{
 struct nfsnode *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_1->v_type == VAR_0, ("nfs: invaldir not dir"));
 FUNC_3(VAR_2);
 VAR_2->n_direofoffset = 0;
 VAR_2->n_cookieverf.nfsuquad[0] = 0;
 VAR_2->n_cookieverf.nfsuquad[1] = 0;
 if (FUNC_1(&VAR_2->n_cookies))
  FUNC_1(&VAR_2->n_cookies)->ndm_eocookie = 0;
 FUNC_4(VAR_2);
}
