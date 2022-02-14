
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freelist {void* head; int count; int dma; } ;
typedef int BUS_ADDRESS ;


 int FUNC_0 (int ) ;

void FUNC_1(struct freelist *VAR_0, void *VAR_1, BUS_ADDRESS VAR_2)
{
    FUNC_0(VAR_0->dma);
    VAR_0->count++;
    *(void **)VAR_1 = VAR_0->head;
    *(BUS_ADDRESS *)((void **)VAR_1+1) = VAR_2;
    VAR_0->head = VAR_1;
}
