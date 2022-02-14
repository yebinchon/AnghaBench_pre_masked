
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const ASN1_TIME ;


 int const* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

int FUNC_2(ASN1_TIME **VAR_0, const ASN1_TIME *VAR_1)
{
    ASN1_TIME *VAR_2;
    VAR_2 = *VAR_0;
    if (VAR_2 != VAR_1) {
        VAR_2 = FUNC_0(VAR_1);
        if (VAR_2 != ((void*)0)) {
            FUNC_1(*VAR_0);
            *VAR_0 = VAR_2;
        }
    }
    return (VAR_2 != ((void*)0));
}
