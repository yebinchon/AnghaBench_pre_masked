
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ device_id; } ;
typedef TYPE_1__ qlnx_host_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_0(qlnx_host_t *VAR_6)
{
        uint16_t VAR_7;

        VAR_7 = VAR_6->device_id;


        if ((VAR_7 == VAR_0) ||
                (VAR_7 == VAR_1) ||
                (VAR_7 == VAR_3) ||
                (VAR_7 == VAR_2) ||
                (VAR_7 == VAR_4))
                return 0;





        return -1;
}
