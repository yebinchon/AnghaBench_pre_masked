
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int BIO ;
typedef int BIGNUM ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,int,char*,char const*,char const*) ;
 int * FUNC_6 (int const*,int *) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char const*,int) ;
 int VAR_1 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (char const*) ;

int FUNC_11(const char *VAR_2, const char *VAR_3, const BIGNUM *VAR_4,
                ASN1_INTEGER **VAR_5)
{
    char VAR_6[1][VAR_0];
    BIO *VAR_7 = ((void*)0);
    int VAR_8 = 0;
    ASN1_INTEGER *VAR_9 = ((void*)0);
    int VAR_10;

    if (VAR_3 == ((void*)0))
        VAR_10 = FUNC_10(VAR_2);
    else
        VAR_10 = FUNC_10(VAR_2) + FUNC_10(VAR_3) + 1;
    if (VAR_10 >= VAR_0) {
        FUNC_3(VAR_1, "file name too long\n");
        goto err;
    }

    if (VAR_3 == ((void*)0))
        FUNC_8(VAR_6[0], VAR_2, VAR_0);
    else {

        VAR_10 = FUNC_5(VAR_6[0], sizeof(VAR_6[0]), "%s.%s", VAR_2, VAR_3);



    }
    VAR_7 = FUNC_2(VAR_6[0], "w");
    if (VAR_7 == ((void*)0)) {
        FUNC_7(VAR_1);
        goto err;
    }

    if ((VAR_9 = FUNC_6(VAR_4, ((void*)0))) == ((void*)0)) {
        FUNC_3(VAR_1, "error converting serial to ASN.1 format\n");
        goto err;
    }
    FUNC_9(VAR_7, VAR_9);
    FUNC_4(VAR_7, "\n");
    VAR_8 = 1;
    if (VAR_5) {
        *VAR_5 = VAR_9;
        VAR_9 = ((void*)0);
    }
 err:
    FUNC_1(VAR_7);
    FUNC_0(VAR_9);
    return VAR_8;
}
