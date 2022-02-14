
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,char const*) ;
 int FUNC_1 (int *,int ,char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_9, const char *VAR_10,
                                const char *VAR_11)
{
    if (VAR_11 == ((void*)0)) {
        FUNC_2(VAR_6, VAR_8);
        return 0;
    }

    if (FUNC_4(VAR_10, "pass") == 0)
        return FUNC_1(VAR_9, VAR_0, VAR_11);

    if (FUNC_4(VAR_10, "hexpass") == 0)
        return FUNC_0(VAR_9, VAR_0, VAR_11);

    if (FUNC_4(VAR_10, "salt") == 0)
        return FUNC_1(VAR_9, VAR_5, VAR_11);

    if (FUNC_4(VAR_10, "hexsalt") == 0)
        return FUNC_0(VAR_9, VAR_5, VAR_11);

    if (FUNC_4(VAR_10, "N") == 0)
        return FUNC_3(VAR_9, VAR_2, VAR_11);

    if (FUNC_4(VAR_10, "r") == 0)
        return FUNC_3(VAR_9, VAR_4, VAR_11);

    if (FUNC_4(VAR_10, "p") == 0)
        return FUNC_3(VAR_9, VAR_3, VAR_11);

    if (FUNC_4(VAR_10, "maxmem_bytes") == 0)
        return FUNC_3(VAR_9, VAR_1,
                                       VAR_11);

    FUNC_2(VAR_6, VAR_7);
    return -2;
}
