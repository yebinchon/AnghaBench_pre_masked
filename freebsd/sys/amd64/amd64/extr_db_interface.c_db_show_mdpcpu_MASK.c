
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu {int pc_smp_tlb_done; int pc_tss; int pc_ldt; int pc_gs32p; int pc_saved_ucr3; int pc_ucr3; int pc_kcr3; int pc_rsp0; int pc_tssp; int pc_curpmap; int pc_prvspace; } ;


 int FUNC_0 (char*,int ) ;

void
FUNC_1(struct pcpu *VAR_0)
{

 FUNC_0("self         = %p\n", VAR_0->pc_prvspace);
 FUNC_0("curpmap      = %p\n", VAR_0->pc_curpmap);
 FUNC_0("tssp         = %p\n", VAR_0->pc_tssp);
 FUNC_0("rsp0         = 0x%lx\n", VAR_0->pc_rsp0);
 FUNC_0("kcr3         = 0x%lx\n", VAR_0->pc_kcr3);
 FUNC_0("ucr3         = 0x%lx\n", VAR_0->pc_ucr3);
 FUNC_0("scr3         = 0x%lx\n", VAR_0->pc_saved_ucr3);
 FUNC_0("gs32p        = %p\n", VAR_0->pc_gs32p);
 FUNC_0("ldt          = %p\n", VAR_0->pc_ldt);
 FUNC_0("tss          = %p\n", VAR_0->pc_tss);
 FUNC_0("tlb gen      = %u\n", VAR_0->pc_smp_tlb_done);
}
