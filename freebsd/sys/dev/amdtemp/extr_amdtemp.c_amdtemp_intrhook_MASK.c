
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_ctx_list {int dummy; } ;
struct TYPE_2__ {int * ich_arg; } ;
struct amdtemp_softc {int sc_ncores; int sc_ntemps; TYPE_1__ sc_ich; int ** sc_sysctl_cpu; } ;
typedef int * device_t ;
typedef int amdsensor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,int ,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *,char*,int) ;
 struct amdtemp_softc* FUNC_4 (int *) ;
 struct sysctl_ctx_list* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * VAR_7 ;

void
FUNC_8(void *VAR_8)
{
 struct amdtemp_softc *VAR_9;
 struct sysctl_ctx_list *VAR_10;
 device_t VAR_11 = (device_t)VAR_8;
 device_t VAR_12, VAR_13, VAR_14;
 amdsensor_t VAR_15;
 int VAR_16;

 VAR_9 = FUNC_4(VAR_11);




 VAR_14 = FUNC_3(VAR_7, "nexus", 0);
 VAR_12 = FUNC_3(VAR_14, "acpi", 0);

 for (VAR_16 = 0; VAR_16 < VAR_9->sc_ncores; VAR_16++) {
  if (VAR_9->sc_sysctl_cpu[VAR_16] != ((void*)0))
   continue;
  VAR_13 = FUNC_3(VAR_12, "cpu",
      FUNC_7(VAR_11) * VAR_9->sc_ncores + VAR_16);
  if (VAR_13 != ((void*)0)) {
   VAR_10 = FUNC_5(VAR_13);

   VAR_15 = VAR_9->sc_ntemps > 1 ?
       (VAR_16 == 0 ? VAR_0 : VAR_2) : VAR_1;
   VAR_9->sc_sysctl_cpu[VAR_16] = FUNC_0(VAR_10,
       FUNC_1(FUNC_6(VAR_13)),
       VAR_5, "temperature", VAR_4 | VAR_3,
       VAR_11, VAR_15, VAR_6, "IK",
       "Current temparature");
  }
 }
 if (VAR_9->sc_ich.ich_arg != ((void*)0))
  FUNC_2(&VAR_9->sc_ich);
}
