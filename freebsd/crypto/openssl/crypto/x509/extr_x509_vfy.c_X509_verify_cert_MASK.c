
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ error; int num_untrusted; int * cert; int * chain; int * dane; } ;
typedef TYPE_1__ X509_STORE_CTX ;
typedef int SSL_DANE ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;

int FUNC_9(X509_STORE_CTX *VAR_9)
{
    SSL_DANE *VAR_10 = VAR_9->dane;
    int VAR_11;

    if (VAR_9->cert == ((void*)0)) {
        FUNC_2(VAR_2, VAR_3);
        VAR_9->error = VAR_5;
        return -1;
    }

    if (VAR_9->chain != ((void*)0)) {




        FUNC_2(VAR_2, VAR_1);
        VAR_9->error = VAR_5;
        return -1;
    }





    if (((VAR_9->chain = FUNC_5()) == ((void*)0)) ||
        (!FUNC_6(VAR_9->chain, VAR_9->cert))) {
        FUNC_2(VAR_2, VAR_0);
        VAR_9->error = VAR_6;
        return -1;
    }
    FUNC_1(VAR_9->cert);
    VAR_9->num_untrusted = 1;


    if (!FUNC_3(VAR_9, VAR_9->cert) &&
        !FUNC_7(VAR_9, VAR_9->cert, 0, VAR_4))
        return 0;

    if (FUNC_0(VAR_10))
        VAR_11 = FUNC_4(VAR_9);
    else
        VAR_11 = FUNC_8(VAR_9);






    if (VAR_11 <= 0 && VAR_9->error == VAR_8)
        VAR_9->error = VAR_7;
    return VAR_11;
}
