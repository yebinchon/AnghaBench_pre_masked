
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int ecam; } ;
struct generic_pcie_acpi_softc {TYPE_1__ base; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,uintptr_t,int*,int*) ;
 struct generic_pcie_acpi_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,uintptr_t*) ;

__attribute__((used)) static u_int
FUNC_3(device_t VAR_1, device_t VAR_2, uintptr_t *VAR_3)
{
 struct generic_pcie_acpi_softc *VAR_4;
 uintptr_t VAR_5;
 u_int VAR_6, VAR_7;
 int VAR_8;

 VAR_4 = FUNC_1(VAR_1);
 VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_0, &VAR_5);
 if (VAR_8 != 0)
  return (VAR_8);
        VAR_8 = FUNC_0(VAR_4->base.ecam, VAR_5, &VAR_6, &VAR_7);
 if (VAR_8 == 0)
  *VAR_3 = VAR_7;
 else
  *VAR_3 = VAR_5;
 return (0);
}
