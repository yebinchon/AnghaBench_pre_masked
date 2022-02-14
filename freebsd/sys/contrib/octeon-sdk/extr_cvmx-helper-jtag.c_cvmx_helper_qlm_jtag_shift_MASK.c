
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int shift; int shft_cnt; int shft_reg; int select; } ;
struct TYPE_7__ {TYPE_2__ s; void* u64; } ;
typedef TYPE_3__ cvmx_ciu_qlm_jtgd_t ;
struct TYPE_5__ {int mux_sel; int bypass; } ;
struct TYPE_8__ {void* u64; TYPE_1__ s; } ;
typedef TYPE_4__ cvmx_ciu_qlm_jtgc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;

uint32_t FUNC_3(int VAR_5, int VAR_6, uint32_t VAR_7)
{
    cvmx_ciu_qlm_jtgc_t VAR_8;
    cvmx_ciu_qlm_jtgd_t VAR_9;

    VAR_8.u64 = FUNC_1(VAR_0);
    VAR_8.s.mux_sel = VAR_5;
    if (!FUNC_0(VAR_3) && !FUNC_0(VAR_4))
        VAR_8.s.bypass = 1<<VAR_5;
    FUNC_2(VAR_0, VAR_8.u64);
    FUNC_1(VAR_0);

    VAR_9.u64 = 0;
    VAR_9.s.shift = 1;
    VAR_9.s.shft_cnt = VAR_6-1;
    VAR_9.s.shft_reg = VAR_7;
    if (!FUNC_0(VAR_2))
        VAR_9.s.select = 1 << VAR_5;
    FUNC_2(VAR_1, VAR_9.u64);
    do
    {
        VAR_9.u64 = FUNC_1(VAR_1);
    } while (VAR_9.s.shift);
    return VAR_9.s.shft_reg >> (32-VAR_6);
}
