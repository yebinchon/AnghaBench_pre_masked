
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {uintptr_t bus_start; uintptr_t ecam; } ;
struct generic_pcie_acpi_softc {TYPE_1__ base; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct generic_pcie_acpi_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4, device_t VAR_5, int VAR_6,
    uintptr_t *VAR_7)
{
 struct generic_pcie_acpi_softc *VAR_8;

 VAR_8 = FUNC_0(VAR_4);

 if (VAR_6 == VAR_1) {
  *VAR_7 = VAR_8->base.bus_start;
  return (0);
 }

 if (VAR_6 == VAR_2) {
  *VAR_7 = VAR_8->base.ecam;
  return (0);
 }

 if (VAR_3)
  FUNC_1(VAR_4, "ERROR: Unknown index %d.\n", VAR_6);
 return (VAR_0);
}
