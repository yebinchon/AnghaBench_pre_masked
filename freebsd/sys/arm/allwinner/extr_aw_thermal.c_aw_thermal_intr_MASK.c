
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aw_thermal_softc {int cf_task; } ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aw_thermal_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct aw_thermal_softc*,int ,int) ;
 struct aw_thermal_softc* FUNC_2 (void*) ;
 int FUNC_3 (void*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(void *VAR_5)
{
 struct aw_thermal_softc *VAR_6;
 device_t VAR_7;
 uint32_t VAR_8;

 VAR_7 = VAR_5;
 VAR_6 = FUNC_2(VAR_7);

 VAR_8 = FUNC_0(VAR_6, VAR_3);
 FUNC_1(VAR_6, VAR_3, VAR_8);

 if ((VAR_8 & VAR_2) != 0) {
  FUNC_3(VAR_7,
      "WARNING - current temperature exceeds safe limits\n");
  FUNC_4(VAR_1);
 }

 if ((VAR_8 & VAR_0) != 0)
  FUNC_5(VAR_4, &VAR_6->cf_task);
}
