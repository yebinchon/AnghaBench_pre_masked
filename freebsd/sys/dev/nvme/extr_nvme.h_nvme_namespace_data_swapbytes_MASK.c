
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_namespace_data {void** lbaf; void* endgid; void* nvmsetid; void* anagrpid; void* nows; void* npda; void* npdg; void* npwa; void* npwg; void* noiob; void* nabspf; void* nabo; void* nabsn; void* nacwu; void* nawupf; void* nawun; void* nuse; void* ncap; void* nsze; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static inline
void FUNC_3(struct nvme_namespace_data *VAR_0)
{
 int VAR_1;

 VAR_0->nsze = FUNC_2(VAR_0->nsze);
 VAR_0->ncap = FUNC_2(VAR_0->ncap);
 VAR_0->nuse = FUNC_2(VAR_0->nuse);
 VAR_0->nawun = FUNC_0(VAR_0->nawun);
 VAR_0->nawupf = FUNC_0(VAR_0->nawupf);
 VAR_0->nacwu = FUNC_0(VAR_0->nacwu);
 VAR_0->nabsn = FUNC_0(VAR_0->nabsn);
 VAR_0->nabo = FUNC_0(VAR_0->nabo);
 VAR_0->nabspf = FUNC_0(VAR_0->nabspf);
 VAR_0->noiob = FUNC_0(VAR_0->noiob);
 VAR_0->npwg = FUNC_0(VAR_0->npwg);
 VAR_0->npwa = FUNC_0(VAR_0->npwa);
 VAR_0->npdg = FUNC_0(VAR_0->npdg);
 VAR_0->npda = FUNC_0(VAR_0->npda);
 VAR_0->nows = FUNC_0(VAR_0->nows);
 VAR_0->anagrpid = FUNC_1(VAR_0->anagrpid);
 VAR_0->nvmsetid = FUNC_0(VAR_0->nvmsetid);
 VAR_0->endgid = FUNC_0(VAR_0->endgid);
 for (VAR_1 = 0; VAR_1 < 16; VAR_1++)
  VAR_0->lbaf[VAR_1] = FUNC_1(VAR_0->lbaf[VAR_1]);
}
