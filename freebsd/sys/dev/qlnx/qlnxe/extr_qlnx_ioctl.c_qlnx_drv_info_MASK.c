
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int num_hwfns; } ;
struct TYPE_8__ {char* mfw_ver; char* stormfw_ver; int pci_func; int pci_dev; scalar_t__* grcdump_size; TYPE_1__ cdev; int flash_size; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_9__ {int bus_info; int reg_dump_len; int eeprom_dump_len; int stormfw_version; int mfw_version; int drv_version; int drv_name; } ;
typedef TYPE_3__ qlnx_drvinfo_t ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_3 (int ,int,char*,...) ;

__attribute__((used)) static int
FUNC_4(qlnx_host_t *VAR_2, qlnx_drvinfo_t *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3, sizeof(qlnx_drvinfo_t));

 FUNC_3(VAR_3->drv_name, sizeof(VAR_3->drv_name), "%s",
  VAR_0);
 FUNC_3(VAR_3->drv_version, sizeof(VAR_3->drv_version), "%s",
  VAR_1);
 FUNC_3(VAR_3->mfw_version, sizeof(VAR_3->mfw_version), "%s",
  VAR_2->mfw_ver);
 FUNC_3(VAR_3->stormfw_version, sizeof(VAR_3->stormfw_version),
  "%s", VAR_2->stormfw_ver);

 VAR_3->eeprom_dump_len = VAR_2->flash_size;

 for (VAR_4 = 0; VAR_4 < VAR_2->cdev.num_hwfns; VAR_4++) {
  VAR_3->reg_dump_len += VAR_2->grcdump_size[VAR_4];
 }

 FUNC_3(VAR_3->bus_info, sizeof(VAR_3->bus_info),
  "%d:%d:%d", FUNC_1(VAR_2->pci_dev),
  FUNC_2(VAR_2->pci_dev), VAR_2->pci_func);

 return (0);
}
