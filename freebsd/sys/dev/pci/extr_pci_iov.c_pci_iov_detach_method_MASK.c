
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcicfg_iov {scalar_t__ iov_num_vfs; int iov_flags; int iov_schema; int * iov_cdev; } ;
struct TYPE_2__ {struct pcicfg_iov* iov; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct pci_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (struct pcicfg_iov*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

int
FUNC_6(device_t VAR_4, device_t VAR_5)
{
 struct pci_devinfo *VAR_6;
 struct pcicfg_iov *VAR_7;

 FUNC_3(&VAR_1);
 VAR_6 = FUNC_1(VAR_5);
 VAR_7 = VAR_6->cfg.iov;

 if (VAR_7 == ((void*)0)) {
  FUNC_4(&VAR_1);
  return (0);
 }

 if (VAR_7->iov_num_vfs != 0 || VAR_7->iov_flags & VAR_2) {
  FUNC_4(&VAR_1);
  return (VAR_0);
 }

 VAR_6->cfg.iov = ((void*)0);

 if (VAR_7->iov_cdev) {
  FUNC_0(VAR_7->iov_cdev);
  VAR_7->iov_cdev = ((void*)0);
 }
 FUNC_5(VAR_7->iov_schema);

 FUNC_2(VAR_7, VAR_3);
 FUNC_4(&VAR_1);

 return (0);
}
