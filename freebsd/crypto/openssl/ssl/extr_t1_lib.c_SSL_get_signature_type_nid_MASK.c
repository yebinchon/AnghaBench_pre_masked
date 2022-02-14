
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* s3; } ;
struct TYPE_7__ {TYPE_1__* sigalg; } ;
struct TYPE_8__ {TYPE_2__ tmp; } ;
struct TYPE_6__ {int sig; } ;
typedef TYPE_4__ SSL ;



int FUNC_0(const SSL *VAR_0, int *VAR_1)
{
    if (VAR_0->s3->tmp.sigalg == ((void*)0))
        return 0;
    *VAR_1 = VAR_0->s3->tmp.sigalg->sig;
    return 1;
}
