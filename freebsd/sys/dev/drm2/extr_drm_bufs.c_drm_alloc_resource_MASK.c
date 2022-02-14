
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct drm_device {int* pcirid; struct resource** pcir; int dev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_2 (int ,int ,int*,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_3, int VAR_4)
{
 struct resource *VAR_5;
 int VAR_6;

 if (VAR_4 >= VAR_0) {
  FUNC_0("Resource %d too large\n", VAR_4);
  return 1;
 }

 if (VAR_3->pcir[VAR_4] != ((void*)0)) {
  return 0;
 }

 VAR_6 = FUNC_1(VAR_4);
 VAR_5 = FUNC_2(VAR_3->dev, VAR_2, &VAR_6,
     VAR_1);
 if (VAR_5 == ((void*)0)) {
  FUNC_0("Couldn't find resource 0x%x\n", VAR_4);
  return 1;
 }

 if (VAR_3->pcir[VAR_4] == ((void*)0)) {
  VAR_3->pcirid[VAR_4] = VAR_6;
  VAR_3->pcir[VAR_4] = VAR_5;
 }

 return 0;
}
