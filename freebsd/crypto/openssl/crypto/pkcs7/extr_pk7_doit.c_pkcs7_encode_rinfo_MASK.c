
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int enc_key; int cert; } ;
typedef TYPE_1__ PKCS7_RECIP_INFO ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int FUNC_0 (int ,unsigned char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int,int ,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,unsigned char*,size_t*,unsigned char*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;
 int * FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(PKCS7_RECIP_INFO *VAR_5,
                              unsigned char *VAR_6, int VAR_7)
{
    EVP_PKEY_CTX *VAR_8 = ((void*)0);
    EVP_PKEY *VAR_9 = ((void*)0);
    unsigned char *VAR_10 = ((void*)0);
    int VAR_11 = 0;
    size_t VAR_12;

    VAR_9 = FUNC_9(VAR_5->cert);

    if (!VAR_9)
        return 0;

    VAR_8 = FUNC_3(VAR_9, ((void*)0));
    if (!VAR_8)
        return 0;

    if (FUNC_5(VAR_8) <= 0)
        goto err;

    if (FUNC_1(VAR_8, -1, VAR_2,
                          VAR_1, 0, VAR_5) <= 0) {
        FUNC_8(VAR_3, VAR_4);
        goto err;
    }

    if (FUNC_4(VAR_8, ((void*)0), &VAR_12, VAR_6, VAR_7) <= 0)
        goto err;

    VAR_10 = FUNC_7(VAR_12);

    if (VAR_10 == ((void*)0)) {
        FUNC_8(VAR_3, VAR_0);
        goto err;
    }

    if (FUNC_4(VAR_8, VAR_10, &VAR_12, VAR_6, VAR_7) <= 0)
        goto err;

    FUNC_0(VAR_5->enc_key, VAR_10, VAR_12);
    VAR_10 = ((void*)0);

    VAR_11 = 1;

 err:
    FUNC_2(VAR_8);
    FUNC_6(VAR_10);
    return VAR_11;

}
