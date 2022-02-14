
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vendor; int device; } ;
typedef TYPE_1__ drm_pci_id_list_t ;



__attribute__((used)) static const drm_pci_id_list_t *
FUNC_0(int VAR_0, int VAR_1, const drm_pci_id_list_t *VAR_2)
{
 int VAR_3 = 0;

 for (VAR_3 = 0; VAR_2[VAR_3].vendor != 0; VAR_3++) {
  if ((VAR_2[VAR_3].vendor == VAR_0) &&
      ((VAR_2[VAR_3].device == VAR_1) ||
      (VAR_2[VAR_3].device == 0))) {
   return (&VAR_2[VAR_3]);
  }
 }
 return (((void*)0));
}
