
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pcicfg_msix {scalar_t__ msix_table_offset; int msix_table_res; } ;
struct TYPE_3__ {struct pcicfg_msix msix; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
struct ntb_softc {TYPE_2__* msix_data; int device; } ;
struct TYPE_4__ {scalar_t__ nmd_data; scalar_t__ nmd_ofs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 struct pci_devinfo* FUNC_3 (int ) ;
 int FUNC_4 (int,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(struct ntb_softc *VAR_5)
{
 struct pci_devinfo *VAR_6;
 struct pcicfg_msix *VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_6 = FUNC_3(VAR_5->device);
 VAR_7 = &VAR_6->cfg.msix;

 FUNC_0(VAR_4 == FUNC_5(VAR_5->msix_data));

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_11 = VAR_7->msix_table_offset + VAR_10 * VAR_3;

  VAR_8 = FUNC_2(VAR_7->msix_table_res, VAR_11 +
      VAR_2);
  FUNC_4(2, "local MSIX addr(%u): 0x%x\n", VAR_10, VAR_8);

  FUNC_1((VAR_8 & VAR_0) == VAR_0,
      ("local MSIX addr 0x%x not in MSI base 0x%x", VAR_8,
       VAR_0));
  VAR_5->msix_data[VAR_10].nmd_ofs = VAR_8;

  VAR_9 = FUNC_2(VAR_7->msix_table_res, VAR_11 +
      VAR_1);
  FUNC_4(2, "local MSIX data(%u): 0x%x\n", VAR_10, VAR_9);

  VAR_5->msix_data[VAR_10].nmd_data = VAR_9;
 }
}
