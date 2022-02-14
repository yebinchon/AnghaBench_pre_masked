
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu {int pc_asid_generation; int pc_next_asid; int pc_pending_ipis; } ;


 int FUNC_0 (char*,int ) ;

void
FUNC_1(struct pcpu *VAR_0)
{

 FUNC_0("ipis         = 0x%x\n", VAR_0->pc_pending_ipis);
 FUNC_0("next ASID    = %d\n", VAR_0->pc_next_asid);
 FUNC_0("GENID        = %d\n", VAR_0->pc_asid_generation);
 return;
}
