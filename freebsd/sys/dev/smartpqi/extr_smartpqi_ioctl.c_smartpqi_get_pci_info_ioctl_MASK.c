
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int pqi_dev; } ;
struct pqisrc_softstate {TYPE_1__ os_specific; } ;
struct cdev {struct pqisrc_softstate* si_drv1; } ;
struct TYPE_4__ {int board_id; int chip_id; int domain; int dev_fn; int bus; } ;
typedef TYPE_2__ pqi_pci_info_t ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void FUNC_7(caddr_t VAR_2, struct cdev *VAR_3)
{
 struct pqisrc_softstate *VAR_4 = VAR_3->si_drv1;
 device_t VAR_5 = VAR_4->os_specific.pqi_dev;
 pqi_pci_info_t *VAR_6 = (pqi_pci_info_t *)VAR_2;
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9 = 0;
 uint32_t VAR_10 = 0;

 FUNC_0("IN udata = %p cdev = %p\n", VAR_2, VAR_3);

 VAR_6->bus = FUNC_1(VAR_5);
 VAR_6->dev_fn = FUNC_4(VAR_5);
 VAR_6->domain = FUNC_3(VAR_5);
 VAR_7 = FUNC_6(VAR_5, VAR_1, 2);
 VAR_8 = FUNC_6(VAR_5, VAR_0, 2);
 VAR_6->board_id = ((VAR_8 << 16) & 0xffff0000) | VAR_7;
 VAR_9 = FUNC_5(VAR_5);
 VAR_10 = FUNC_2(VAR_5);
 VAR_6->chip_id = ((VAR_10 << 16) & 0xffff0000) | VAR_9;
 FUNC_0("OUT\n");
}
