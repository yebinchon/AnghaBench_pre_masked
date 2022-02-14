
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ cvmx_mgmt_port_state_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(int VAR_1, int VAR_2)
{
    cvmx_mgmt_port_state_t *VAR_3;

    if ((VAR_1 < 0) || (VAR_1 >= FUNC_2()))
        return;

    VAR_3 = VAR_0 + VAR_1;

    FUNC_3(&VAR_3->lock);
    FUNC_5(FUNC_0(VAR_1), VAR_2);
    FUNC_5(FUNC_1(VAR_1), (VAR_2+7) & 0xfff8);
    FUNC_4(&VAR_3->lock);
}
