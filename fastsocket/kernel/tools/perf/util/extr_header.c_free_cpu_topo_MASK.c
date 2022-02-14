
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cpu_topo {size_t core_sib; size_t thread_sib; struct cpu_topo** thread_siblings; struct cpu_topo** core_siblings; } ;


 int FUNC_0 (struct cpu_topo*) ;

__attribute__((used)) static void FUNC_1(struct cpu_topo *VAR_0)
{
 u32 VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = 0 ; VAR_1 < VAR_0->core_sib; VAR_1++)
  FUNC_0(VAR_0->core_siblings[VAR_1]);

 for (VAR_1 = 0 ; VAR_1 < VAR_0->thread_sib; VAR_1++)
  FUNC_0(VAR_0->thread_siblings[VAR_1]);

 FUNC_0(VAR_0);
}
