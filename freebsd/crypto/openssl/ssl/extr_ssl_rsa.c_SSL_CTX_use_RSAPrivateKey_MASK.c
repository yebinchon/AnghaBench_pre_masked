
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cert; } ;
typedef TYPE_1__ SSL_CTX ;
typedef int RSA ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(SSL_CTX *VAR_3, RSA *VAR_4)
{
    int VAR_5;
    EVP_PKEY *VAR_6;

    if (VAR_4 == ((void*)0)) {
        FUNC_5(VAR_2, VAR_1);
        return 0;
    }
    if ((VAR_6 = FUNC_2()) == ((void*)0)) {
        FUNC_5(VAR_2, VAR_0);
        return 0;
    }

    FUNC_4(VAR_4);
    if (FUNC_0(VAR_6, VAR_4) <= 0) {
        FUNC_3(VAR_4);
        FUNC_1(VAR_6);
        return 0;
    }

    VAR_5 = FUNC_6(VAR_3->cert, VAR_6);
    FUNC_1(VAR_6);
    return VAR_5;
}
