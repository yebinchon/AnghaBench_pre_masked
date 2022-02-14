
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct pcicfg_msix {int msix_table_len; int msix_table_res; scalar_t__ msix_table_offset; } ;
struct TYPE_2__ {struct pcicfg_msix msix; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 struct pci_devinfo* FUNC_3 (int ) ;

void
FUNC_4(device_t VAR_1, u_int VAR_2)
{
 struct pci_devinfo *VAR_3 = FUNC_3(VAR_1);
 struct pcicfg_msix *VAR_4 = &VAR_3->cfg.msix;
 uint32_t VAR_5, VAR_6;

 FUNC_0(VAR_4->msix_table_len > VAR_2, ("bogus index"));
 VAR_5 = VAR_4->msix_table_offset + VAR_2 * 16 + 12;
 VAR_6 = FUNC_1(VAR_4->msix_table_res, VAR_5);
 VAR_6 &= ~VAR_0;





 FUNC_2(VAR_4->msix_table_res, VAR_5, VAR_6);
}
