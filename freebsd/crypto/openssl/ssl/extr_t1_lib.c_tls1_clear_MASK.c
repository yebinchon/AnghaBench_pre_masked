
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ version; TYPE_1__* method; } ;
struct TYPE_5__ {scalar_t__ version; } ;
typedef TYPE_2__ SSL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(SSL *VAR_2)
{
    if (!FUNC_0(VAR_2))
        return 0;

    if (VAR_2->method->version == VAR_0)
        VAR_2->version = VAR_1;
    else
        VAR_2->version = VAR_2->method->version;

    return 1;
}
