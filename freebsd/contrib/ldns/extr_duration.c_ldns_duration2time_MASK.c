
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {int minutes; int hours; int days; int weeks; int months; int years; scalar_t__ seconds; } ;
typedef TYPE_1__ ldns_duration_type ;



time_t
FUNC_0(const ldns_duration_type* VAR_0)
{
    time_t VAR_1 = 0;

    if (VAR_0) {
        VAR_1 += (VAR_0->seconds);
        VAR_1 += (VAR_0->minutes)*60;
        VAR_1 += (VAR_0->hours)*3600;
        VAR_1 += (VAR_0->days)*86400;
        VAR_1 += (VAR_0->weeks)*86400*7;
        VAR_1 += (VAR_0->months)*86400*31;
        VAR_1 += (VAR_0->years)*86400*365;






    }
    return VAR_1;
}
