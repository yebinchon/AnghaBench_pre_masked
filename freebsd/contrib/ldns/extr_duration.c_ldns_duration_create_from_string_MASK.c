
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* time_t ;
struct TYPE_5__ {void* weeks; void* seconds; void* minutes; void* hours; void* days; void* months; void* years; } ;
typedef TYPE_1__ ldns_duration_type ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 char* FUNC_3 (char const*,char) ;
 char* FUNC_4 (char const*,char) ;

ldns_duration_type*
FUNC_5(const char* VAR_0)
{
    ldns_duration_type* VAR_1 = FUNC_2();
    char* VAR_2, *VAR_3, *VAR_4, *VAR_5;
    int VAR_6 = 0;

    if (!VAR_1) {
        return ((void*)0);
    }
    if (!VAR_0) {
        return VAR_1;
    }

    VAR_2 = FUNC_3(VAR_0, 'P');
    if (!VAR_2) {
 FUNC_1(VAR_1);
        return ((void*)0);
    }

    VAR_4 = FUNC_3(VAR_0, 'T');
    VAR_3 = FUNC_3(VAR_0, 'Y');
    if (VAR_3) {
        VAR_1->years = (time_t) FUNC_0(VAR_0+1);
        VAR_0 = VAR_3;
        VAR_6 = 1;
    }
    VAR_3 = FUNC_3(VAR_0, 'M');
    if (VAR_3 && (!VAR_4 || (size_t) (VAR_3-VAR_2) < (size_t) (VAR_4-VAR_2))) {
        VAR_1->months = (time_t) FUNC_0(VAR_0+1);
        VAR_0 = VAR_3;
        VAR_6 = 1;
    }
    VAR_3 = FUNC_3(VAR_0, 'D');
    if (VAR_3) {
        VAR_1->days = (time_t) FUNC_0(VAR_0+1);
        VAR_0 = VAR_3;
        VAR_6 = 1;
    }
    if (VAR_4) {
        VAR_0 = VAR_4;
        VAR_6 = 1;
    }
    VAR_3 = FUNC_3(VAR_0, 'H');
    if (VAR_3 && VAR_4) {
        VAR_1->hours = (time_t) FUNC_0(VAR_0+1);
        VAR_0 = VAR_3;
        VAR_6 = 1;
    }
    VAR_3 = FUNC_4(VAR_0, 'M');
    if (VAR_3 && VAR_4 && (size_t) (VAR_3-VAR_2) > (size_t) (VAR_4-VAR_2)) {
        VAR_1->minutes = (time_t) FUNC_0(VAR_0+1);
        VAR_0 = VAR_3;
        VAR_6 = 1;
    }
    VAR_3 = FUNC_3(VAR_0, 'S');
    if (VAR_3 && VAR_4) {
        VAR_1->seconds = (time_t) FUNC_0(VAR_0+1);
        VAR_0 = VAR_3;
        VAR_6 = 1;
    }

    VAR_5 = FUNC_3(VAR_0, 'W');
    if (VAR_5) {
        if (VAR_6) {
            FUNC_1(VAR_1);
            return ((void*)0);
        } else {
            VAR_1->weeks = (time_t) FUNC_0(VAR_0+1);
            VAR_0 = VAR_5;
        }
    }
    return VAR_1;
}
