
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num_hwfns; } ;
struct TYPE_7__ {int * grcdump_size; TYPE_1__ cdev; int pci_func; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_8__ {int * grcdump_size; int pci_func; } ;
typedef TYPE_3__ qlnx_grcdump_t ;



__attribute__((used)) static void
FUNC_0(qlnx_host_t *VAR_0, qlnx_grcdump_t *VAR_1)
{
 int VAR_2;

 VAR_1->pci_func = VAR_0->pci_func;

 for (VAR_2 = 0; VAR_2 < VAR_0->cdev.num_hwfns; VAR_2++)
  VAR_1->grcdump_size[VAR_2] = VAR_0->grcdump_size[VAR_2];

 return;
}
