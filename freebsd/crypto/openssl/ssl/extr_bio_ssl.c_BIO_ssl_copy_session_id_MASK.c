
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ssl; } ;
typedef TYPE_1__ BIO_SSL ;
typedef int BIO ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(BIO *VAR_1, BIO *VAR_2)
{
    BIO_SSL *VAR_3, *VAR_4;
    VAR_1 = FUNC_0(VAR_1, VAR_0);
    VAR_2 = FUNC_0(VAR_2, VAR_0);
    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
        return 0;
    VAR_3 = FUNC_1(VAR_1);
    VAR_4 = FUNC_1(VAR_2);
    if ((VAR_3->ssl == ((void*)0)) || (VAR_4->ssl == ((void*)0)))
        return 0;
    if (!FUNC_2(VAR_3->ssl, (VAR_4->ssl)))
        return 0;
    return 1;
}
