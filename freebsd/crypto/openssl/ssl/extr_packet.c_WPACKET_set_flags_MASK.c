
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* subs; } ;
typedef TYPE_2__ WPACKET ;
struct TYPE_4__ {unsigned int flags; } ;


 int FUNC_0 (int ) ;

int FUNC_1(WPACKET *VAR_0, unsigned int VAR_1)
{

    if (!FUNC_0(VAR_0->subs != ((void*)0)))
        return 0;

    VAR_0->subs->flags = VAR_1;

    return 1;
}
