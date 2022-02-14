
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ seconds; scalar_t__ minutes; scalar_t__ hours; scalar_t__ days; scalar_t__ weeks; scalar_t__ months; scalar_t__ years; } ;
typedef TYPE_1__ ldns_duration_type ;


 TYPE_1__* FUNC_0 (int) ;

ldns_duration_type*
FUNC_1(void)
{
    ldns_duration_type* VAR_0;

    VAR_0 = FUNC_0(sizeof(ldns_duration_type));
    if (!VAR_0) {
        return ((void*)0);
    }
    VAR_0->years = 0;
    VAR_0->months = 0;
    VAR_0->weeks = 0;
    VAR_0->days = 0;
    VAR_0->hours = 0;
    VAR_0->minutes = 0;
    VAR_0->seconds = 0;
    return VAR_0;
}
