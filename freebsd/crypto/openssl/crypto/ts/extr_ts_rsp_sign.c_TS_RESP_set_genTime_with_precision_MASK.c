
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef int genTime_str ;
typedef int ASN1_GENERALIZEDTIME ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,int,char*,long,...) ;
 struct tm* FUNC_4 (int *,struct tm*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static ASN1_GENERALIZEDTIME *FUNC_7(
        ASN1_GENERALIZEDTIME *VAR_3, long VAR_4, long VAR_5,
        unsigned VAR_6)
{
    time_t VAR_7 = (time_t)VAR_4;
    struct tm *VAR_8 = ((void*)0), VAR_9;
    char VAR_10[17 + VAR_1];
    char *VAR_11 = VAR_10;
    char *VAR_12 = VAR_10 + sizeof(VAR_10);

    if (VAR_6 > VAR_1)
        goto err;

    if ((VAR_8 = FUNC_4(&VAR_7, &VAR_9)) == ((void*)0))
        goto err;
    VAR_11 += FUNC_3(VAR_11, VAR_12 - VAR_11,
                      "%04d%02d%02d%02d%02d%02d",
                      VAR_8->tm_year + 1900, VAR_8->tm_mon + 1, VAR_8->tm_mday,
                      VAR_8->tm_hour, VAR_8->tm_min, VAR_8->tm_sec);
    if (VAR_6 > 0) {
        FUNC_3(VAR_11, 2 + VAR_6, ".%06ld", VAR_5);
        VAR_11 += FUNC_6(VAR_11);
        while (*--VAR_11 == '0')
             continue;
        if (*VAR_11 != '.')
            ++VAR_11;
    }
    *VAR_11++ = 'Z';
    *VAR_11++ = '\0';

    if (VAR_3 == ((void*)0)
        && (VAR_3 = FUNC_1()) == ((void*)0))
        goto err;
    if (!FUNC_2(VAR_3, VAR_10)) {
        FUNC_0(VAR_3);
        goto err;
    }
    return VAR_3;

 err:
    FUNC_5(VAR_0, VAR_2);
    return ((void*)0);
}
