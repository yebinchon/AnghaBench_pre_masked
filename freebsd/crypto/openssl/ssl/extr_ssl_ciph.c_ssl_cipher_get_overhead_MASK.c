
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int algorithm_enc; int algorithm_mac; } ;
typedef TYPE_1__ SSL_CIPHER ;
typedef int EVP_MD ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 size_t FUNC_0 (int const*) ;
 size_t FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_3 (int const*) ;
 int * FUNC_4 (int) ;
 int * FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int VAR_12 ;

int FUNC_8(const SSL_CIPHER *VAR_13, size_t *VAR_14,
                            size_t *VAR_15, size_t *VAR_16,
                            size_t *VAR_17)
{
    size_t VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;



    if (VAR_13->algorithm_enc & (VAR_9 | VAR_10)) {
        VAR_21 = VAR_2 + VAR_3;
    } else if (VAR_13->algorithm_enc & (VAR_5 | VAR_7)) {
        VAR_21 = VAR_0 + 16;
    } else if (VAR_13->algorithm_enc & (VAR_6 | VAR_8)) {
        VAR_21 = VAR_0 + 8;
    } else if (VAR_13->algorithm_enc & VAR_11) {
        VAR_21 = 16;
    } else if (VAR_13->algorithm_mac & VAR_4) {

        return 0;
    } else {

        int VAR_22 = FUNC_7(VAR_13);
        const EVP_MD *VAR_23 = FUNC_5(VAR_22);

        if (VAR_23 == ((void*)0))
            return 0;

        VAR_18 = FUNC_3(VAR_23);
        if (VAR_13->algorithm_enc != VAR_12) {
            int VAR_24 = FUNC_6(VAR_13);
            const EVP_CIPHER *VAR_25 = FUNC_4(VAR_24);



            if (VAR_25 == ((void*)0) ||
                FUNC_2(VAR_25) != VAR_1)
                return 0;

            VAR_19 = 1;
            VAR_21 = FUNC_1(VAR_25);
            VAR_20 = FUNC_0(VAR_25);
        }
    }

    *VAR_14 = VAR_18;
    *VAR_15 = VAR_19;
    *VAR_16 = VAR_20;
    *VAR_17 = VAR_21;

    return 1;
}
