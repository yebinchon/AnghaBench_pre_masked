
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ip; int rStack; } ;
typedef scalar_t__ IPTYPE ;
typedef TYPE_1__ FICL_VM ;


 int FUNC_0 (int ,void*) ;

void FUNC_1(FICL_VM *VAR_0, IPTYPE VAR_1)
{
    FUNC_0(VAR_0->rStack, (void *)VAR_0->ip);
    VAR_0->ip = VAR_1;
    return;
}
