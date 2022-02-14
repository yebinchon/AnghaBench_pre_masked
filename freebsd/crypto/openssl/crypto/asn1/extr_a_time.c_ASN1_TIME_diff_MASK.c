
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
typedef int ASN1_TIME ;


 int FUNC_0 (int const*,struct tm*) ;
 int FUNC_1 (int*,int*,struct tm*,struct tm*) ;

int FUNC_2(int *VAR_0, int *VAR_1,
                   const ASN1_TIME *VAR_2, const ASN1_TIME *VAR_3)
{
    struct tm VAR_4, VAR_5;

    if (!FUNC_0(VAR_2, &VAR_4))
        return 0;
    if (!FUNC_0(VAR_3, &VAR_5))
        return 0;
    return FUNC_1(VAR_0, VAR_1, &VAR_4, &VAR_5);
}
