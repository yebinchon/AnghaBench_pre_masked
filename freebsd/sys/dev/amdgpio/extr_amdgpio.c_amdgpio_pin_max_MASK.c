
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpio_softc {int sc_npins; } ;
typedef int device_t ;


 struct amdgpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, int *VAR_1)
{
 struct amdgpio_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->sc_npins - 1;
 FUNC_1("npins %d maxpin %d\n", VAR_2->sc_npins, *VAR_1);

 return (0);
}
