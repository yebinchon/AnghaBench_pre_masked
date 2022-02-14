
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* subs; } ;
typedef TYPE_1__ WPACKET ;
struct TYPE_6__ {int * parent; } ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*,int) ;

int FUNC_1(WPACKET *VAR_0)
{




    if (VAR_0->subs == ((void*)0) || VAR_0->subs->parent == ((void*)0))
        return 0;

    return FUNC_0(VAR_0, VAR_0->subs, 1);
}
