
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct tm {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; } ;
struct TYPE_7__ {int type; void* length; scalar_t__ data; } ;
typedef TYPE_1__ ASN1_TIME ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int *,size_t const) ;
 void* FUNC_3 (char*,size_t const,char*,int,scalar_t__,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__,scalar_t__,void*) ;
 scalar_t__ FUNC_5 (int) ;

ASN1_TIME *FUNC_6(ASN1_TIME *VAR_3, struct tm *VAR_4, int VAR_5)
{
    char* VAR_6;
    ASN1_TIME *VAR_7 = ((void*)0);
    const size_t VAR_8 = 20;

    if (VAR_5 == VAR_1) {
        if (FUNC_5(VAR_4->tm_year))
            VAR_5 = VAR_2;
        else
            VAR_5 = VAR_0;
    } else if (VAR_5 == VAR_2) {
        if (!FUNC_5(VAR_4->tm_year))
            goto err;
    } else if (VAR_5 != VAR_0) {
        goto err;
    }

    if (VAR_3 == ((void*)0))
        VAR_7 = FUNC_1();
    else
        VAR_7 = VAR_3;
    if (VAR_7 == ((void*)0))
        return ((void*)0);

    if (!FUNC_2(VAR_7, ((void*)0), VAR_8))
        goto err;

    VAR_7->type = VAR_5;
    VAR_6 = (char*)VAR_7->data;

    if (VAR_5 == VAR_0)
        VAR_7->length = FUNC_3(VAR_6, VAR_8, "%04d%02d%02d%02d%02d%02dZ",
                                    VAR_4->tm_year + 1900, VAR_4->tm_mon + 1,
                                    VAR_4->tm_mday, VAR_4->tm_hour, VAR_4->tm_min,
                                    VAR_4->tm_sec);
    else
        VAR_7->length = FUNC_3(VAR_6, VAR_8, "%02d%02d%02d%02d%02d%02dZ",
                                    VAR_4->tm_year % 100, VAR_4->tm_mon + 1,
                                    VAR_4->tm_mday, VAR_4->tm_hour, VAR_4->tm_min,
                                    VAR_4->tm_sec);




    return VAR_7;
 err:
    if (VAR_7 != VAR_3)
        FUNC_0(VAR_7);
    return ((void*)0);
}
