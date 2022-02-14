
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct ecore_hwfn {scalar_t__ doorbells; struct ecore_dev* p_dev; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_2__ {int pci_dbells; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;

void
FUNC_1(void *VAR_0, void *VAR_1, uint32_t VAR_2)
{
 struct ecore_dev *VAR_3;
 struct ecore_hwfn *VAR_4;
 uint32_t VAR_5;

 VAR_4 = VAR_0;

 VAR_3 = VAR_4->p_dev;

 VAR_5 = (uint32_t)((uint8_t *)VAR_1 - (uint8_t *)(VAR_4->doorbells));
 FUNC_0(((qlnx_host_t *)VAR_3)->pci_dbells, VAR_5, VAR_2);

 return;
}
