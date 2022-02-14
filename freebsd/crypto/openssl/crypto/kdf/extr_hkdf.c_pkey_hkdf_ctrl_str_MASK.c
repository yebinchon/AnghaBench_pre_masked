
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ,char const*) ;
 int FUNC_3 (int *,int ,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(EVP_PKEY_CTX *VAR_10, const char *VAR_11,
                              const char *VAR_12)
{
    if (FUNC_5(VAR_11, "mode") == 0) {
        int VAR_13;

        if (FUNC_5(VAR_12, "EXTRACT_AND_EXPAND") == 0)
            VAR_13 = VAR_5;
        else if (FUNC_5(VAR_12, "EXTRACT_ONLY") == 0)
            VAR_13 = VAR_6;
        else if (FUNC_5(VAR_12, "EXPAND_ONLY") == 0)
            VAR_13 = VAR_4;
        else
            return 0;

        return FUNC_1(VAR_10, VAR_13);
    }

    if (FUNC_5(VAR_11, "md") == 0)
        return FUNC_2(VAR_10, VAR_7,
                               VAR_2, VAR_12);

    if (FUNC_5(VAR_11, "salt") == 0)
        return FUNC_3(VAR_10, VAR_3, VAR_12);

    if (FUNC_5(VAR_11, "hexsalt") == 0)
        return FUNC_0(VAR_10, VAR_3, VAR_12);

    if (FUNC_5(VAR_11, "key") == 0)
        return FUNC_3(VAR_10, VAR_1, VAR_12);

    if (FUNC_5(VAR_11, "hexkey") == 0)
        return FUNC_0(VAR_10, VAR_1, VAR_12);

    if (FUNC_5(VAR_11, "info") == 0)
        return FUNC_3(VAR_10, VAR_0, VAR_12);

    if (FUNC_5(VAR_11, "hexinfo") == 0)
        return FUNC_0(VAR_10, VAR_0, VAR_12);

    FUNC_4(VAR_8, VAR_9);
    return -2;
}
