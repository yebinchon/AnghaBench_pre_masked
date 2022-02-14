
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcicfg_iov {int iov_ctl; int iov_num_vfs; int iov_page_size; } ;
struct TYPE_2__ {struct pcicfg_iov* iov; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int FUNC_0 (struct pci_devinfo*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_1(device_t VAR_3, struct pci_devinfo *VAR_4)
{
 struct pcicfg_iov *VAR_5;

 VAR_5 = VAR_4->cfg.iov;

 FUNC_0(VAR_4, VAR_2, VAR_5->iov_page_size, 4);
 FUNC_0(VAR_4, VAR_1, VAR_5->iov_num_vfs, 2);
 FUNC_0(VAR_4, VAR_0, VAR_5->iov_ctl, 2);
}
