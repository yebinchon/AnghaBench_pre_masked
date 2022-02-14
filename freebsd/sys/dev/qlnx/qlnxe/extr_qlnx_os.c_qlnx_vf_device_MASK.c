
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ device_id; } ;
typedef TYPE_1__ qlnx_host_t ;


 scalar_t__ VAR_0 ;

int
FUNC_0(qlnx_host_t *VAR_1)
{
        uint16_t VAR_2;

        VAR_2 = VAR_1->device_id;

        if (VAR_2 == VAR_0)
                return 0;

        return -1;
}
