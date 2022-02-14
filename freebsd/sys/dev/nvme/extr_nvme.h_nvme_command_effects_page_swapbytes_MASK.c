
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_command_effects_page {void** iocs; void** acs; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static inline
void FUNC_1(struct nvme_command_effects_page *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 256; VAR_1++)
  VAR_0->acs[VAR_1] = FUNC_0(VAR_0->acs[VAR_1]);
 for (VAR_1 = 0; VAR_1 < 256; VAR_1++)
  VAR_0->iocs[VAR_1] = FUNC_0(VAR_0->iocs[VAR_1]);
}
