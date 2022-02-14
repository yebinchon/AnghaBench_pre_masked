
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ena_pko; int store_be; int ena_dwb; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_pko_reg_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(void)
{
    cvmx_pko_reg_flags_t VAR_2;

    VAR_2.u64 = FUNC_2(VAR_1);
    if (VAR_2.s.ena_pko)
        FUNC_0("Warning: Enabling PKO when PKO already enabled.\n");

    VAR_2.s.ena_dwb = FUNC_1(VAR_0);
    VAR_2.s.ena_pko = 1;
    VAR_2.s.store_be =1;



    FUNC_3(VAR_1, VAR_2.u64);
}
