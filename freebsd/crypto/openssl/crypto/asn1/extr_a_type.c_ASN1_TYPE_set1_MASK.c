
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_TYPE ;
typedef void ASN1_STRING ;
typedef void ASN1_OBJECT ;


 void* FUNC_0 (void const*) ;
 int FUNC_1 (int *,int,void*) ;
 void* FUNC_2 (void const*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(ASN1_TYPE *VAR_2, int VAR_3, const void *VAR_4)
{
    if (!VAR_4 || (VAR_3 == VAR_0)) {
        void *VAR_5 = (void *)VAR_4;
        FUNC_1(VAR_2, VAR_3, VAR_5);
    } else if (VAR_3 == VAR_1) {
        ASN1_OBJECT *VAR_6;
        VAR_6 = FUNC_2(VAR_4);
        if (!VAR_6)
            return 0;
        FUNC_1(VAR_2, VAR_3, VAR_6);
    } else {
        ASN1_STRING *VAR_7;
        VAR_7 = FUNC_0(VAR_4);
        if (!VAR_7)
            return 0;
        FUNC_1(VAR_2, VAR_3, VAR_7);
    }
    return 1;
}
