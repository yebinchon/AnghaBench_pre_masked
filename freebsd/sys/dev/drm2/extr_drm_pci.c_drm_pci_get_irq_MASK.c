
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int irq; scalar_t__ irqr; int dev; int irqrid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_2)
{

 if (VAR_2->irqr)
  return (VAR_2->irq);

 VAR_2->irqr = FUNC_0(VAR_2->dev, VAR_1,
     &VAR_2->irqrid, VAR_0);
 if (!VAR_2->irqr) {
  FUNC_1(VAR_2->dev, "Failed to allocate IRQ\n");
  return (0);
 }

 VAR_2->irq = (int) FUNC_2(VAR_2->irqr);

 return (VAR_2->irq);
}
