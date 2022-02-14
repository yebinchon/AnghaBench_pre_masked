
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
typedef int ASN1_TIME ;
typedef int ASN1_GENERALIZEDTIME ;


 int FUNC_0 (int const*,struct tm*) ;
 int VAR_0 ;
 int * FUNC_1 (int *,struct tm*,int ) ;

ASN1_GENERALIZEDTIME *FUNC_2(const ASN1_TIME *VAR_1,
                                                   ASN1_GENERALIZEDTIME **VAR_2)
{
    ASN1_GENERALIZEDTIME *VAR_3 = ((void*)0);
    struct tm VAR_4;

    if (!FUNC_0(VAR_1, &VAR_4))
        return ((void*)0);

    if (VAR_2 != ((void*)0))
        VAR_3 = *VAR_2;

    VAR_3 = FUNC_1(VAR_3, &VAR_4, VAR_0);

    if (VAR_2 != ((void*)0) && VAR_3 != ((void*)0))
        *VAR_2 = VAR_3;

    return VAR_3;
}
