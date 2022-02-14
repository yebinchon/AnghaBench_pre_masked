
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cert; } ;
struct TYPE_4__ {void* sec_ex; } ;
typedef TYPE_2__ SSL ;



void FUNC_0(SSL *VAR_0, void *VAR_1)
{
    VAR_0->cert->sec_ex = VAR_1;
}
