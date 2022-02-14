
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t lenbytes; unsigned char* packet_len; scalar_t__ pwritten; struct TYPE_7__* parent; } ;
typedef TYPE_1__ WPACKET_SUB ;
struct TYPE_8__ {scalar_t__ written; TYPE_1__* subs; } ;
typedef TYPE_2__ WPACKET ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,size_t,unsigned char**) ;
 int FUNC_4 (int ) ;

int FUNC_5(WPACKET *VAR_2, size_t VAR_3)
{
    WPACKET_SUB *VAR_4;
    unsigned char *VAR_5;


    if (!FUNC_4(VAR_2->subs != ((void*)0)))
        return 0;

    if ((VAR_4 = FUNC_1(sizeof(*VAR_4))) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 0;
    }

    VAR_4->parent = VAR_2->subs;
    VAR_2->subs = VAR_4;
    VAR_4->pwritten = VAR_2->written + VAR_3;
    VAR_4->lenbytes = VAR_3;

    if (VAR_3 == 0) {
        VAR_4->packet_len = 0;
        return 1;
    }

    if (!FUNC_3(VAR_2, VAR_3, &VAR_5))
        return 0;

    VAR_4->packet_len = VAR_5 - FUNC_0(VAR_2);

    return 1;
}
