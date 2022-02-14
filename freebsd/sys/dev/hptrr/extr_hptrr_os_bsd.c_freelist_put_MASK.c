
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freelist {scalar_t__ dma; void* head; int count; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct freelist * VAR_0, void *VAR_1)
{
    FUNC_0(VAR_0->dma==0);
    VAR_0->count++;
    *(void **)VAR_1 = VAR_0->head;
    VAR_0->head = VAR_1;
}
