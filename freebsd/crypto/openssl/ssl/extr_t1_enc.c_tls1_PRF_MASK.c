
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,void const*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *,unsigned char const*,int) ;
 scalar_t__ FUNC_4 (int *,int const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(SSL *VAR_4,
                    const void *VAR_5, size_t VAR_6,
                    const void *VAR_7, size_t VAR_8,
                    const void *VAR_9, size_t VAR_10,
                    const void *VAR_11, size_t VAR_12,
                    const void *VAR_13, size_t VAR_14,
                    const unsigned char *VAR_15, size_t VAR_16,
                    unsigned char *VAR_17, size_t VAR_18, int VAR_19)
{
    const EVP_MD *VAR_20 = FUNC_9(VAR_4);
    EVP_PKEY_CTX *VAR_21 = ((void*)0);
    int VAR_22 = 0;

    if (VAR_20 == ((void*)0)) {

        if (VAR_19)
            FUNC_8(VAR_4, VAR_2, VAR_3,
                     VAR_0);
        else
            FUNC_7(VAR_3, VAR_0);
        return 0;
    }
    VAR_21 = FUNC_2(VAR_1, ((void*)0));
    if (VAR_21 == ((void*)0) || FUNC_6(VAR_21) <= 0
        || FUNC_4(VAR_21, VAR_20) <= 0
        || FUNC_3(VAR_21, VAR_15, (int)VAR_16) <= 0
        || FUNC_0(VAR_21, VAR_5, (int)VAR_6) <= 0
        || FUNC_0(VAR_21, VAR_7, (int)VAR_8) <= 0
        || FUNC_0(VAR_21, VAR_9, (int)VAR_10) <= 0
        || FUNC_0(VAR_21, VAR_11, (int)VAR_12) <= 0
        || FUNC_0(VAR_21, VAR_13, (int)VAR_14) <= 0
        || FUNC_5(VAR_21, VAR_17, &VAR_18) <= 0) {
        if (VAR_19)
            FUNC_8(VAR_4, VAR_2, VAR_3,
                     VAR_0);
        else
            FUNC_7(VAR_3, VAR_0);
        goto err;
    }

    VAR_22 = 1;

 err:
    FUNC_1(VAR_21);
    return VAR_22;
}
