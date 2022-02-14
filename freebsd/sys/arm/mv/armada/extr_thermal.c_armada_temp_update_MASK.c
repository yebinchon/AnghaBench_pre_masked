
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct armada_thermal_softc {int temp_upd; int chip_temperature; } ;


 int FUNC_0 (struct armada_thermal_softc*,int *) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct armada_thermal_softc*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct armada_thermal_softc *VAR_2;

 VAR_2 = VAR_1;

 (void)FUNC_0(VAR_2, &VAR_2->chip_temperature);

 FUNC_1(&VAR_2->temp_upd, VAR_0, FUNC_2, VAR_2);
}
