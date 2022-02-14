
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ area; } ;
struct emu10k1x {scalar_t__ irq; int pci; TYPE_1__ dma_buffer; int res_port; scalar_t__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,struct emu10k1x*) ;
 int FUNC_1 (struct emu10k1x*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct emu10k1x*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct emu10k1x *VAR_4)
{
 FUNC_6(VAR_4, VAR_3, 0, 0);

 FUNC_2(0, VAR_4->port + VAR_2);

 FUNC_2(VAR_1, VAR_4->port + VAR_0);


 if (VAR_4->irq >= 0)
  FUNC_0(VAR_4->irq, VAR_4);


 FUNC_4(VAR_4->res_port);


 if (VAR_4->dma_buffer.area) {
  FUNC_5(&VAR_4->dma_buffer);
 }

 FUNC_3(VAR_4->pci);


 FUNC_1(VAR_4);
 return 0;
}
