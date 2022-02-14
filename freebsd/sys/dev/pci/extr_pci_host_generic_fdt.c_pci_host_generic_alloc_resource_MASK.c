
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct resource_list_entry {scalar_t__ start; scalar_t__ end; scalar_t__ count; } ;
struct resource {int dummy; } ;
struct generic_pcie_ofw_devinfo {int di_rl; } ;
struct TYPE_4__ {TYPE_1__* ranges; } ;
struct generic_pcie_fdt_softc {TYPE_2__ base; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
struct TYPE_3__ {scalar_t__ phys_base; scalar_t__ pci_base; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 struct resource* FUNC_1 (int ,int ,int,int*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 struct generic_pcie_ofw_devinfo* FUNC_2 (int ) ;
 struct generic_pcie_fdt_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 struct resource* FUNC_6 (int ,int ,int,int*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 struct resource_list_entry* FUNC_7 (int *,int,int) ;

struct resource *
FUNC_8(device_t VAR_4, device_t VAR_5, int VAR_6,
    int *VAR_7, rman_res_t VAR_8, rman_res_t VAR_9, rman_res_t VAR_10, u_int VAR_11)
{
 struct generic_pcie_fdt_softc *VAR_12;
 struct generic_pcie_ofw_devinfo *VAR_13;
 struct resource_list_entry *VAR_14;
 int VAR_15;
 if ((int)FUNC_5(VAR_5) <= 0)
  return (FUNC_6(VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_9, VAR_10, VAR_11));


 VAR_12 = FUNC_3(VAR_4);

 if (FUNC_0(VAR_8, VAR_9)) {
  if ((VAR_13 = FUNC_2(VAR_5)) == ((void*)0))
   return (((void*)0));
  if (VAR_6 == VAR_2)
      VAR_6 = VAR_3;


  VAR_14 = FUNC_7(&VAR_13->di_rl, VAR_6, *VAR_7);
  if (VAR_14 == ((void*)0))
   return (((void*)0));

  VAR_8 = VAR_14->start;
  VAR_9 = VAR_14->end;
  VAR_10 = VAR_14->count;
 }

 if (VAR_6 == VAR_3) {

  for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
   if (VAR_8 >= VAR_12->base.ranges[VAR_15].phys_base &&
       VAR_9 < (VAR_12->base.ranges[VAR_15].pci_base +
       VAR_12->base.ranges[VAR_15].size)) {
    VAR_8 -= VAR_12->base.ranges[VAR_15].phys_base;
    VAR_8 += VAR_12->base.ranges[VAR_15].pci_base;
    VAR_9 -= VAR_12->base.ranges[VAR_15].phys_base;
    VAR_9 += VAR_12->base.ranges[VAR_15].pci_base;
    break;
   }
  }

  if (VAR_15 == VAR_0) {
   FUNC_4(VAR_4, "Could not map resource "
       "%#jx-%#jx\n", VAR_8, VAR_9);
   return (((void*)0));
  }
 }

 return (FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10, VAR_11));
}
