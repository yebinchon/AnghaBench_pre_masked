
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct ecore_dev {int dummy; } ;
struct TYPE_3__ {scalar_t__ pci_dbells; scalar_t__ pci_reg; struct ecore_dev cdev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(qlnx_host_t *VAR_1, void *VAR_2, uint32_t VAR_3)
{
 struct ecore_dev *VAR_4;
 uint32_t VAR_5;

 VAR_4 = &VAR_1->cdev;

 VAR_5 = (uint32_t)((uint8_t *)VAR_2 - (uint8_t *)VAR_1->pci_dbells);

 FUNC_1(VAR_1->pci_dbells, VAR_5, VAR_3);
 FUNC_0(VAR_1->pci_reg, 0, 0, VAR_0);
 FUNC_0(VAR_1->pci_dbells, 0, 0, VAR_0);

 return;
}
