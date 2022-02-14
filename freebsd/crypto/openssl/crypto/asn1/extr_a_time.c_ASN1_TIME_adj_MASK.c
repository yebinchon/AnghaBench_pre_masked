
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int ASN1_TIME ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct tm* FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (struct tm*,int,long) ;
 int VAR_2 ;
 int * FUNC_3 (int *,struct tm*,int ) ;

ASN1_TIME *FUNC_4(ASN1_TIME *VAR_3, time_t VAR_4,
                         int VAR_5, long VAR_6)
{
    struct tm *VAR_7;
    struct tm VAR_8;

    VAR_7 = FUNC_1(&VAR_4, &VAR_8);
    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    if (VAR_5 || VAR_6) {
        if (!FUNC_2(VAR_7, VAR_5, VAR_6))
            return ((void*)0);
    }
    return FUNC_3(VAR_3, VAR_7, VAR_2);
}
