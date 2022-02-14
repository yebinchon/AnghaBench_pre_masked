
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct show_state {int* printed; TYPE_1__* rule; } ;
typedef int ipfw_insn ;
struct TYPE_2__ {int const* cmd; } ;



__attribute__((used)) static void
FUNC_0(struct show_state *VAR_0, const ipfw_insn *VAR_1)
{

 VAR_0->printed[VAR_1 - VAR_0->rule->cmd] = 1;
}
