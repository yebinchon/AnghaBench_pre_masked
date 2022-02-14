
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addr_first; struct TYPE_4__* param_service; struct TYPE_4__* param_hostname; } ;
typedef TYPE_1__ BIO_CONNECT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(BIO_CONNECT *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    FUNC_1(VAR_0->param_hostname);
    FUNC_1(VAR_0->param_service);
    FUNC_0(VAR_0->addr_first);
    FUNC_1(VAR_0);
}
