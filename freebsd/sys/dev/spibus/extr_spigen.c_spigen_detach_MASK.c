
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spigen_softc {int sc_mtx; scalar_t__ sc_cdev; scalar_t__ sc_adev; } ;
typedef int device_t ;


 int FUNC_0 (scalar_t__) ;
 struct spigen_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct spigen_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);






 if (VAR_1->sc_cdev)
  FUNC_0(VAR_1->sc_cdev);

 FUNC_2(&VAR_1->sc_mtx);

 return (0);
}
