
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_softc {int dummy; } ;
struct bhnd_resource {int dummy; } ;
struct bhnd_core_clkctl {scalar_t__ cc_pmu_dev; struct bhnd_resource* cc_res; int cc_dev; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bhnd_core_clkctl*) ;
 int FUNC_1 (struct bhnd_core_clkctl*,int,int) ;
 int FUNC_2 (struct bhnd_core_clkctl*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct bhnd_core_clkctl*) ;
 struct bhnd_core_clkctl* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int *) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 struct bhnd_softc* FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct bhnd_resource*,int ) ;
 int FUNC_12 (char*,int ) ;

int
FUNC_13(device_t VAR_7, device_t VAR_8)
{
 struct bhnd_softc *VAR_9;
 struct bhnd_core_clkctl *VAR_10;
 struct bhnd_resource *VAR_11;
 device_t VAR_12;

 VAR_5;

 VAR_9 = FUNC_10(VAR_7);

 if (FUNC_9(VAR_8) != VAR_7)
  return (VAR_4);

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10 == ((void*)0))
  FUNC_12("pmu over-release for %s", FUNC_8(VAR_8));





 if (!FUNC_5(VAR_10->cc_dev)) {
  FUNC_0(VAR_10);


  FUNC_1(VAR_10, 0x0, VAR_2 |
      VAR_0 | VAR_1);

  FUNC_2(VAR_10);
 }


 FUNC_7(VAR_8, ((void*)0));



 VAR_11 = VAR_10->cc_res;
 VAR_12 = VAR_10->cc_pmu_dev;


 FUNC_3(VAR_10);


 FUNC_11(VAR_11, VAR_6);


 FUNC_6(VAR_8, VAR_12, VAR_3);

 return (0);
}
