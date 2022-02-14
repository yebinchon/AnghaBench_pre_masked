
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int num; char* ptr; int shutdown; scalar_t__ flags; scalar_t__ init; } ;
struct TYPE_5__ {int state; } ;
typedef TYPE_1__ BIO_ACCEPT ;
typedef TYPE_2__ BIO ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(BIO *VAR_2)
{
    BIO_ACCEPT *VAR_3;

    VAR_2->init = 0;
    VAR_2->num = (int)VAR_1;
    VAR_2->flags = 0;
    if ((VAR_3 = FUNC_0()) == ((void*)0))
        return 0;
    VAR_2->ptr = (char *)VAR_3;
    VAR_3->state = VAR_0;
    VAR_2->shutdown = 1;
    return 1;
}
