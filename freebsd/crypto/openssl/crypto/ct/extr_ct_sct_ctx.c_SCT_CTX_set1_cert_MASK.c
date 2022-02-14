
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_EXTENSION ;
typedef int X509 ;
struct TYPE_3__ {unsigned char* certder; int certderlen; unsigned char* preder; int prederlen; } ;
typedef TYPE_1__ SCT_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int*) ;
 int FUNC_7 (int *,unsigned char**) ;
 int FUNC_8 (int *,unsigned char**) ;

int FUNC_9(SCT_CTX *VAR_2, X509 *VAR_3, X509 *VAR_4)
{
    unsigned char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    X509 *VAR_7 = ((void*)0);
    int VAR_8 = 0, VAR_9 = 0;
    int VAR_10 = -1;
    int VAR_11, VAR_12;
    int VAR_13 = FUNC_6(VAR_3, VAR_0, &VAR_11);


    if (VAR_11)
        goto err;


    if (VAR_13 == -1) {

        if (VAR_4 != ((void*)0))
            goto err;

        VAR_8 = FUNC_7(VAR_3, &VAR_5);
        if (VAR_8 < 0)
            goto err;
    }


    VAR_10 = FUNC_6(VAR_3, VAR_1, &VAR_12);

    if (VAR_12)
        goto err;

    if (VAR_10 >= 0 && VAR_13 >= 0) {




        goto err;
    }

    if (VAR_10 == -1) {
        VAR_10 = VAR_13;
    }







    if (VAR_10 >= 0) {
        X509_EXTENSION *VAR_14;


        VAR_7 = FUNC_3(VAR_3);
        if (VAR_7 == ((void*)0))
            goto err;

        VAR_14 = FUNC_2(VAR_7, VAR_10);
        FUNC_1(VAR_14);

        if (!FUNC_5(VAR_7, VAR_4))
            goto err;

        VAR_9 = FUNC_8(VAR_7, &VAR_6);
        if (VAR_9 <= 0)
            goto err;
    }

    FUNC_4(VAR_7);

    FUNC_0(VAR_2->certder);
    VAR_2->certder = VAR_5;
    VAR_2->certderlen = VAR_8;

    FUNC_0(VAR_2->preder);
    VAR_2->preder = VAR_6;
    VAR_2->prederlen = VAR_9;

    return 1;
err:
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
    FUNC_4(VAR_7);
    return 0;
}
