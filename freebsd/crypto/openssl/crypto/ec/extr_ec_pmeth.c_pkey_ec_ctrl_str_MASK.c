
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int const*) ;
 int * FUNC_6 (char const*) ;
 int VAR_3 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 int VAR_4 ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

__attribute__((used)) static int FUNC_11(EVP_PKEY_CTX *VAR_5,
                            const char *VAR_6, const char *VAR_7)
{
    if (FUNC_10(VAR_6, "ec_paramgen_curve") == 0) {
        int VAR_8;
        VAR_8 = FUNC_0(VAR_7);
        if (VAR_8 == VAR_3)
            VAR_8 = FUNC_8(VAR_7);
        if (VAR_8 == VAR_3)
            VAR_8 = FUNC_7(VAR_7);
        if (VAR_8 == VAR_3) {
            FUNC_1(VAR_0, VAR_1);
            return 0;
        }
        return FUNC_3(VAR_5, VAR_8);
    } else if (FUNC_10(VAR_6, "ec_param_enc") == 0) {
        int VAR_9;
        if (FUNC_10(VAR_7, "explicit") == 0)
            VAR_9 = 0;
        else if (FUNC_10(VAR_7, "named_curve") == 0)
            VAR_9 = VAR_4;
        else
            return -2;
        return FUNC_2(VAR_5, VAR_9);
    } else if (FUNC_10(VAR_6, "ecdh_kdf_md") == 0) {
        const EVP_MD *VAR_10;
        if ((VAR_10 = FUNC_6(VAR_7)) == ((void*)0)) {
            FUNC_1(VAR_0, VAR_2);
            return 0;
        }
        return FUNC_5(VAR_5, VAR_10);
    } else if (FUNC_10(VAR_6, "ecdh_cofactor_mode") == 0) {
        int VAR_11;
        VAR_11 = FUNC_9(VAR_7);
        return FUNC_4(VAR_5, VAR_11);
    }

    return -2;
}
