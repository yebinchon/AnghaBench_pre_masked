
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource_list {int dummy; } ;
struct TYPE_5__ {scalar_t__ ecam; int bus_start; int bus_end; } ;
struct generic_pcie_acpi_softc {TYPE_1__ base; } ;
struct acpi_device {struct resource_list ad_rl; } ;
typedef int rman_res_t ;
typedef int device_t ;
struct TYPE_7__ {scalar_t__ PciSegment; int StartBusNumber; int EndBusNumber; int Address; } ;
struct TYPE_6__ {int Length; } ;
typedef int ACPI_TABLE_MCFG ;
typedef TYPE_2__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_MCFG_ALLOCATION ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,TYPE_2__**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 struct acpi_device* FUNC_4 (int ) ;
 struct generic_pcie_acpi_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,int,...) ;
 int FUNC_7 (struct resource_list*,int ,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7)
{
 struct generic_pcie_acpi_softc *VAR_8;
 struct acpi_device *VAR_9;
 struct resource_list *VAR_10;
 ACPI_TABLE_HEADER *VAR_11;
 ACPI_MCFG_ALLOCATION *VAR_12, *VAR_13;
 ACPI_HANDLE VAR_14;
 ACPI_STATUS VAR_15;
 rman_res_t VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;

 VAR_8 = FUNC_5(VAR_7);
 VAR_14 = FUNC_3(VAR_7);


 VAR_15 = FUNC_1(VAR_0, 1, &VAR_11);
 if (FUNC_0(VAR_15)) {
  VAR_19 = VAR_2;
  VAR_13 = (ACPI_MCFG_ALLOCATION *)((char *)VAR_11 + VAR_11->Length);
  VAR_12 = (ACPI_MCFG_ALLOCATION *)((ACPI_TABLE_MCFG *)VAR_11 + 1);
  while (VAR_12 < VAR_13 && !VAR_19) {
   if (VAR_12->PciSegment == VAR_8->base.ecam &&
       VAR_12->StartBusNumber <= VAR_8->base.bus_start &&
       VAR_12->EndBusNumber >= VAR_8->base.bus_start)
    VAR_19 = VAR_5;
   else
    VAR_12++;
  }
  if (VAR_19) {
   VAR_8->base.bus_end = VAR_12->EndBusNumber;
   VAR_16 = VAR_12->Address;
  } else {
   FUNC_6(VAR_7, "MCFG exists, but does not have bus %d-%d\n",
       VAR_8->base.bus_start, VAR_8->base.bus_end);
   return (VAR_1);
  }
 } else {
  VAR_15 = FUNC_2(VAR_14, "_CBA", &VAR_20);
  if (FUNC_0(VAR_15)) {
   VAR_16 = VAR_20;
   VAR_8->base.bus_end = 255;
  } else
   return (VAR_1);
 }


 VAR_9 = FUNC_4(VAR_7);
 VAR_10 = &VAR_9->ad_rl;
 VAR_17 = VAR_16 + (VAR_8->base.bus_start << VAR_3);
 VAR_18 = VAR_16 + ((VAR_8->base.bus_end + 1) << VAR_3) - 1;
 FUNC_7(VAR_10, VAR_4, 0, VAR_17, VAR_18, VAR_18 - VAR_17 + 1);
 if (VAR_6)
  FUNC_6(VAR_7, "ECAM for bus %d-%d at mem %jx-%jx\n",
      VAR_8->base.bus_start, VAR_8->base.bus_end, VAR_17, VAR_18);
 return (0);
}
