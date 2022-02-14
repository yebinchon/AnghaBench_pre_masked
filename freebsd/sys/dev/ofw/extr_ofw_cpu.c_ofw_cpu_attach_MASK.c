
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ofw_cpulist_softc {int sc_addr_cells; } ;
struct ofw_cpu_softc {int* sc_reg; int sc_reg_valid; int sc_nominal_mhz; int * sc_cpu_pcpu; } ;
struct cpuref {scalar_t__ cr_hwref; int cr_cpuid; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;
typedef int clk_t ;
typedef scalar_t__ cell_t ;
typedef int cell ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*,void**) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (int ) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int*) ;
 int FUNC_13 (int ) ;
 void* FUNC_14 (int ) ;
 int FUNC_15 (struct cpuref*) ;
 int FUNC_16 (struct cpuref*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_4)
{
 struct ofw_cpulist_softc *VAR_5;
 struct ofw_cpu_softc *VAR_6;
 phandle_t VAR_7;
 pcell_t VAR_8;
 int VAR_9;





 VAR_6 = FUNC_9(VAR_4);
 VAR_5 = FUNC_9(FUNC_8(VAR_4));

 if (FUNC_12(VAR_6->sc_reg) < VAR_5->sc_addr_cells) {
  if (VAR_3)
   FUNC_11(VAR_4, "Too many address cells\n");
  return (VAR_0);
 }

 VAR_7 = FUNC_13(VAR_4);


 VAR_6->sc_reg_valid = 0;
 VAR_9 = FUNC_0(VAR_7, "reg", VAR_6->sc_reg, sizeof(VAR_6->sc_reg));
 if (VAR_9 < 0)
  FUNC_11(VAR_4, "missing 'reg' property\n");
 else if ((VAR_9 % 4) != 0) {
  if (VAR_3)
   FUNC_11(VAR_4, "Malformed reg property\n");
 } else if ((VAR_9 / 4) != VAR_5->sc_addr_cells) {
  if (VAR_3)
   FUNC_11(VAR_4, "Invalid reg size %u\n", VAR_9);
 } else
  VAR_6->sc_reg_valid = 1;
 VAR_6->sc_cpu_pcpu = FUNC_14(FUNC_10(VAR_4));

 if (FUNC_0(VAR_7, "clock-frequency", &VAR_8, sizeof(VAR_8)) < 0) {
  {
   if (VAR_3)
    FUNC_11(VAR_4,
        "missing 'clock-frequency' property\n");
  }
 } else
  VAR_6->sc_nominal_mhz = VAR_8 / 1000000;

 if (VAR_6->sc_nominal_mhz != 0 && VAR_3)
  FUNC_11(VAR_4, "Nominal frequency %dMhz\n",
      VAR_6->sc_nominal_mhz);
 FUNC_5(VAR_4);
 return (FUNC_4(VAR_4));
}
