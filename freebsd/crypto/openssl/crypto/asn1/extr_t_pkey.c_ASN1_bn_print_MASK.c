
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;
typedef int BIGNUM ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int,int) ;
 int FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (int *,char*,char const*,...) ;
 int VAR_1 ;
 int FUNC_3 (int const*,unsigned char*) ;
 scalar_t__ FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (unsigned char*,int) ;
 unsigned char* FUNC_8 (int) ;
 scalar_t__* FUNC_9 (int const*) ;

int FUNC_10(BIO *VAR_2, const char *VAR_3, const BIGNUM *VAR_4,
                  unsigned char *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8 = 0;
    const char *VAR_9;
    unsigned char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    int VAR_12;

    if (VAR_4 == ((void*)0))
        return 1;
    VAR_9 = FUNC_4(VAR_4) ? "-" : "";
    if (!FUNC_1(VAR_2, VAR_6, VAR_0))
        return 0;
    if (FUNC_5(VAR_4)) {
        if (FUNC_2(VAR_2, "%s 0\n", VAR_3) <= 0)
            return 0;
        return 1;
    }

    if (FUNC_6(VAR_4) <= VAR_1) {
        if (FUNC_2(VAR_2, "%s %s%lu (%s0x%lx)\n", VAR_3, VAR_9,
                       (unsigned long)FUNC_9(VAR_4)[0], VAR_9,
                       (unsigned long)FUNC_9(VAR_4)[0]) <= 0)
            return 0;
        return 1;
    }

    VAR_12 = FUNC_6(VAR_4) + 1;
    VAR_10 = VAR_11 = FUNC_8(VAR_12);
    if (VAR_10 == ((void*)0))
        goto err;
    VAR_10[0] = 0;
    if (FUNC_2(VAR_2, "%s%s\n", VAR_3,
                   (VAR_9[0] == '-') ? " (Negative)" : "") <= 0)
        goto err;
    VAR_7 = FUNC_3(VAR_4, VAR_10 + 1);

    if (VAR_10[1] & 0x80)
        VAR_7++;
    else
        VAR_11++;

    if (FUNC_0(VAR_2, VAR_11, VAR_7, VAR_6 + 4) == 0)
        goto err;
    VAR_8 = 1;
    err:
    FUNC_7(VAR_10, VAR_12);
    return VAR_8;
}
