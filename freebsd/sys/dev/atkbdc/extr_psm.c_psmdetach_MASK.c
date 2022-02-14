
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psm_softc {int state; int softcallout; int callout; int bdev; int dev; int intr; int ih; int evdev_a; int evdev_r; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct psm_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct psm_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5->state & VAR_2)
  return (VAR_0);






 VAR_6 = VAR_1;
 FUNC_1(VAR_4, VAR_5->intr, VAR_5->ih);
 FUNC_0(VAR_4, VAR_3, VAR_6, VAR_5->intr);

 FUNC_3(VAR_5->dev);
 FUNC_3(VAR_5->bdev);

 FUNC_2(&VAR_5->callout);
 FUNC_2(&VAR_5->softcallout);

 return (0);
}
