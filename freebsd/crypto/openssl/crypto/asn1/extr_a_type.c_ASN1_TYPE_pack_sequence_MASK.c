
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_TYPE ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_ITEM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 (void*,int const*,int *) ;
 int VAR_0 ;

ASN1_TYPE *FUNC_4(const ASN1_ITEM *VAR_1, void *VAR_2, ASN1_TYPE **VAR_3)
{
    ASN1_OCTET_STRING *VAR_4;
    ASN1_TYPE *VAR_5;

    VAR_4 = FUNC_3(VAR_2, VAR_1, ((void*)0));
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    if (VAR_3 && *VAR_3) {
        VAR_5 = *VAR_3;
    } else {
        VAR_5 = FUNC_1();
        if (VAR_5 == ((void*)0)) {
            FUNC_0(VAR_4);
            return ((void*)0);
        }
        if (VAR_3)
            *VAR_3 = VAR_5;
    }
    FUNC_2(VAR_5, VAR_0, VAR_4);
    return VAR_5;
}
