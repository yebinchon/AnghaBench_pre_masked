
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct qlnx_link_output {int autoneg; int duplex; int speed; int advertised_caps; int supported_caps; } ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_7__ {struct ecore_hwfn* hwfns; } ;
struct TYPE_8__ {int pci_func; TYPE_1__ cdev; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_9__ {int port; int autoneg; int duplex; int speed; int advertising; int supported; } ;
typedef TYPE_3__ qlnx_dev_setting_t ;


 int FUNC_0 (TYPE_2__*,struct ecore_hwfn*,struct qlnx_link_output*) ;

__attribute__((used)) static int
FUNC_1(qlnx_host_t *VAR_0, qlnx_dev_setting_t *VAR_1)
{
 struct ecore_hwfn *VAR_2;
 struct qlnx_link_output VAR_3;

 VAR_2 = &VAR_0->cdev.hwfns[0];

 FUNC_0(VAR_0, VAR_2, &VAR_3);

 VAR_1->supported = VAR_3.supported_caps;
 VAR_1->advertising = VAR_3.advertised_caps;
 VAR_1->speed = VAR_3.speed;
 VAR_1->duplex = VAR_3.duplex;
 VAR_1->port = VAR_0->pci_func & 0x1;
 VAR_1->autoneg = VAR_3.autoneg;

 return (0);
}
