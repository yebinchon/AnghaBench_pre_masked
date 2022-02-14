
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct nvme_command {int dummy; } ;
struct TYPE_2__ {void* cdw15; void* cdw14; void* cdw13; void* cdw12; void* cdw11; void* cdw10; void* nsid; int opc; } ;
struct ccb_nvmeio {TYPE_1__ cmd; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 void* FUNC_1 (int ) ;

void
FUNC_2(struct ccb_nvmeio *VAR_0, uint8_t VAR_1, uint32_t VAR_2,
    uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6,
    uint32_t VAR_7, uint32_t VAR_8)
{
 FUNC_0(&VAR_0->cmd, sizeof(struct nvme_command));
 VAR_0->cmd.opc = VAR_1;
 VAR_0->cmd.nsid = FUNC_1(VAR_2);
 VAR_0->cmd.cdw10 = FUNC_1(VAR_3);
 VAR_0->cmd.cdw11 = FUNC_1(VAR_4);
 VAR_0->cmd.cdw12 = FUNC_1(VAR_5);
 VAR_0->cmd.cdw13 = FUNC_1(VAR_6);
 VAR_0->cmd.cdw14 = FUNC_1(VAR_7);
 VAR_0->cmd.cdw15 = FUNC_1(VAR_8);
}
