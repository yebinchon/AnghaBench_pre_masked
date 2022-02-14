
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct pcicfg_msix {int msix_table_len; int msix_table_offset; int msix_table_res; } ;
struct TYPE_2__ {struct pcicfg_msix msix; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,int) ;
 struct pci_devinfo* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, u_int VAR_1, uint64_t VAR_2, uint32_t VAR_3)
{
 struct pci_devinfo *VAR_4 = FUNC_2(VAR_0);
 struct pcicfg_msix *VAR_5 = &VAR_4->cfg.msix;
 uint32_t VAR_6;

 FUNC_0(VAR_5->msix_table_len > VAR_1, ("bogus index"));
 VAR_6 = VAR_5->msix_table_offset + VAR_1 * 16;
 FUNC_1(VAR_5->msix_table_res, VAR_6, VAR_2 & 0xffffffff);
 FUNC_1(VAR_5->msix_table_res, VAR_6 + 4, VAR_2 >> 32);
 FUNC_1(VAR_5->msix_table_res, VAR_6 + 8, VAR_3);
}
