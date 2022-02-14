
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* buf; } ;
typedef TYPE_1__ BIO_ASN1_BUF_CTX ;
typedef int BIO ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0)
{
    BIO_ASN1_BUF_CTX *VAR_1;

    if (VAR_0 == ((void*)0))
        return 0;

    VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 == ((void*)0))
        return 0;

    FUNC_3(VAR_1->buf);
    FUNC_3(VAR_1);
    FUNC_1(VAR_0, ((void*)0));
    FUNC_2(VAR_0, 0);

    return 1;
}
