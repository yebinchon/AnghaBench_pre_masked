
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int uart; } ;
struct TYPE_4__ {void* u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_ciu_intx0_t ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static void FUNC_3(int VAR_1, int VAR_2)
{

    cvmx_ciu_intx0_t VAR_3;

    VAR_3.u64 = FUNC_1(FUNC_0(VAR_2 * 2));
    VAR_3.s.uart |= (1u<<VAR_0);
    FUNC_2(FUNC_0(VAR_2 * 2), VAR_3.u64);


    VAR_3.u64 = FUNC_1(FUNC_0(VAR_1 * 2));
    VAR_3.s.uart &= ~(1u<<VAR_0);
    FUNC_2(FUNC_0(VAR_1* 2), VAR_3.u64);

}
