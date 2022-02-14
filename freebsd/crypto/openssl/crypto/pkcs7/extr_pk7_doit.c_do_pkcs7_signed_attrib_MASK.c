
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PKCS7_SIGNER_INFO ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char*,unsigned int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned char*,unsigned int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(PKCS7_SIGNER_INFO *VAR_5, EVP_MD_CTX *VAR_6)
{
    unsigned char VAR_7[VAR_2];
    unsigned int VAR_8;


    if (!FUNC_4(VAR_5, VAR_3)) {
        if (!FUNC_2(VAR_5, ((void*)0))) {
            FUNC_5(VAR_4, VAR_1);
            return 0;
        }
    }


    if (!FUNC_0(VAR_6, VAR_7, &VAR_8)) {
        FUNC_5(VAR_4, VAR_0);
        return 0;
    }
    if (!FUNC_3(VAR_5, VAR_7, VAR_8)) {
        FUNC_5(VAR_4, VAR_1);
        return 0;
    }


    if (!FUNC_1(VAR_5))
        return 0;

    return 1;
}
