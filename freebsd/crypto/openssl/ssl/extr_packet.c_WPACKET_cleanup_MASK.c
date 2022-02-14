
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* parent; } ;
typedef TYPE_1__ WPACKET_SUB ;
struct TYPE_6__ {TYPE_1__* subs; } ;
typedef TYPE_2__ WPACKET ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(WPACKET *VAR_0)
{
    WPACKET_SUB *VAR_1, *VAR_2;

    for (VAR_1 = VAR_0->subs; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
        VAR_2 = VAR_1->parent;
        FUNC_0(VAR_1);
    }
    VAR_0->subs = ((void*)0);
}
