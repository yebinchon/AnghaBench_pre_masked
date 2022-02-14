
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsrvwritedsdorpc {int done; int err; int p; int cred; int m; int len; int off; int fh; int nmp; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int *,int ,int ,int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, int VAR_1)
{
 struct nfsrvwritedsdorpc *VAR_2;

 VAR_2 = (struct nfsrvwritedsdorpc *)VAR_0;
 VAR_2->err = FUNC_1(VAR_2->nmp, &VAR_2->fh, VAR_2->off,
     VAR_2->len, ((void*)0), VAR_2->m, VAR_2->cred, VAR_2->p);
 VAR_2->done = 1;
 FUNC_0(4, "start_writedsdorpc: err=%d\n", VAR_2->err);
}
