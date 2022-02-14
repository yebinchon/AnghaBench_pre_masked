
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* state; } ;
typedef int ssh_packet_hook_fn ;
struct TYPE_2__ {void* hook_in_ctx; int * hook_in; } ;



void
FUNC_0(struct ssh *VAR_0, ssh_packet_hook_fn *VAR_1, void *VAR_2)
{
 VAR_0->state->hook_in = VAR_1;
 VAR_0->state->hook_in_ctx = VAR_2;
}
