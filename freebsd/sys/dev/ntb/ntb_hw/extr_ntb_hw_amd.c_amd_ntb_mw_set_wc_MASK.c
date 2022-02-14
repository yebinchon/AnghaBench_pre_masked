
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef scalar_t__ vm_memattr_t ;
struct amd_ntb_softc {TYPE_1__* hw_info; struct amd_ntb_pci_bar_info* bar_info; } ;
struct amd_ntb_pci_bar_info {scalar_t__ map_mode; int size; scalar_t__ vbase; } ;
typedef int device_t ;
struct TYPE_2__ {unsigned int mw_count; unsigned int bar_start_idx; } ;


 int VAR_0 ;
 struct amd_ntb_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, unsigned int VAR_2, vm_memattr_t VAR_3)
{
 struct amd_ntb_softc *VAR_4 = FUNC_0(VAR_1);
 struct amd_ntb_pci_bar_info *VAR_5;
 int VAR_6;

 if (VAR_2 < 0 || VAR_2 >= VAR_4->hw_info->mw_count)
  return (VAR_0);

 VAR_5 = &VAR_4->bar_info[VAR_4->hw_info->bar_start_idx + VAR_2];
 if (VAR_3 == VAR_5->map_mode)
  return (0);

 VAR_6 = FUNC_1((vm_offset_t)VAR_5->vbase, VAR_5->size, VAR_3);
 if (VAR_6 == 0)
  VAR_5->map_mode = VAR_3;

 return (VAR_6);
}
