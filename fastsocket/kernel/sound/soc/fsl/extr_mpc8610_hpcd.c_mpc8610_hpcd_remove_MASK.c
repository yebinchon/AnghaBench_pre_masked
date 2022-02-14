
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct mpc8610_hpcd_data* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device {int dev; } ;
struct TYPE_3__ {scalar_t__ cpu_dai; } ;
struct mpc8610_hpcd_data {scalar_t__ guts; scalar_t__* dma_irq; scalar_t__* dma; scalar_t__ ssi; TYPE_1__ dai; } ;


 struct platform_device* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct mpc8610_hpcd_data*) ;
 int FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct of_device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_0(&VAR_0->dev);
 struct mpc8610_hpcd_data *VAR_2 =
  VAR_1->dev.platform_data;

 FUNC_6(VAR_1);

 if (VAR_2->dai.cpu_dai)
  FUNC_2(VAR_2->dai.cpu_dai);

 if (VAR_2->ssi)
  FUNC_3(VAR_2->ssi);

 if (VAR_2->dma[0])
  FUNC_3(VAR_2->dma[0]);

 if (VAR_2->dma[1])
  FUNC_3(VAR_2->dma[1]);

 if (VAR_2->dma_irq[0])
  FUNC_4(VAR_2->dma_irq[0]);

 if (VAR_2->dma_irq[1])
  FUNC_4(VAR_2->dma_irq[1]);

 if (VAR_2->guts)
  FUNC_3(VAR_2->guts);

 FUNC_5(VAR_2);
 VAR_1->dev.platform_data = ((void*)0);

 FUNC_1(&VAR_0->dev, ((void*)0));

 return 0;
}
