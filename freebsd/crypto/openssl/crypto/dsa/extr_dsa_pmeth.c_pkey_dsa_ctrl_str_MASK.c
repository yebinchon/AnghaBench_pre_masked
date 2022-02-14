
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int ,int,void*) ;
 int FUNC_2 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(EVP_PKEY_CTX *VAR_6,
                             const char *VAR_7, const char *VAR_8)
{
    if (FUNC_5(VAR_7, "dsa_paramgen_bits") == 0) {
        int VAR_9;
        VAR_9 = FUNC_4(VAR_8);
        return FUNC_2(VAR_6, VAR_9);
    }
    if (FUNC_5(VAR_7, "dsa_paramgen_q_bits") == 0) {
        int VAR_10 = FUNC_4(VAR_8);
        return FUNC_1(VAR_6, VAR_4, VAR_5,
                                 VAR_3, VAR_10,
                                 ((void*)0));
    }
    if (FUNC_5(VAR_7, "dsa_paramgen_md") == 0) {
        const EVP_MD *VAR_11 = FUNC_3(VAR_8);

        if (VAR_11 == ((void*)0)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        return FUNC_1(VAR_6, VAR_4, VAR_5,
                                 VAR_2, 0,
                                 (void *)VAR_11);
    }
    return -2;
}
