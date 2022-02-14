
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PKCS7_SIGNER_INFO ;
typedef int ESS_SIGNING_CERT_V2 ;
typedef int ASN1_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int *,unsigned char**) ;

__attribute__((used)) static int FUNC_8(PKCS7_SIGNER_INFO *VAR_4,
                                   ESS_SIGNING_CERT_V2 *VAR_5)
{
    ASN1_STRING *VAR_6 = ((void*)0);
    unsigned char *VAR_7, *VAR_8 = ((void*)0);
    int VAR_9 = FUNC_7(VAR_5, ((void*)0));

    if ((VAR_8 = FUNC_4(VAR_9)) == ((void*)0)) {
        FUNC_6(VAR_2, VAR_0);
        goto err;
    }

    VAR_7 = VAR_8;
    FUNC_7(VAR_5, &VAR_7);
    if ((VAR_6 = FUNC_1()) == ((void*)0) || !FUNC_2(VAR_6, VAR_8, VAR_9)) {
        FUNC_6(VAR_2, VAR_0);
        goto err;
    }

    FUNC_3(VAR_8);
    VAR_8 = ((void*)0);
    return FUNC_5(VAR_4,
                                      VAR_1,
                                      VAR_3, VAR_6);
 err:
    FUNC_0(VAR_6);
    FUNC_3(VAR_8);
    return 0;
}
