
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* node_next; struct TYPE_5__* front; } ;
typedef TYPE_1__ queue ;
typedef TYPE_1__ node ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(
 queue *VAR_0
 )
{
    node *VAR_1 = ((void*)0);


    while (VAR_0->front != ((void*)0)) {
        VAR_1 = VAR_0->front;
        VAR_0->front = VAR_0->front->node_next;
        FUNC_0(VAR_1);
    }


    FUNC_0(VAR_0);
}
