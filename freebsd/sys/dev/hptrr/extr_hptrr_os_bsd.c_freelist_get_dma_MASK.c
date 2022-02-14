
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freelist {int dma; } ;
typedef int BUS_ADDRESS ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (struct freelist*) ;

void *FUNC_2(struct freelist *VAR_0, BUS_ADDRESS *VAR_1)
{
    void *VAR_2;
    FUNC_0(VAR_0->dma);
    VAR_2 = FUNC_1(VAR_0);
    if (VAR_2)
        *VAR_1 = *(BUS_ADDRESS *)((void **)VAR_2+1);
    return VAR_2;
}
