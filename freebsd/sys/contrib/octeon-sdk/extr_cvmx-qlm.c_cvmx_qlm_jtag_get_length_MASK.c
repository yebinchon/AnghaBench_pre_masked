
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stop_bit; scalar_t__ name; } ;
typedef TYPE_1__ __cvmx_qlm_jtag_field_t ;


 TYPE_1__* FUNC_0 () ;

int FUNC_1(void)
{
    const __cvmx_qlm_jtag_field_t *VAR_0 = FUNC_0();
    int VAR_1 = 0;


    while (VAR_0 != ((void*)0) && VAR_0->name)
    {
        if (VAR_0->stop_bit > VAR_1)
            VAR_1 = VAR_0->stop_bit + 1;
        VAR_0++;
    }
    return VAR_1;
}
