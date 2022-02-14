
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioc_softc {scalar_t__ sc_ctl_dev; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct gpioc_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct gpioc_softc *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (VAR_1->sc_ctl_dev)
  FUNC_1(VAR_1->sc_ctl_dev);

 if ((VAR_2 = FUNC_0(VAR_0)) != 0)
  return (VAR_2);

 return (0);
}
