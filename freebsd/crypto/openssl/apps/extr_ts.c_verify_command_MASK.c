
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_VERIFY_PARAM ;
typedef int TS_VERIFY_CTX ;
typedef int TS_RESP ;
typedef int PKCS7 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int * FUNC_8 (char const*,char const*,char const*,char const*,char const*,char const*,int *) ;
 int * FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,int *) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(const char *VAR_1, const char *VAR_2, const char *VAR_3,
                          const char *VAR_4, int VAR_5,
                          const char *VAR_6, const char *VAR_7, const char *VAR_8,
                          X509_VERIFY_PARAM *VAR_9)
{
    BIO *VAR_10 = ((void*)0);
    PKCS7 *VAR_11 = ((void*)0);
    TS_RESP *VAR_12 = ((void*)0);
    TS_VERIFY_CTX *VAR_13 = ((void*)0);
    int VAR_14 = 0;

    if ((VAR_10 = FUNC_1(VAR_4, "rb")) == ((void*)0))
        goto end;
    if (VAR_5) {
        if ((VAR_11 = FUNC_9(VAR_10, ((void*)0))) == ((void*)0))
            goto end;
    } else {
        if ((VAR_12 = FUNC_10(VAR_10, ((void*)0))) == ((void*)0))
            goto end;
    }

    if ((VAR_13 = FUNC_8(VAR_1, VAR_2, VAR_3,
                                        VAR_6, VAR_7, VAR_8,
                                        VAR_9)) == ((void*)0))
        goto end;

    VAR_14 = VAR_5
        ? FUNC_6(VAR_13, VAR_11)
        : FUNC_5(VAR_13, VAR_12);

 end:
    FUNC_11("Verification: ");
    if (VAR_14)
        FUNC_11("OK\n");
    else {
        FUNC_11("FAILED\n");
        FUNC_2(VAR_0);
    }

    FUNC_0(VAR_10);
    FUNC_3(VAR_11);
    FUNC_4(VAR_12);
    FUNC_7(VAR_13);
    return VAR_14;
}
