
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dev; int ** pcir; int * pcirid; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 struct drm_device* FUNC_2 (int ) ;
 int FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (int ) ;

int
FUNC_5(device_t VAR_2)
{
 struct drm_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2);

 FUNC_3(VAR_3);






 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->pcir[VAR_4] == ((void*)0))
   continue;
  FUNC_1(VAR_3->dev, VAR_1,
      VAR_3->pcirid[VAR_4], VAR_3->pcir[VAR_4]);
  VAR_3->pcir[VAR_4] = ((void*)0);
 }

 if (FUNC_4(VAR_3->dev))
  FUNC_0("Request to disable bus-master failed.\n");

 return (0);
}
