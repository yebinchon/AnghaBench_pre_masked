
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
struct amd_ntb_softc {TYPE_1__* hw_info; struct amd_ntb_pci_bar_info* bar_info; } ;
struct amd_ntb_pci_bar_info {size_t size; int vbase; int pbase; } ;
typedef int device_t ;
typedef int caddr_t ;
typedef int bus_addr_t ;
struct TYPE_2__ {unsigned int mw_count; unsigned int bar_start_idx; int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct amd_ntb_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_4, unsigned VAR_5, vm_paddr_t *VAR_6,
    caddr_t *VAR_7, size_t *VAR_8, size_t *VAR_9, size_t *VAR_10,
    bus_addr_t *VAR_11)
{
 struct amd_ntb_softc *VAR_12 = FUNC_0(VAR_4);
 struct amd_ntb_pci_bar_info *VAR_13;

 if (VAR_5 < 0 || VAR_5 >= VAR_12->hw_info->mw_count)
  return (VAR_2);

 VAR_13 = &VAR_12->bar_info[VAR_12->hw_info->bar_start_idx + VAR_5];

 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_13->pbase;

 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_13->vbase;

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_13->size;

 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_13->size;

 if (VAR_10 != ((void*)0))
  *VAR_10 = 1;

 if (VAR_11 != ((void*)0)) {





  if ((VAR_5 == 0) && (VAR_12->hw_info->quirks & VAR_3))
   *VAR_11 = VAR_1;
  else
   *VAR_11 = VAR_0;
 }

 return (0);
}
