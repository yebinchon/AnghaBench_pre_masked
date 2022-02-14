
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aibs_softc {int * sc_asens_all; int * sc_asens_fan; int * sc_asens_temp; int * sc_asens_volt; } ;
typedef int device_t ;


 int VAR_0 ;
 struct aibs_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct aibs_softc *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->sc_asens_volt != ((void*)0))
  FUNC_1(VAR_2->sc_asens_volt, VAR_0);
 if (VAR_2->sc_asens_temp != ((void*)0))
  FUNC_1(VAR_2->sc_asens_temp, VAR_0);
 if (VAR_2->sc_asens_fan != ((void*)0))
  FUNC_1(VAR_2->sc_asens_fan, VAR_0);
 if (VAR_2->sc_asens_all != ((void*)0))
  FUNC_1(VAR_2->sc_asens_all, VAR_0);
 return (0);
}
