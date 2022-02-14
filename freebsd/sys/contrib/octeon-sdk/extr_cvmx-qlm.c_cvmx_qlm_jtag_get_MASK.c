
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int start_bit; int stop_bit; } ;
typedef TYPE_1__ __cvmx_qlm_jtag_field_t ;


 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

uint64_t FUNC_6(int VAR_0, int VAR_1, const char *VAR_2)
{
    const __cvmx_qlm_jtag_field_t *VAR_3 = FUNC_0(VAR_2);
    int VAR_4 = FUNC_5();
    int VAR_5 = FUNC_4(VAR_0);

    if (!VAR_3)
        return 0;


    FUNC_1(VAR_0);

    FUNC_3(VAR_0, VAR_4 * (VAR_5-1-VAR_1));
    FUNC_3(VAR_0, VAR_3->start_bit);

    return FUNC_2(VAR_0, VAR_3->stop_bit - VAR_3->start_bit + 1, 0);
}
