
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsclwritedsdorpc {int done; int err; int p; int cred; int minorvers; int vers; int fhp; int dsp; int len; int off; int vp; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, int VAR_1)
{
 struct nfsclwritedsdorpc *VAR_2;

 VAR_2 = (struct nfsclwritedsdorpc *)VAR_0;
 VAR_2->err = FUNC_1(VAR_2->vp, VAR_2->off, VAR_2->len,
     VAR_2->dsp, VAR_2->fhp, VAR_2->vers, VAR_2->minorvers, VAR_2->cred,
     VAR_2->p);
 VAR_2->done = 1;
 FUNC_0(4, "start_commitds: err=%d\n", VAR_2->err);
}
