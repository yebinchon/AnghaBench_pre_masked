
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsrvdscreate {int done; int err; int p; int tcred; int pf; int fh; int va; int createva; int dvp; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int *,int *,int *,int ,int *,int *,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, int VAR_1)
{
 struct nfsrvdscreate *VAR_2;

 VAR_2 = (struct nfsrvdscreate *)VAR_0;
 VAR_2->err = FUNC_1(VAR_2->dvp, &VAR_2->createva, &VAR_2->va, &VAR_2->fh,
     VAR_2->pf, ((void*)0), ((void*)0), VAR_2->tcred, VAR_2->p, ((void*)0));
 VAR_2->done = 1;
 FUNC_0(4, "start_dscreate: err=%d\n", VAR_2->err);
}
