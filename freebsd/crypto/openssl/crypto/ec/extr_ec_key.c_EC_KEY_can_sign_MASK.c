
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* group; } ;
struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_3__ EC_KEY ;


 int VAR_0 ;

int FUNC_0(const EC_KEY *VAR_1)
{
    if (VAR_1->group == ((void*)0) || VAR_1->group->meth == ((void*)0)
        || (VAR_1->group->meth->flags & VAR_0))
        return 0;
    return 1;
}
