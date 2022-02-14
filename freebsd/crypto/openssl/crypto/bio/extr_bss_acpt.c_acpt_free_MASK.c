
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ init; scalar_t__ flags; int * ptr; scalar_t__ shutdown; } ;
typedef int BIO_ACCEPT ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_0)
{
    BIO_ACCEPT *VAR_1;

    if (VAR_0 == ((void*)0))
        return 0;
    VAR_1 = (BIO_ACCEPT *)VAR_0->ptr;

    if (VAR_0->shutdown) {
        FUNC_1(VAR_0);
        FUNC_0(VAR_1);
        VAR_0->ptr = ((void*)0);
        VAR_0->flags = 0;
        VAR_0->init = 0;
    }
    return 1;
}
