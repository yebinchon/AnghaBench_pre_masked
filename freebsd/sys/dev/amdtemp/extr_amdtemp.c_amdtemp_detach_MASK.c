
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtemp_softc {int sc_ncores; int ** sc_sysctl_cpu; } ;
typedef int device_t ;


 struct amdtemp_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ) ;

int
FUNC_2(device_t VAR_0)
{
 struct amdtemp_softc *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->sc_ncores; VAR_2++)
  if (VAR_1->sc_sysctl_cpu[VAR_2] != ((void*)0))
   FUNC_1(VAR_1->sc_sysctl_cpu[VAR_2], 1, 0);



 return (0);
}
