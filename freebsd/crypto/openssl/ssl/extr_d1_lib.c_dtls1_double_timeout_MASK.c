
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* d1; } ;
struct TYPE_5__ {int timeout_duration_us; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(SSL *VAR_0)
{
    VAR_0->d1->timeout_duration_us *= 2;
    if (VAR_0->d1->timeout_duration_us > 60000000)
        VAR_0->d1->timeout_duration_us = 60000000;
    FUNC_0(VAR_0);
}
