
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_ALGOR ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int ASN1_ITEM ;
typedef int ASN1_BIT_STRING ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *,int *,int *,void*,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int const*,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;

int FUNC_5(const ASN1_ITEM *VAR_2, X509_ALGOR *VAR_3,
                   X509_ALGOR *VAR_4, ASN1_BIT_STRING *VAR_5, void *VAR_6,
                   EVP_PKEY *VAR_7, const EVP_MD *VAR_8)
{
    int VAR_9;
    EVP_MD_CTX *VAR_10 = FUNC_4();

    if (VAR_10 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }
    if (!FUNC_2(VAR_10, ((void*)0), VAR_8, ((void*)0), VAR_7)) {
        FUNC_3(VAR_10);
        return 0;
    }

    VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_10);

    FUNC_3(VAR_10);
    return VAR_9;
}
