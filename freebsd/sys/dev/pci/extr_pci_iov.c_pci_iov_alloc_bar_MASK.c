
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct pcicfg_iov {int iov_pos; int rman; TYPE_2__* iov_bar; int iov_num_vfs; } ;
struct TYPE_3__ {int dev; struct pcicfg_iov* iov; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int rman_res_t ;
typedef int pci_addr_t ;
typedef int device_t ;
struct TYPE_4__ {int bar_size; int bar_shift; struct resource* res; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct resource* FUNC_2 (int ,int ,int ,int*,int ,int ,int,int ,int ) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct pci_devinfo *VAR_3, int VAR_4, pci_addr_t VAR_5)
{
 struct resource *VAR_6;
 struct pcicfg_iov *VAR_7;
 device_t VAR_8, VAR_9;
 rman_res_t VAR_10, VAR_11;
 pci_addr_t VAR_12;
 int VAR_13;

 VAR_7 = VAR_3->cfg.iov;
 VAR_8 = VAR_3->cfg.dev;
 VAR_9 = FUNC_1(VAR_8);
 VAR_13 = VAR_7->iov_pos + FUNC_0(VAR_4);
 VAR_12 = 1 << VAR_5;

 VAR_6 = FUNC_2(VAR_9, VAR_8, VAR_2, &VAR_13, 0,
     ~0, 1, VAR_7->iov_num_vfs, VAR_1);

 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_7->iov_bar[VAR_4].res = VAR_6;
 VAR_7->iov_bar[VAR_4].bar_size = VAR_12;
 VAR_7->iov_bar[VAR_4].bar_shift = VAR_5;

 VAR_10 = FUNC_4(VAR_6);
 VAR_11 = FUNC_3(VAR_6);
 return (FUNC_5(&VAR_7->rman, VAR_10, VAR_11));
}
