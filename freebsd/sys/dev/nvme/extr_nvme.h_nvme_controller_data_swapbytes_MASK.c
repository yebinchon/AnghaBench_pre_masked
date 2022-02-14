
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller_data {int * power_state; void* mnan; void* sgls; void* acwu; void* awupf; void* awun; void* fuses; void* oncs; void* nn; void* maxcmd; void* pels; void* nanagrpid; void* anagrpmax; void* endgidmax; void* nsetidmax; void* hmmaxd; void* hmminds; void* sanicap; void* mxtmt; void* mntmt; void* hctma; void* kas; void* edstt; void* rpmbs; void* hmmin; void* hmpre; void* mtfa; void* cctemp; void* wctemp; void* oacs; void* crdt3; void* crdt2; void* crdt1; void* rrls; void* ctratt; void* oaes; void* rtd3e; void* rtd3r; void* ver; void* ctrlr_id; void* ssvid; void* vid; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline
void FUNC_3(struct nvme_controller_data *VAR_0)
{
 int VAR_1;

 VAR_0->vid = FUNC_0(VAR_0->vid);
 VAR_0->ssvid = FUNC_0(VAR_0->ssvid);
 VAR_0->ctrlr_id = FUNC_0(VAR_0->ctrlr_id);
 VAR_0->ver = FUNC_1(VAR_0->ver);
 VAR_0->rtd3r = FUNC_1(VAR_0->rtd3r);
 VAR_0->rtd3e = FUNC_1(VAR_0->rtd3e);
 VAR_0->oaes = FUNC_1(VAR_0->oaes);
 VAR_0->ctratt = FUNC_1(VAR_0->ctratt);
 VAR_0->rrls = FUNC_0(VAR_0->rrls);
 VAR_0->crdt1 = FUNC_0(VAR_0->crdt1);
 VAR_0->crdt2 = FUNC_0(VAR_0->crdt2);
 VAR_0->crdt3 = FUNC_0(VAR_0->crdt3);
 VAR_0->oacs = FUNC_0(VAR_0->oacs);
 VAR_0->wctemp = FUNC_0(VAR_0->wctemp);
 VAR_0->cctemp = FUNC_0(VAR_0->cctemp);
 VAR_0->mtfa = FUNC_0(VAR_0->mtfa);
 VAR_0->hmpre = FUNC_1(VAR_0->hmpre);
 VAR_0->hmmin = FUNC_1(VAR_0->hmmin);
 VAR_0->rpmbs = FUNC_1(VAR_0->rpmbs);
 VAR_0->edstt = FUNC_0(VAR_0->edstt);
 VAR_0->kas = FUNC_0(VAR_0->kas);
 VAR_0->hctma = FUNC_0(VAR_0->hctma);
 VAR_0->mntmt = FUNC_0(VAR_0->mntmt);
 VAR_0->mxtmt = FUNC_0(VAR_0->mxtmt);
 VAR_0->sanicap = FUNC_1(VAR_0->sanicap);
 VAR_0->hmminds = FUNC_1(VAR_0->hmminds);
 VAR_0->hmmaxd = FUNC_0(VAR_0->hmmaxd);
 VAR_0->nsetidmax = FUNC_0(VAR_0->nsetidmax);
 VAR_0->endgidmax = FUNC_0(VAR_0->endgidmax);
 VAR_0->anagrpmax = FUNC_1(VAR_0->anagrpmax);
 VAR_0->nanagrpid = FUNC_1(VAR_0->nanagrpid);
 VAR_0->pels = FUNC_1(VAR_0->pels);
 VAR_0->maxcmd = FUNC_0(VAR_0->maxcmd);
 VAR_0->nn = FUNC_1(VAR_0->nn);
 VAR_0->oncs = FUNC_0(VAR_0->oncs);
 VAR_0->fuses = FUNC_0(VAR_0->fuses);
 VAR_0->awun = FUNC_0(VAR_0->awun);
 VAR_0->awupf = FUNC_0(VAR_0->awupf);
 VAR_0->acwu = FUNC_0(VAR_0->acwu);
 VAR_0->sgls = FUNC_1(VAR_0->sgls);
 VAR_0->mnan = FUNC_1(VAR_0->mnan);
 for (VAR_1 = 0; VAR_1 < 32; VAR_1++)
  FUNC_2(&VAR_0->power_state[VAR_1]);
}
