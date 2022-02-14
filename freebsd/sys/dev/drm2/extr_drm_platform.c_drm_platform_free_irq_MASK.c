
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {scalar_t__ irq; int * irqr; int irqrid; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_1)
{
 if (VAR_1->irqr == ((void*)0))
  return;

 FUNC_0(VAR_1->dev, VAR_0,
     VAR_1->irqrid, VAR_1->irqr);

 VAR_1->irqr = ((void*)0);
 VAR_1->irq = 0;
}
