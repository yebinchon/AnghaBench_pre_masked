
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* perfctrl; } ;
struct TYPE_8__ {TYPE_1__ cop0; } ;
typedef TYPE_3__ cvmx_debug_core_context_t ;
struct TYPE_7__ {int u; int s; int k; int ex; int w; int m; int event; } ;
struct TYPE_9__ {scalar_t__ u32; TYPE_2__ s; } ;
typedef TYPE_4__ cvmx_core_perf_control_t ;



__attribute__((used)) static void FUNC_0 (volatile cvmx_debug_core_context_t *VAR_0, int VAR_1, int VAR_2)
{
    cvmx_core_perf_control_t VAR_3;

    VAR_3.u32 = 0;
    VAR_3.s.u = 1;
    VAR_3.s.s = 1;
    VAR_3.s.k = 1;
    VAR_3.s.ex = 1;
    VAR_3.s.w = 1;
    VAR_3.s.m = 1 - VAR_2;
    VAR_3.s.event = VAR_1;

    VAR_0->cop0.perfctrl[VAR_2] = VAR_3.u32;
}
