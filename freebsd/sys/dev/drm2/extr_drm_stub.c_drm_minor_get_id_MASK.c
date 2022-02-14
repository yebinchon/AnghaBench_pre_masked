
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->dev);

 if (VAR_5 >= 64)
  return -VAR_2;

 if (VAR_4 == VAR_0) {
  VAR_5 += 64;
 } else if (VAR_4 == VAR_1) {
  VAR_5 += 128;
 }

 return VAR_5;
}
