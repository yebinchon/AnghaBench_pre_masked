
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct ntb_softc {TYPE_2__* peer_reg; TYPE_1__* peer_msix_data; struct ntb_pci_bar_info* peer_lapic_bar; } ;
struct ntb_pci_bar_info {int pci_bus_handle; int pci_bus_tag; } ;
typedef int device_t ;
struct TYPE_4__ {int db_bell; } ;
struct TYPE_3__ {int nmd_data; int nmd_ofs; } ;


 scalar_t__ FUNC_0 (struct ntb_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct ntb_softc*,int ,int) ;
 struct ntb_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int,int ,int) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_4, uint64_t VAR_5)
{
 struct ntb_softc *VAR_6 = FUNC_3(VAR_4);

 if (FUNC_0(VAR_6, VAR_0)) {
  struct ntb_pci_bar_info *VAR_7;
  unsigned VAR_8;

  VAR_7 = VAR_6->peer_lapic_bar;

  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   if ((VAR_5 & FUNC_4(VAR_4, VAR_8)) != 0)
    FUNC_1(VAR_7->pci_bus_tag,
        VAR_7->pci_bus_handle,
        VAR_6->peer_msix_data[VAR_8].nmd_ofs,
        VAR_6->peer_msix_data[VAR_8].nmd_data);
  }
  return;
 }

 if (FUNC_0(VAR_6, VAR_1)) {
  FUNC_5(2, VAR_3, VAR_5);
  return;
 }

 FUNC_2(VAR_6, VAR_6->peer_reg->db_bell, VAR_5);
}
