
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(EVP_PKEY_CTX *VAR_4,
                             const char *VAR_5, const char *VAR_6)
{
    if (FUNC_6(VAR_5, "ec_paramgen_curve") == 0) {
        int VAR_7 = VAR_0;

        if (((VAR_7 = FUNC_0(VAR_6)) == VAR_0)
            && ((VAR_7 = FUNC_4(VAR_6)) == VAR_0)
            && ((VAR_7 = FUNC_3(VAR_6)) == VAR_0)) {
            FUNC_5(VAR_2, VAR_3);
            return 0;
        }
        return FUNC_2(VAR_4, VAR_7);
    } else if (FUNC_6(VAR_5, "ec_param_enc") == 0) {
        int VAR_8;

        if (FUNC_6(VAR_6, "explicit") == 0)
            VAR_8 = 0;
        else if (FUNC_6(VAR_6, "named_curve") == 0)
            VAR_8 = VAR_1;
        else
            return -2;
        return FUNC_1(VAR_4, VAR_8);
    }

    return -2;
}
