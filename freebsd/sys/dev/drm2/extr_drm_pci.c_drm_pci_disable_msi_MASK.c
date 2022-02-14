
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {scalar_t__ irqrid; scalar_t__ msi_enabled; int dev; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct drm_device *VAR_0)
{

 if (!VAR_0->msi_enabled)
  return;

 FUNC_0(VAR_0->dev);
 VAR_0->msi_enabled = 0;
 VAR_0->irqrid = 0;
}
