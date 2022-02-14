
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_softc {int dummy; } ;
struct drm_device {int dev; } ;


 struct host1x_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct host1x_softc*) ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static int
FUNC_5(struct drm_device *VAR_0)
{
 struct host1x_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0->dev);

 FUNC_1(VAR_0);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0)
  return (VAR_2);
 return (0);
}
