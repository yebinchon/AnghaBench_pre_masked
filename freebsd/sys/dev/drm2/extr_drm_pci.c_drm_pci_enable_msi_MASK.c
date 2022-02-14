
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int msi_enabled; int irqrid; int dev; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct drm_device *VAR_2)
{
 int VAR_3, VAR_4;

 if (!VAR_1)
  return (-VAR_0);

 VAR_3 = FUNC_3(VAR_2->dev);
 FUNC_0("MSI count = %d\n", VAR_3);
 if (VAR_3 > 1)
  VAR_3 = 1;

 VAR_4 = FUNC_2(VAR_2->dev, &VAR_3);
 if (VAR_4 == 0) {
  FUNC_1("MSI enabled %d message(s)\n", VAR_3);
  VAR_2->msi_enabled = 1;
  VAR_2->irqrid = 1;
 }

 return (-VAR_4);
}
