
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpio_softc {int sc_res; scalar_t__ sc_busdev; } ;
typedef int device_t ;


 int FUNC_0 (struct amdgpio_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 struct amdgpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct amdgpio_softc *VAR_2;
 VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->sc_busdev)
  FUNC_3(VAR_1);

 FUNC_1(VAR_1, VAR_0, VAR_2->sc_res);

 FUNC_0(VAR_2);

 return (0);
}
