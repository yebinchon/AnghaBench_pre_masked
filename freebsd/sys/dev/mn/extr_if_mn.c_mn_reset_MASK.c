
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {int csa; int ccb; int* ts; } ;
struct mn_softc {int tiqb; int riqb; int ltiqb; int lriqb; int piqb; int unit; TYPE_2__ m32_mem; TYPE_1__* m32x; } ;
struct TYPE_3__ {int tiql; int riql; int ltiql; int lriql; int piql; int stat; int cmd; void* piqba; void* lriqba; void* ltiqba; void* riqba; void* tiqba; void* ccba; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct mn_softc*) ;
 int FUNC_3 (struct mn_softc*) ;
 int FUNC_4 (char*,int,int) ;
 void* FUNC_5 (int*) ;

__attribute__((used)) static int
FUNC_6(struct mn_softc *VAR_1)
{
 u_int32_t VAR_2;
 int VAR_3;

 VAR_1->m32x->ccba = FUNC_5(&VAR_1->m32_mem.csa);
 VAR_1->m32_mem.csa = FUNC_5(&VAR_1->m32_mem.ccb);

 FUNC_1(VAR_1->tiqb, sizeof VAR_1->tiqb);
 VAR_1->m32x->tiqba = FUNC_5(&VAR_1->tiqb);
 VAR_1->m32x->tiql = VAR_0 / 16 - 1;

 FUNC_1(VAR_1->riqb, sizeof VAR_1->riqb);
 VAR_1->m32x->riqba = FUNC_5(&VAR_1->riqb);
 VAR_1->m32x->riql = VAR_0 / 16 - 1;

 FUNC_1(VAR_1->ltiqb, sizeof VAR_1->ltiqb);
 VAR_1->m32x->ltiqba = FUNC_5(&VAR_1->ltiqb);
 VAR_1->m32x->ltiql = VAR_0 / 16 - 1;

 FUNC_1(VAR_1->lriqb, sizeof VAR_1->lriqb);
 VAR_1->m32x->lriqba = FUNC_5(&VAR_1->lriqb);
 VAR_1->m32x->lriql = VAR_0 / 16 - 1;

 FUNC_1(VAR_1->piqb, sizeof VAR_1->piqb);
 VAR_1->m32x->piqba = FUNC_5(&VAR_1->piqb);
 VAR_1->m32x->piql = VAR_0 / 16 - 1;

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);

 VAR_2 = VAR_1->m32x->stat;
 VAR_1->m32x->stat = VAR_2;
 VAR_1->m32_mem.ccb = 0x4;
 VAR_1->m32x->cmd = 0x1;
 FUNC_0(1000);
 VAR_2 = VAR_1->m32x->stat;
 VAR_1->m32x->stat = VAR_2;


 for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
  VAR_1->m32_mem.ts[VAR_3] = 0x20002000;

 if (!(VAR_2 & 1)) {
  FUNC_4(
"mn%d: WARNING: Controller failed the PCI bus-master test.\n"
"mn%d: WARNING: Use a PCI slot which can support bus-master cards.\n",
      VAR_1->unit, VAR_1->unit);
  return (0);
 }
 return (1);
}
