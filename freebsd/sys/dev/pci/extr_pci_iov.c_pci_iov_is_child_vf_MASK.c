
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcicfg_iov {int dummy; } ;
struct TYPE_2__ {int flags; struct pcicfg_iov* iov; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 struct pci_devinfo* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct pcicfg_iov *VAR_1, device_t VAR_2)
{
 struct pci_devinfo *VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 if (!(VAR_3->cfg.flags & VAR_0))
  return (0);

 return (VAR_1 == VAR_3->cfg.iov);
}
