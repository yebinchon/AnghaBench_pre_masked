
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct armada_thermal_softc {int * ctrl_res; int * stat_res; scalar_t__ chip_temperature; int temp_upd; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 struct armada_thermal_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct armada_thermal_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 if (!FUNC_3(VAR_1))
  return (0);

 FUNC_1(&VAR_2->temp_upd);

 VAR_2->chip_temperature = 0;

 FUNC_0(VAR_1, VAR_0,
     FUNC_4(VAR_2->stat_res), VAR_2->stat_res);
 VAR_2->stat_res = ((void*)0);

 FUNC_0(VAR_1, VAR_0,
     FUNC_4(VAR_2->ctrl_res), VAR_2->ctrl_res);
 VAR_2->ctrl_res = ((void*)0);

 return (0);
}
