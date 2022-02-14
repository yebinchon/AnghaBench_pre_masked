
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;


 int const* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_2, int VAR_3, int VAR_4, void *VAR_5)
{
    switch (VAR_3) {
    case 128:

        if (VAR_5 == ((void*)0) || (const EVP_MD *)VAR_5 == FUNC_1())
            return 1;
        FUNC_0(VAR_0, VAR_1);
        return 0;

    case 129:
        return 1;
    }
    return -2;
}
