
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {scalar_t__ p_dev; } ;
struct TYPE_2__ {int pci_reg; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

void
FUNC_1(void *VAR_1)
{
 qlnx_host_t *VAR_2;

 VAR_2 = (qlnx_host_t *)((struct ecore_hwfn *)VAR_1)->p_dev;
 FUNC_0(VAR_2->pci_reg, 0, 0, VAR_0);
}
