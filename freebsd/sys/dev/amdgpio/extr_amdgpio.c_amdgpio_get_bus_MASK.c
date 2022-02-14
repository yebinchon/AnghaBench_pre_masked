
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpio_softc {int sc_busdev; } ;
typedef int device_t ;


 struct amdgpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static device_t
FUNC_2(device_t VAR_0)
{
 struct amdgpio_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 FUNC_1("busdev %p\n", VAR_1->sc_busdev);
 return (VAR_1->sc_busdev);
}
