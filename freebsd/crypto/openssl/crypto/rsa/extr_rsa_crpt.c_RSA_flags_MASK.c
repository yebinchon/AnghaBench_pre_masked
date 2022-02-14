
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* meth; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_2__ RSA ;



int FUNC_0(const RSA *VAR_0)
{
    return VAR_0 == ((void*)0) ? 0 : VAR_0->meth->flags;
}
