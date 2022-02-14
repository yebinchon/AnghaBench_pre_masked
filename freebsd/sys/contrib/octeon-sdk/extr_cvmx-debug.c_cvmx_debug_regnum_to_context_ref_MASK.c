
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int volatile depc; int volatile cause; int volatile badvaddr; int volatile status; } ;
struct TYPE_5__ {TYPE_1__ cop0; int volatile hi; int volatile lo; int volatile* regs; } ;
typedef TYPE_2__ cvmx_debug_core_context_t ;



__attribute__((used)) static volatile uint64_t *FUNC_0(int VAR_0, volatile cvmx_debug_core_context_t *VAR_1)
{

    if (VAR_0 < 32)
        return &VAR_1->regs[VAR_0];
    switch (VAR_0)
    {
        case 32: return &VAR_1->cop0.status;
        case 33: return &VAR_1->lo;
        case 34: return &VAR_1->hi;
        case 35: return &VAR_1->cop0.badvaddr;
        case 36: return &VAR_1->cop0.cause;
        case 37: return &VAR_1->cop0.depc;
        default: return ((void*)0);
    }
}
