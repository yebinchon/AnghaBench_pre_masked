
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* cvmx_core_perf_t ;
struct TYPE_3__ {int u; int s; int k; int ex; void* event; } ;
struct TYPE_4__ {TYPE_1__ s; scalar_t__ u32; } ;
typedef TYPE_2__ cvmx_core_perf_control_t ;



void FUNC_0(cvmx_core_perf_t VAR_0, cvmx_core_perf_t VAR_1)
{
    cvmx_core_perf_control_t VAR_2;

    VAR_2.u32 = 0;
    VAR_2.s.event = VAR_0;
    VAR_2.s.u = 1;
    VAR_2.s.s = 1;
    VAR_2.s.k = 1;
    VAR_2.s.ex = 1;
    asm ("mtc0 %0, $25, 0\n" : : "r"(VAR_2.u32));
    VAR_2.s.event = VAR_1;
    asm ("mtc0 %0, $25, 2\n" : : "r"(VAR_2.u32));
}
