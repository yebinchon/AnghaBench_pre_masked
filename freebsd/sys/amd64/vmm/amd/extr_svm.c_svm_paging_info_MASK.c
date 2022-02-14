
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcb_state {int efer; int cr4; int cr0; int cr3; } ;
struct vmcb {struct vmcb_state state; } ;
struct vm_guest_paging {int paging_mode; int cpu_mode; int cpl; int cr3; } ;


 int FUNC_0 (struct vmcb_state*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct vmcb*) ;

__attribute__((used)) static void
FUNC_3(struct vmcb *VAR_0, struct vm_guest_paging *VAR_1)
{
 struct vmcb_state *VAR_2;

 VAR_2 = &VAR_0->state;
 VAR_1->cr3 = VAR_2->cr3;
 VAR_1->cpl = FUNC_0(VAR_2);
 VAR_1->cpu_mode = FUNC_2(VAR_0);
 VAR_1->paging_mode = FUNC_1(VAR_2->cr0, VAR_2->cr4,
     VAR_2->efer);
}
