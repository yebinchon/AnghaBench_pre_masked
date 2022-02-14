
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_guest_paging {int paging_mode; int cpu_mode; int cpl; int cr3; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct vm_guest_paging *VAR_0)
{
 VAR_0->cr3 = FUNC_0();
 VAR_0->cpl = FUNC_1();
 VAR_0->cpu_mode = FUNC_2();
 VAR_0->paging_mode = FUNC_3();
}
