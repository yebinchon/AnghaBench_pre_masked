
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
struct arm_gic_softc {int dummy; } ;
typedef int device_t ;
struct TYPE_6__ {int Length; } ;
struct TYPE_7__ {TYPE_1__ Header; } ;
typedef TYPE_2__ ACPI_TABLE_MADT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,int ,struct arm_gic_softc*) ;
 struct arm_gic_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_6(device_t VAR_2)
{
 struct arm_gic_softc *VAR_3 = FUNC_4(VAR_2);
 ACPI_TABLE_MADT *VAR_4;
 vm_paddr_t VAR_5;


 VAR_5 = FUNC_0(VAR_0);
 if (VAR_5 == 0)
  return (0);

 VAR_4 = FUNC_1(VAR_5, VAR_0);
 if (VAR_4 == ((void*)0)) {
  FUNC_5(VAR_2, "gic: Unable to map the MADT\n");
  return (0);
 }

 FUNC_3(VAR_4 + 1, (char *)VAR_4 + VAR_4->Header.Length,
     VAR_1, VAR_3);

 FUNC_2(VAR_4);

 return (1);
}
