
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int derived_secret_label ;
typedef int SSL ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int *) ;
 scalar_t__ FUNC_1 (int *,int const*,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int * FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int *,unsigned char const*,size_t) ;
 scalar_t__ FUNC_9 (int *,unsigned char const*,size_t) ;
 scalar_t__ FUNC_10 (int *,int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (unsigned char*,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (int *,int ,int ,int ) ;
 unsigned char* VAR_6 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *,int const*,unsigned char const*,unsigned char*,int,unsigned char*,size_t,unsigned char*,size_t,int) ;

int FUNC_17(SSL *VAR_7, const EVP_MD *VAR_8,
                          const unsigned char *VAR_9,
                          const unsigned char *VAR_10,
                          size_t VAR_11,
                          unsigned char *VAR_12)
{
    size_t VAR_13, VAR_14;
    int VAR_15;
    int VAR_16;
    EVP_PKEY_CTX *VAR_17 = FUNC_7(VAR_3, ((void*)0));



    static const char VAR_18[] = "derived";

    unsigned char VAR_19[VAR_1];

    if (VAR_17 == ((void*)0)) {
        FUNC_14(VAR_7, VAR_4, VAR_5,
                 VAR_0);
        return 0;
    }

    VAR_15 = FUNC_4(VAR_8);

    if (!FUNC_15(VAR_15 >= 0)) {
        FUNC_14(VAR_7, VAR_4, VAR_5,
                 VAR_0);
        return 0;
    }
    VAR_13 = (size_t)VAR_15;

    if (VAR_10 == ((void*)0)) {
        VAR_10 = VAR_6;
        VAR_11 = VAR_13;
    }
    if (VAR_9 == ((void*)0)) {
        VAR_9 = VAR_6;
        VAR_14 = 0;
    } else {
        EVP_MD_CTX *VAR_20 = FUNC_3();
        unsigned char VAR_21[VAR_1];


        if (VAR_20 == ((void*)0)
                || FUNC_1(VAR_20, VAR_8, ((void*)0)) <= 0
                || FUNC_0(VAR_20, VAR_21, ((void*)0)) <= 0) {
            FUNC_14(VAR_7, VAR_4, VAR_5,
                     VAR_0);
            FUNC_2(VAR_20);
            FUNC_5(VAR_17);
            return 0;
        }
        FUNC_2(VAR_20);


        if (!FUNC_16(VAR_7, VAR_8, VAR_9,
                               (unsigned char *)VAR_18,
                               sizeof(VAR_18) - 1, VAR_21, VAR_13,
                               VAR_19, VAR_13, 1)) {

            FUNC_5(VAR_17);
            return 0;
        }

        VAR_9 = VAR_19;
        VAR_14 = VAR_13;
    }

    VAR_16 = FUNC_12(VAR_17) <= 0
            || FUNC_6(VAR_17, VAR_2)
               <= 0
            || FUNC_10(VAR_17, VAR_8) <= 0
            || FUNC_8(VAR_17, VAR_10, VAR_11) <= 0
            || FUNC_9(VAR_17, VAR_9, VAR_14)
               <= 0
            || FUNC_11(VAR_17, VAR_12, &VAR_13)
               <= 0;

    if (VAR_16 != 0)
        FUNC_14(VAR_7, VAR_4, VAR_5,
                 VAR_0);

    FUNC_5(VAR_17);
    if (VAR_9 == VAR_19)
        FUNC_13(VAR_19, VAR_13);
    return VAR_16 == 0;
}
