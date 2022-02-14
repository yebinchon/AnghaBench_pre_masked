
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_VERIFY_PARAM ;
typedef int TS_VERIFY_CTX ;
typedef int TS_REQ ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*) ;
 unsigned char* FUNC_3 (char const*,long*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int * FUNC_11 (int *,int *) ;
 int * FUNC_12 (int *,unsigned char*,long) ;
 int * FUNC_13 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (char const*,char const*,int *) ;
 int * FUNC_15 (int *,int *) ;

__attribute__((used)) static TS_VERIFY_CTX *FUNC_16(const char *VAR_6, const char *VAR_7,
                                        const char *VAR_8,
                                        const char *VAR_9, const char *VAR_10,
                                        const char *VAR_11,
                                        X509_VERIFY_PARAM *VAR_12)
{
    TS_VERIFY_CTX *VAR_13 = ((void*)0);
    BIO *VAR_14 = ((void*)0);
    TS_REQ *VAR_15 = ((void*)0);
    int VAR_16 = 0;
    int VAR_17 = 0;

    if (VAR_6 != ((void*)0) || VAR_7 != ((void*)0)) {
        if ((VAR_13 = FUNC_10()) == ((void*)0))
            goto err;
        VAR_17 = VAR_4 | VAR_3;
        if (VAR_6 != ((void*)0)) {
            BIO *VAR_18 = ((void*)0);

            VAR_17 |= VAR_0;
            if ((VAR_18 = FUNC_1(VAR_6, "rb")) == ((void*)0))
                goto err;
            if (FUNC_11(VAR_13, VAR_18) == ((void*)0)) {
                FUNC_0(VAR_18);
                goto err;
            }
        } else if (VAR_7 != ((void*)0)) {
            long VAR_19;
            unsigned char *VAR_20 = FUNC_3(VAR_7, &VAR_19);
            VAR_17 |= VAR_1;
            if (FUNC_12(VAR_13, VAR_20, VAR_19) == ((void*)0)) {
                FUNC_2(VAR_5, "invalid digest string\n");
                goto err;
            }
        }

    } else if (VAR_8 != ((void*)0)) {
        if ((VAR_14 = FUNC_1(VAR_8, "rb")) == ((void*)0))
            goto err;
        if ((VAR_15 = FUNC_15(VAR_14, ((void*)0))) == ((void*)0))
            goto err;
        if ((VAR_13 = FUNC_6(VAR_15, ((void*)0))) == ((void*)0))
            goto err;
    } else {
        return ((void*)0);
    }


    FUNC_8(VAR_13, VAR_17 | VAR_2);


    if (FUNC_13(VAR_13, FUNC_14(VAR_9, VAR_10, VAR_12))
            == ((void*)0))
        goto err;


    if (VAR_11
        && FUNC_7(VAR_13, FUNC_4(VAR_11)) == ((void*)0))
        goto err;
    VAR_16 = 1;

 err:
    if (!VAR_16) {
        FUNC_9(VAR_13);
        VAR_13 = ((void*)0);
    }
    FUNC_0(VAR_14);
    FUNC_5(VAR_15);
    return VAR_13;
}
