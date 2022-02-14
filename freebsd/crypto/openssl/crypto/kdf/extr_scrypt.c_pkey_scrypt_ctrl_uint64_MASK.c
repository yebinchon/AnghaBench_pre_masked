
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int EVP_PKEY_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *,int,int ,int *) ;

__attribute__((used)) static int FUNC_3(EVP_PKEY_CTX *VAR_2, int VAR_3,
                                   const char *VAR_4)
{
    uint64_t VAR_5;

    if (!FUNC_1(VAR_4, &VAR_5)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    return FUNC_2(VAR_2, VAR_3, 0, &VAR_5);
}
