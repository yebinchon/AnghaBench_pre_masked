
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct ecore_hwfn {struct ecore_dev* p_dev; } ;
struct ecore_dev {scalar_t__ regview; } ;
struct TYPE_2__ {int pci_reg; } ;
typedef TYPE_1__ qlnx_host_t ;
typedef scalar_t__ bus_size_t ;


 int FUNC_0 (int ,scalar_t__,int ) ;

void
FUNC_1(void *VAR_0, void *VAR_1, uint64_t VAR_2)
{
 bus_size_t VAR_3;
 struct ecore_dev *VAR_4;

 VAR_4 = ((struct ecore_hwfn *)VAR_0)->p_dev;
 VAR_3 = (bus_size_t)((uint8_t *)VAR_1 - (uint8_t *)(VAR_4->regview));

 FUNC_0(((qlnx_host_t *)VAR_4)->pci_reg, VAR_3, VAR_2);
 return;
}
