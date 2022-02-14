
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ years; scalar_t__ months; scalar_t__ weeks; scalar_t__ days; scalar_t__ hours; scalar_t__ minutes; scalar_t__ seconds; } ;
typedef TYPE_1__ ldns_duration_type ;



int
FUNC_0(const ldns_duration_type* VAR_0, const ldns_duration_type* VAR_1)
{
    if (!VAR_0 && !VAR_1) {
        return 0;
    }
    if (!VAR_0 || !VAR_1) {
        return VAR_0?-1:1;
    }

    if (VAR_0->years != VAR_1->years) {
        return (int) (VAR_0->years - VAR_1->years);
    }
    if (VAR_0->months != VAR_1->months) {
        return (int) (VAR_0->months - VAR_1->months);
    }
    if (VAR_0->weeks != VAR_1->weeks) {
        return (int) (VAR_0->weeks - VAR_1->weeks);
    }
    if (VAR_0->days != VAR_1->days) {
        return (int) (VAR_0->days - VAR_1->days);
    }
    if (VAR_0->hours != VAR_1->hours) {
        return (int) (VAR_0->hours - VAR_1->hours);
    }
    if (VAR_0->minutes != VAR_1->minutes) {
        return (int) (VAR_0->minutes - VAR_1->minutes);
    }
    if (VAR_0->seconds != VAR_1->seconds) {
        return (int) (VAR_0->seconds - VAR_1->seconds);
    }

    return 0;
}
