
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxio_softc {int sc_nauxio; int sc_flags; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct auxio_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct auxio_softc*) ;
 struct auxio_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct auxio_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 VAR_3->sc_dev = VAR_2;

 FUNC_0(VAR_3);
 VAR_3->sc_nauxio = 1;
 VAR_3->sc_flags = VAR_0 | VAR_1;

 return (FUNC_1(VAR_3));
}
