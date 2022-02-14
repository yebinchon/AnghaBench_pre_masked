
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int label_prefix ;
typedef int hkdflabel ;
typedef int WPACKET ;
typedef int SSL ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,size_t) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *,unsigned char const*,size_t) ;
 scalar_t__ FUNC_6 (int *,int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,size_t*) ;
 int FUNC_15 (int *,unsigned char*,int,int ) ;
 int FUNC_16 (int *,unsigned char const*,size_t) ;
 int FUNC_17 (int *,size_t) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,unsigned char const*,size_t) ;

int FUNC_20(SSL *VAR_8, const EVP_MD *VAR_9, const unsigned char *VAR_10,
                             const unsigned char *VAR_11, size_t VAR_12,
                             const unsigned char *VAR_13, size_t VAR_14,
                             unsigned char *VAR_15, size_t VAR_16, int VAR_17)
{



    static const unsigned char VAR_18[] = "tls13 ";

    EVP_PKEY_CTX *VAR_19 = FUNC_4(VAR_3, ((void*)0));
    int VAR_20;
    size_t VAR_21;
    size_t VAR_22;





    unsigned char VAR_23[sizeof(uint16_t) + sizeof(uint8_t) +
                            + (sizeof(VAR_18) - 1) + VAR_7
                            + 1 + VAR_1];
    WPACKET VAR_24;

    if (VAR_19 == ((void*)0))
        return 0;

    if (VAR_12 > VAR_7) {
        if (VAR_17) {
            FUNC_10(VAR_8, VAR_4, VAR_5,
                     VAR_0);
        } else {




            FUNC_9(VAR_5, VAR_6);
        }
        FUNC_2(VAR_19);
        return 0;
    }

    VAR_22 = FUNC_0(VAR_9);

    if (!FUNC_15(&VAR_24, VAR_23, sizeof(VAR_23), 0)
            || !FUNC_17(&VAR_24, VAR_16)
            || !FUNC_18(&VAR_24)
            || !FUNC_16(&VAR_24, VAR_18, sizeof(VAR_18) - 1)
            || !FUNC_16(&VAR_24, VAR_11, VAR_12)
            || !FUNC_12(&VAR_24)
            || !FUNC_19(&VAR_24, VAR_13, (VAR_13 == ((void*)0)) ? 0 : VAR_14)
            || !FUNC_14(&VAR_24, &VAR_21)
            || !FUNC_13(&VAR_24)) {
        FUNC_2(VAR_19);
        FUNC_11(&VAR_24);
        if (VAR_17)
            FUNC_10(VAR_8, VAR_4, VAR_5,
                     VAR_0);
        else
            FUNC_9(VAR_5, VAR_0);
        return 0;
    }

    VAR_20 = FUNC_8(VAR_19) <= 0
            || FUNC_3(VAR_19, VAR_2)
               <= 0
            || FUNC_6(VAR_19, VAR_9) <= 0
            || FUNC_5(VAR_19, VAR_10, VAR_22) <= 0
            || FUNC_1(VAR_19, VAR_23, VAR_21) <= 0
            || FUNC_7(VAR_19, VAR_15, &VAR_16) <= 0;

    FUNC_2(VAR_19);

    if (VAR_20 != 0) {
        if (VAR_17)
            FUNC_10(VAR_8, VAR_4, VAR_5,
                     VAR_0);
        else
            FUNC_9(VAR_5, VAR_0);
    }

    return VAR_20 == 0;
}
