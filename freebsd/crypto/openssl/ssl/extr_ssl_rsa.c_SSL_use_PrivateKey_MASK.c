
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cert; } ;
typedef TYPE_1__ SSL ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(SSL *VAR_2, EVP_PKEY *VAR_3)
{
    int VAR_4;

    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
        return 0;
    }
    VAR_4 = FUNC_1(VAR_2->cert, VAR_3);
    return VAR_4;
}
