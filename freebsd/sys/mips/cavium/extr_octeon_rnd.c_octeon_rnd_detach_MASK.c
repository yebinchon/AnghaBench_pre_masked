
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_rnd_softc {int sc_callout; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 struct octeon_rnd_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct octeon_rnd_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->sc_callout);

 return (0);
}
