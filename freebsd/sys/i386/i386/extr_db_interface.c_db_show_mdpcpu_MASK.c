
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct pcpu {int pc_smp_tlb_done; scalar_t__ pc_common_tssp; int pc_kesp0; int pc_trampstk; int pc_currentldt; int pc_apic_id; } ;


 int FUNC_0 (char*,int ) ;

void
FUNC_1(struct pcpu *VAR_0)
{

 FUNC_0("APIC ID      = %d\n", VAR_0->pc_apic_id);
 FUNC_0("currentldt   = 0x%x\n", VAR_0->pc_currentldt);
 FUNC_0("trampstk     = 0x%x\n", VAR_0->pc_trampstk);
 FUNC_0("kesp0        = 0x%x\n", VAR_0->pc_kesp0);
 FUNC_0("common_tssp  = 0x%x\n", (u_int)VAR_0->pc_common_tssp);
 FUNC_0("tlb gen      = %u\n", VAR_0->pc_smp_tlb_done);
}
