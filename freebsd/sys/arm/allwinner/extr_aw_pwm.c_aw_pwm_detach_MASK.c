
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aw_pwm_softc {int * res; int * busdev; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int ,int *) ;
 struct aw_pwm_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct aw_pwm_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_1);

 if ((VAR_3 = FUNC_0(VAR_2->dev)) != 0) {
  FUNC_4(VAR_2->dev, "cannot detach child devices\n");
  return (VAR_3);
 }

 if (VAR_2->busdev != ((void*)0))
  FUNC_2(VAR_1, VAR_2->busdev);

 if (VAR_2->res != ((void*)0))
  FUNC_1(VAR_1, VAR_0, &VAR_2->res);

 return (0);
}
