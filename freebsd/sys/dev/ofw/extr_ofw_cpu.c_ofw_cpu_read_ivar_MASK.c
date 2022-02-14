
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_cpulist_softc {uintptr_t sc_addr_cells; } ;
struct ofw_cpu_softc {int sc_reg; int sc_reg_valid; int sc_nominal_mhz; int sc_cpu_pcpu; } ;
typedef int device_t ;






 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 struct ofw_cpulist_softc *VAR_5;
 struct ofw_cpu_softc *VAR_6;

 VAR_6 = FUNC_1(VAR_1);

 switch (VAR_3) {
 case 128:
  *VAR_4 = (uintptr_t)VAR_6->sc_cpu_pcpu;
  return (0);
 case 129:
  if (VAR_6->sc_nominal_mhz > 0) {
   *VAR_4 = (uintptr_t)VAR_6->sc_nominal_mhz;
   return (0);
  }
  break;
 case 130:
  VAR_5 = FUNC_1(FUNC_0(VAR_1));
  *VAR_4 = VAR_5->sc_addr_cells;
  return (0);
 case 131:
  if (VAR_6->sc_reg_valid) {
   *VAR_4 = (uintptr_t)VAR_6->sc_reg;
   return (0);
  }
  break;
 }

 return (VAR_0);
}
