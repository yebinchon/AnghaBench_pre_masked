
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,char const*) ;

ASN1_OCTET_STRING *FUNC_4(const char *VAR_0)
{
    unsigned char VAR_1[16];
    ASN1_OCTET_STRING *VAR_2;
    int VAR_3;



    VAR_3 = FUNC_3(VAR_1, VAR_0);

    if (!VAR_3)
        return ((void*)0);

    VAR_2 = FUNC_1();
    if (VAR_2 == ((void*)0))
        return ((void*)0);
    if (!FUNC_2(VAR_2, VAR_1, VAR_3)) {
        FUNC_0(VAR_2);
        return ((void*)0);
    }
    return VAR_2;
}
