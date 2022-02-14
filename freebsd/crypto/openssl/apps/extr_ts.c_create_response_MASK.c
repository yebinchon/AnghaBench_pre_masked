
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TS_RESP_CTX ;
typedef int TS_RESP ;
typedef int EVP_MD ;
typedef int CONF ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const*,int *) ;
 int FUNC_4 (int *,char const*,char const*,int *) ;
 int FUNC_5 (int *,char const*,int *) ;
 int FUNC_6 (int *,char const*,char const*) ;
 int FUNC_7 (int *,char const*,char const*,int *) ;
 int FUNC_8 (int *,char const*,int *) ;
 int FUNC_9 (int *,char const*,int *) ;
 int FUNC_10 (int *,char const*,int *) ;
 int FUNC_11 (int *,char const*,int *) ;
 int FUNC_12 (int *,char const*,int *) ;
 int FUNC_13 (int *,char const*,int ,int *) ;
 int FUNC_14 (int *,char const*,char const*,int *) ;
 int FUNC_15 (int *,char const*,int *,int *) ;
 int FUNC_16 (int *,char const*,char const*,char const*,int *) ;
 int FUNC_17 (int *,char const*,int *) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 () ;
 int FUNC_20 (int *,int const*) ;
 int * FUNC_21 (int *,int *) ;
 int FUNC_22 (int *) ;
 int VAR_0 ;

__attribute__((used)) static TS_RESP *FUNC_23(CONF *VAR_1, const char *VAR_2, const char *VAR_3,
                                const char *VAR_4, const char *VAR_5,
                                const char *VAR_6, const EVP_MD *VAR_7, const char *VAR_8,
                                const char *VAR_9, const char *VAR_10)
{
    int VAR_11 = 0;
    TS_RESP *VAR_12 = ((void*)0);
    BIO *VAR_13 = ((void*)0);
    TS_RESP_CTX *VAR_14 = ((void*)0);

    if ((VAR_13 = FUNC_1(VAR_4, "rb")) == ((void*)0))
        goto end;
    if ((VAR_2 = FUNC_2(VAR_1, VAR_2)) == ((void*)0))
        goto end;
    if ((VAR_14 = FUNC_19()) == ((void*)0))
        goto end;
    if (!FUNC_13(VAR_1, VAR_2, VAR_0, VAR_14))
        goto end;

    if (!FUNC_6(VAR_1, VAR_2, VAR_3))
        goto end;

    if (!FUNC_14(VAR_1, VAR_2, VAR_8, VAR_14))
        goto end;
    if (!FUNC_4(VAR_1, VAR_2, VAR_9, VAR_14))
        goto end;
    if (!FUNC_16(VAR_1, VAR_2, VAR_6, VAR_5, VAR_14))
        goto end;

    if (VAR_7) {
        if (!FUNC_20(VAR_14, VAR_7))
            goto end;
    } else if (!FUNC_15(VAR_1, VAR_2, ((void*)0), VAR_14)) {
            goto end;
    }

    if (!FUNC_10(VAR_1, VAR_2, VAR_14))
        goto end;
    if (!FUNC_7(VAR_1, VAR_2, VAR_10, VAR_14))
        goto end;
    if (!FUNC_12(VAR_1, VAR_2, VAR_14))
        goto end;
    if (!FUNC_8(VAR_1, VAR_2, VAR_14))
        goto end;
    if (!FUNC_3(VAR_1, VAR_2, VAR_14))
        goto end;
    if (!FUNC_5(VAR_1, VAR_2, VAR_14))
        goto end;
    if (!FUNC_11(VAR_1, VAR_2, VAR_14))
        goto end;
    if (!FUNC_17(VAR_1, VAR_2, VAR_14))
        goto end;
    if (!FUNC_9(VAR_1, VAR_2, VAR_14))
        goto end;
    if ((VAR_12 = FUNC_21(VAR_14, VAR_13)) == ((void*)0))
        goto end;
    VAR_11 = 1;

 end:
    if (!VAR_11) {
        FUNC_22(VAR_12);
        VAR_12 = ((void*)0);
    }
    FUNC_18(VAR_14);
    FUNC_0(VAR_13);
    return VAR_12;
}
