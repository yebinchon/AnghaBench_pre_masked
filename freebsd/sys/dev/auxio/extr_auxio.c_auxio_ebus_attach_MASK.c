
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxio_softc {int sc_flags; int sc_nauxio; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct auxio_softc*) ;
 int VAR_2 ;
 int FUNC_1 (struct auxio_softc*) ;
 struct auxio_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct auxio_softc *VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 VAR_4->sc_dev = VAR_3;

 FUNC_0(VAR_4);
 VAR_4->sc_nauxio = VAR_2;
 VAR_4->sc_flags = VAR_1 | VAR_0;

 return(FUNC_1(VAR_4));
}
