
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct t4_offload_policy* bf_insns; } ;
struct t4_offload_policy {int nrules; struct t4_offload_policy* rule; TYPE_1__ bpf_prog; } ;
struct offload_rule {int nrules; struct offload_rule* rule; TYPE_1__ bpf_prog; } ;


 int VAR_0 ;
 int FUNC_0 (struct t4_offload_policy*,int ) ;

__attribute__((used)) static void
FUNC_1(struct t4_offload_policy *VAR_1)
{
 struct offload_rule *VAR_2;
 int VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = &VAR_1->rule[0];
 for (VAR_3 = 0; VAR_3 < VAR_1->nrules; VAR_3++, VAR_2++) {
  FUNC_0(VAR_2->bpf_prog.bf_insns, VAR_0);
 }
 FUNC_0(VAR_1->rule, VAR_0);
 FUNC_0(VAR_1, VAR_0);
}
