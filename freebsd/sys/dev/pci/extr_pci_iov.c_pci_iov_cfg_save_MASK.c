
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcicfg_iov {void* iov_ctl; void* iov_page_size; } ;
struct TYPE_2__ {struct pcicfg_iov* iov; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 void* FUNC_0 (struct pci_devinfo*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(device_t VAR_2, struct pci_devinfo *VAR_3)
{
 struct pcicfg_iov *VAR_4;

 VAR_4 = VAR_3->cfg.iov;

 VAR_4->iov_page_size = FUNC_0(VAR_3, VAR_1, 4);
 VAR_4->iov_ctl = FUNC_0(VAR_3, VAR_0, 2);
}
