
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_3__ {scalar_t__ reseed_time_interval; } ;
typedef TYPE_1__ RAND_DRBG ;


 scalar_t__ VAR_0 ;

int FUNC_0(RAND_DRBG *VAR_1, time_t VAR_2)
{
    if (VAR_2 > VAR_0)
        return 0;
    VAR_1->reseed_time_interval = VAR_2;
    return 1;
}
