
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_rnd_softc {int sc_callout; } ;
typedef int device_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int ,struct octeon_rnd_softc*) ;
 int FUNC_2 () ;
 struct octeon_rnd_softc* FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct octeon_rnd_softc *VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 FUNC_0(&VAR_3->sc_callout, 1);
 FUNC_1(&VAR_3->sc_callout, VAR_0 * 5, VAR_1, VAR_3);

 FUNC_2();

 return (0);
}
