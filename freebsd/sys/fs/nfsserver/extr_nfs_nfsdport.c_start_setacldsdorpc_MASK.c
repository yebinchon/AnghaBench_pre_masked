
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsrvsetacldsdorpc {int done; int aclp; int nmp; int vp; int p; int cred; int fh; int err; } ;


 int FUNC_0 (int *,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, int VAR_1)
{
 struct nfsrvsetacldsdorpc *VAR_2;

 VAR_2 = (struct nfsrvsetacldsdorpc *)VAR_0;
 VAR_2->err = FUNC_0(&VAR_2->fh, VAR_2->cred, VAR_2->p,
     VAR_2->vp, VAR_2->nmp, VAR_2->aclp);
 VAR_2->done = 1;
}
