
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int intline; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef TYPE_1__ pcicfgregs ;
typedef int device_t ;


 int FUNC_0 (char*,int,int) ;
 struct pci_devinfo* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, int VAR_2)
{
 struct pci_devinfo *VAR_3 = FUNC_1(VAR_1);
 pcicfgregs *VAR_4 = &VAR_3->cfg;

 FUNC_0("route intr (pin=%d, line=%d)\n", VAR_2, VAR_4->intline);

 return VAR_4->intline;
}
