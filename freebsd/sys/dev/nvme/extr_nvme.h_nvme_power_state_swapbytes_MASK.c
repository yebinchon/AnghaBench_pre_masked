
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_power_state {void* actp; void* idlp; void* exlat; void* enlat; void* mp; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static inline
void FUNC_2(struct nvme_power_state *VAR_0)
{

 VAR_0->mp = FUNC_0(VAR_0->mp);
 VAR_0->enlat = FUNC_1(VAR_0->enlat);
 VAR_0->exlat = FUNC_1(VAR_0->exlat);
 VAR_0->idlp = FUNC_0(VAR_0->idlp);
 VAR_0->actp = FUNC_0(VAR_0->actp);
}
