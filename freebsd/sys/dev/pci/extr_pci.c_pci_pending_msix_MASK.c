
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct pcicfg_msix {int msix_table_len; int msix_pba_offset; int msix_pba_res; } ;
struct TYPE_2__ {struct pcicfg_msix msix; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int) ;
 struct pci_devinfo* FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_0, u_int VAR_1)
{
 struct pci_devinfo *VAR_2 = FUNC_2(VAR_0);
 struct pcicfg_msix *VAR_3 = &VAR_2->cfg.msix;
 uint32_t VAR_4, VAR_5;

 FUNC_0(VAR_3->msix_table_len > VAR_1, ("bogus index"));
 VAR_4 = VAR_3->msix_pba_offset + (VAR_1 / 32) * 4;
 VAR_5 = 1 << VAR_1 % 32;
 return (FUNC_1(VAR_3->msix_pba_res, VAR_4) & VAR_5);
}
