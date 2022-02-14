
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TS_REQ ;
typedef int EVP_MD ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;
 int * FUNC_4 (char const*,char,int ) ;
 int * FUNC_5 (int *,char const*,int const*,char const*,int,int) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(const char *VAR_3, const char *VAR_4, const EVP_MD *VAR_5,
                         const char *VAR_6, int VAR_7,
                         int VAR_8, const char *VAR_9, const char *VAR_10, int VAR_11)
{
    int VAR_12 = 0;
    TS_REQ *VAR_13 = ((void*)0);
    BIO *VAR_14 = ((void*)0);
    BIO *VAR_15 = ((void*)0);
    BIO *VAR_16 = ((void*)0);


    if (VAR_9 != ((void*)0)) {
        if ((VAR_14 = FUNC_4(VAR_9, 'r', VAR_0)) == ((void*)0))
            goto end;
        VAR_13 = FUNC_6(VAR_14, ((void*)0));
    } else {
        if (VAR_4 == ((void*)0)
            && (VAR_15 = FUNC_4(VAR_3, 'r', VAR_0)) == ((void*)0))
            goto end;
        VAR_13 = FUNC_5(VAR_15, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    }
    if (VAR_13 == ((void*)0))
        goto end;

    if (VAR_11) {
        if ((VAR_16 = FUNC_4(VAR_10, 'w', VAR_1)) == ((void*)0))
            goto end;
        if (!FUNC_3(VAR_16, VAR_13))
            goto end;
    } else {
        if ((VAR_16 = FUNC_4(VAR_10, 'w', VAR_0)) == ((void*)0))
            goto end;
        if (!FUNC_7(VAR_16, VAR_13))
            goto end;
    }

    VAR_12 = 1;

 end:
    FUNC_1(VAR_2);
    FUNC_0(VAR_14);
    FUNC_0(VAR_15);
    FUNC_0(VAR_16);
    FUNC_2(VAR_13);
    return VAR_12;
}
