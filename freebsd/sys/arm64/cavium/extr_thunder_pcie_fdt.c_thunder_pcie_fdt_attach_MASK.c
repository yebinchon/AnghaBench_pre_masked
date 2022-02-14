
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int coherent; int ecam; } ;
struct generic_pcie_fdt_softc {TYPE_1__ base; } ;
typedef int device_t ;


 struct generic_pcie_fdt_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct generic_pcie_fdt_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(VAR_0, &VAR_1->base.ecam);
 VAR_1->base.coherent = 1;

 return (FUNC_1(VAR_0));
}
