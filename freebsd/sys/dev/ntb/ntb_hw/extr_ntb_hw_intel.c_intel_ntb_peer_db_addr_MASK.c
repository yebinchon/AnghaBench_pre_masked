
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ uint64_t ;
struct ntb_softc {scalar_t__ b2b_mw_idx; TYPE_2__* reg; struct ntb_pci_bar_info* bar_info; TYPE_1__* peer_reg; } ;
struct ntb_pci_bar_info {scalar_t__ pci_bus_tag; scalar_t__ pci_bus_handle; } ;
typedef int device_t ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_4__ {int db_size; } ;
struct TYPE_3__ {scalar_t__ db_bell; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ntb_softc*,int ) ;
 int FUNC_1 (int,char*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ntb_softc* FUNC_2 (int ) ;
 size_t FUNC_3 (struct ntb_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5, bus_addr_t *VAR_6, vm_size_t *VAR_7)
{
 struct ntb_softc *VAR_8 = FUNC_2(VAR_5);
 struct ntb_pci_bar_info *VAR_9;
 uint64_t VAR_10;

 FUNC_1((VAR_6 != ((void*)0) && VAR_7 != ((void*)0)), ("must be non-NULL"));

 if (!FUNC_0(VAR_8, VAR_2)) {
  VAR_9 = &VAR_8->bar_info[VAR_1];
  VAR_10 = VAR_8->peer_reg->db_bell;
 } else {
  FUNC_1(VAR_8->b2b_mw_idx != VAR_0,
      ("invalid b2b idx"));

  VAR_9 = &VAR_8->bar_info[FUNC_3(VAR_8, VAR_8->b2b_mw_idx)];
  VAR_10 = VAR_4;
 }
 FUNC_1(VAR_9->pci_bus_tag != VAR_3, ("uh oh"));


 *VAR_6 = ((uint64_t)VAR_9->pci_bus_handle + VAR_10);
 *VAR_7 = VAR_8->reg->db_size;
 return (0);
}
