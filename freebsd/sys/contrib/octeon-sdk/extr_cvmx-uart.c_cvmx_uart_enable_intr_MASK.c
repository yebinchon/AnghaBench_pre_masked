
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cvmx_uart_intr_handler_t ;
struct TYPE_3__ {int erbfi; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_uart_ier_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(int VAR_1, cvmx_uart_intr_handler_t VAR_2)
{

    cvmx_uart_ier_t VAR_3;

    FUNC_1(VAR_0 + VAR_1, VAR_2, ((void*)0));

    VAR_3.u64 = FUNC_3(FUNC_0(VAR_1));
    VAR_3.s.erbfi = 1;
    FUNC_4(FUNC_0(VAR_1), VAR_3.u64);

    FUNC_2(VAR_0 + VAR_1);

}
