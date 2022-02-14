
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am335x_ehrpwm_softc {scalar_t__ sc_mem_res; int sc_mem_rid; int * sc_busdev; int sc_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct am335x_ehrpwm_softc*) ;
 int FUNC_1 (struct am335x_ehrpwm_softc*) ;
 int FUNC_2 (struct am335x_ehrpwm_softc*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 struct am335x_ehrpwm_softc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct am335x_ehrpwm_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_6(VAR_1);

 if ((VAR_3 = FUNC_3(VAR_2->sc_dev)) != 0)
  return (VAR_3);

 FUNC_0(VAR_2);

 if (VAR_2->sc_busdev != ((void*)0))
  FUNC_5(VAR_1, VAR_2->sc_busdev);

 if (VAR_2->sc_mem_res)
  FUNC_4(VAR_1, VAR_0,
      VAR_2->sc_mem_rid, VAR_2->sc_mem_res);

 FUNC_2(VAR_2);

 FUNC_1(VAR_2);

 return (0);
}
