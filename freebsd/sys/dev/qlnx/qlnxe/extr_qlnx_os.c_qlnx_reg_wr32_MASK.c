
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ecore_hwfn {scalar_t__ reg_offset; scalar_t__ p_dev; } ;
struct TYPE_2__ {int pci_reg; } ;
typedef TYPE_1__ qlnx_host_t ;
typedef int bus_size_t ;


 int FUNC_0 (int ,int ,scalar_t__) ;

void
FUNC_1(void *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 struct ecore_hwfn *VAR_3 = VAR_0;

 FUNC_0(((qlnx_host_t *)VAR_3->p_dev)->pci_reg, (bus_size_t)(VAR_3->reg_offset + VAR_1), VAR_2);


 return;
}
