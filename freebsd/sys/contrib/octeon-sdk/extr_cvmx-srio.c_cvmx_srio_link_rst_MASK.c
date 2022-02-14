
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ valid; } ;
struct TYPE_4__ {int u32; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_sriomaintx_port_0_link_resp_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ,int,int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int,int ,int,int ,int ,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;

int FUNC_7(int VAR_2)
{
    cvmx_sriomaintx_port_0_link_resp_t VAR_3;

    if (FUNC_2(VAR_1))
        return -1;


    if (FUNC_4(VAR_2, 0, -1, 0, 0,
        FUNC_0(VAR_2), 3))
        return -1;

    if (FUNC_3(VAR_2, 0, -1, 0, 0,
        FUNC_1(VAR_2), &VAR_3.u32))
        return -1;


    while (VAR_3.s.valid == 0)
    {

        if (FUNC_3(VAR_2, 0, -1, 0, 0,
            FUNC_1(VAR_2), &VAR_3.u32))
            return -1;
    }


    FUNC_6(VAR_0, 0x1);

    FUNC_5(10);


    FUNC_6(VAR_0, 0x0);

    return 0;
}
