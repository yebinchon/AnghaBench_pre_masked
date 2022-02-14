
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ years; scalar_t__ months; scalar_t__ weeks; scalar_t__ days; scalar_t__ hours; scalar_t__ minutes; scalar_t__ seconds; } ;
typedef TYPE_1__ ldns_duration_type ;


 scalar_t__ FUNC_0 (size_t,int) ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*,size_t,char*,unsigned int) ;
 char* FUNC_4 (char*,char*,size_t) ;

char*
FUNC_5(const ldns_duration_type* VAR_0)
{
    char* VAR_1 = ((void*)0), *VAR_2 = ((void*)0);
    size_t VAR_3 = 2;
    int VAR_4 = 0;

    if (!VAR_0) {
        return ((void*)0);
    }

    if (VAR_0->years > 0) {
        VAR_3 = VAR_3 + 1 + FUNC_1(VAR_0->years);
    }
    if (VAR_0->months > 0) {
        VAR_3 = VAR_3 + 1 + FUNC_1(VAR_0->months);
    }
    if (VAR_0->weeks > 0) {
        VAR_3 = VAR_3 + 1 + FUNC_1(VAR_0->weeks);
    }
    if (VAR_0->days > 0) {
        VAR_3 = VAR_3 + 1 + FUNC_1(VAR_0->days);
    }
    if (VAR_0->hours > 0) {
        VAR_3 = VAR_3 + 1 + FUNC_1(VAR_0->hours);
        VAR_4 = 1;
    }
    if (VAR_0->minutes > 0) {
        VAR_3 = VAR_3 + 1 + FUNC_1(VAR_0->minutes);
        VAR_4 = 1;
    }
    if (VAR_0->seconds > 0) {
        VAR_3 = VAR_3 + 1 + FUNC_1(VAR_0->seconds);
        VAR_4 = 1;
    }
    if (VAR_4) {
        VAR_3++;
    }

    VAR_1 = (char*) FUNC_0(VAR_3, sizeof(char));
    VAR_1[0] = 'P';
    VAR_1[1] = '\0';

    if (VAR_0->years > 0) {
        VAR_3 = FUNC_1(VAR_0->years);
        VAR_2 = (char*) FUNC_0(VAR_3+2, sizeof(char));
        FUNC_3(VAR_2, VAR_3+2, "%uY", (unsigned int) VAR_0->years);
        VAR_1 = FUNC_4(VAR_1, VAR_2, VAR_3+2);
        FUNC_2((void*) VAR_2);
    }
    if (VAR_0->months > 0) {
        VAR_3 = FUNC_1(VAR_0->months);
        VAR_2 = (char*) FUNC_0(VAR_3+2, sizeof(char));
        FUNC_3(VAR_2, VAR_3+2, "%uM", (unsigned int) VAR_0->months);
        VAR_1 = FUNC_4(VAR_1, VAR_2, VAR_3+2);
        FUNC_2((void*) VAR_2);
    }
    if (VAR_0->weeks > 0) {
        VAR_3 = FUNC_1(VAR_0->weeks);
        VAR_2 = (char*) FUNC_0(VAR_3+2, sizeof(char));
        FUNC_3(VAR_2, VAR_3+2, "%uW", (unsigned int) VAR_0->weeks);
        VAR_1 = FUNC_4(VAR_1, VAR_2, VAR_3+2);
        FUNC_2((void*) VAR_2);
    }
    if (VAR_0->days > 0) {
        VAR_3 = FUNC_1(VAR_0->days);
        VAR_2 = (char*) FUNC_0(VAR_3+2, sizeof(char));
        FUNC_3(VAR_2, VAR_3+2, "%uD", (unsigned int) VAR_0->days);
        VAR_1 = FUNC_4(VAR_1, VAR_2, VAR_3+2);
        FUNC_2((void*) VAR_2);
    }
    if (VAR_4) {
        VAR_1 = FUNC_4(VAR_1, "T", 1);
    }
    if (VAR_0->hours > 0) {
        VAR_3 = FUNC_1(VAR_0->hours);
        VAR_2 = (char*) FUNC_0(VAR_3+2, sizeof(char));
        FUNC_3(VAR_2, VAR_3+2, "%uH", (unsigned int) VAR_0->hours);
        VAR_1 = FUNC_4(VAR_1, VAR_2, VAR_3+2);
        FUNC_2((void*) VAR_2);
    }
    if (VAR_0->minutes > 0) {
        VAR_3 = FUNC_1(VAR_0->minutes);
        VAR_2 = (char*) FUNC_0(VAR_3+2, sizeof(char));
        FUNC_3(VAR_2, VAR_3+2, "%uM", (unsigned int) VAR_0->minutes);
        VAR_1 = FUNC_4(VAR_1, VAR_2, VAR_3+2);
        FUNC_2((void*) VAR_2);
    }
    if (VAR_0->seconds > 0) {
        VAR_3 = FUNC_1(VAR_0->seconds);
        VAR_2 = (char*) FUNC_0(VAR_3+2, sizeof(char));
        FUNC_3(VAR_2, VAR_3+2, "%uS", (unsigned int) VAR_0->seconds);
        VAR_1 = FUNC_4(VAR_1, VAR_2, VAR_3+2);
        FUNC_2((void*) VAR_2);
    }
    return VAR_1;
}
