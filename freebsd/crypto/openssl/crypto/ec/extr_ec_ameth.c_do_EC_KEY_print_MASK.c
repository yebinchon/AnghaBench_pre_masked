
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ec_print_t ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *,unsigned char*,size_t,int) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int const*,int) ;
 int VAR_0 ;
 int FUNC_4 (int const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_5 (int const*) ;
 int * FUNC_6 (int const*) ;
 int * FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 size_t FUNC_9 (int const*,int ,unsigned char**,int *) ;
 size_t FUNC_10 (int const*,unsigned char**) ;
 int FUNC_11 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (unsigned char*,size_t) ;
 int FUNC_13 (unsigned char*) ;

__attribute__((used)) static int FUNC_14(BIO *VAR_6, const EC_KEY *VAR_7, int VAR_8, ec_print_t VAR_9)
{
    const char *VAR_10;
    unsigned char *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    size_t VAR_13 = 0, VAR_14 = 0;
    int VAR_15 = 0;
    const EC_GROUP *VAR_16;

    if (VAR_7 == ((void*)0) || (VAR_16 = FUNC_5(VAR_7)) == ((void*)0)) {
        FUNC_11(VAR_0, VAR_5);
        return 0;
    }

    if (VAR_9 != VAR_1 && FUNC_7(VAR_7) != ((void*)0)) {
        VAR_14 = FUNC_9(VAR_7, FUNC_8(VAR_7), &VAR_12, ((void*)0));
        if (VAR_14 == 0)
            goto err;
    }

    if (VAR_9 == VAR_2 && FUNC_6(VAR_7) != ((void*)0)) {
        VAR_13 = FUNC_10(VAR_7, &VAR_11);
        if (VAR_13 == 0)
            goto err;
    }

    if (VAR_9 == VAR_2)
        VAR_10 = "Private-Key";
    else if (VAR_9 == VAR_3)
        VAR_10 = "Public-Key";
    else
        VAR_10 = "ECDSA-Parameters";

    if (!FUNC_1(VAR_6, VAR_8, 128))
        goto err;
    if (FUNC_2(VAR_6, "%s: (%d bit)\n", VAR_10,
                   FUNC_4(VAR_16)) <= 0)
        goto err;

    if (VAR_13 != 0) {
        if (FUNC_2(VAR_6, "%*spriv:\n", VAR_8, "") <= 0)
            goto err;
        if (FUNC_0(VAR_6, VAR_11, VAR_13, VAR_8 + 4) == 0)
            goto err;
    }

    if (VAR_14 != 0) {
        if (FUNC_2(VAR_6, "%*spub:\n", VAR_8, "") <= 0)
            goto err;
        if (FUNC_0(VAR_6, VAR_12, VAR_14, VAR_8 + 4) == 0)
            goto err;
    }

    if (!FUNC_3(VAR_6, VAR_16, VAR_8))
        goto err;
    VAR_15 = 1;
 err:
    if (!VAR_15)
        FUNC_11(VAR_0, VAR_4);
    FUNC_12(VAR_11, VAR_13);
    FUNC_13(VAR_12);
    return VAR_15;
}
