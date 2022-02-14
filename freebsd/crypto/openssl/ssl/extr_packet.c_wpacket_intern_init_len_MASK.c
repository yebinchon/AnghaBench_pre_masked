
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* subs; scalar_t__ written; scalar_t__ curr; } ;
typedef TYPE_1__ WPACKET ;
struct TYPE_8__ {size_t pwritten; size_t lenbytes; unsigned char* packet_len; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,size_t,unsigned char**) ;

__attribute__((used)) static int FUNC_5(WPACKET *VAR_2, size_t VAR_3)
{
    unsigned char *VAR_4;

    VAR_2->curr = 0;
    VAR_2->written = 0;

    if ((VAR_2->subs = FUNC_2(sizeof(*VAR_2->subs))) == ((void*)0)) {
        FUNC_3(VAR_1, VAR_0);
        return 0;
    }

    if (VAR_3 == 0)
        return 1;

    VAR_2->subs->pwritten = VAR_3;
    VAR_2->subs->lenbytes = VAR_3;

    if (!FUNC_4(VAR_2, VAR_3, &VAR_4)) {
        FUNC_1(VAR_2->subs);
        VAR_2->subs = ((void*)0);
        return 0;
    }
    VAR_2->subs->packet_len = VAR_4 - FUNC_0(VAR_2);

    return 1;
}
