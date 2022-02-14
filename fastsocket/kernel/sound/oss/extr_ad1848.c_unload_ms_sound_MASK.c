
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_info {scalar_t__ io_base; int * slots; int dma2; int dma; int irq; } ;


 int FUNC_0 (scalar_t__,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct address_info *VAR_0)
{
 FUNC_0(VAR_0->io_base + 4,
        VAR_0->irq,
        VAR_0->dma,
        VAR_0->dma2, 0);
 FUNC_2(VAR_0->slots[0]);
 FUNC_1(VAR_0->io_base, 4);
}
