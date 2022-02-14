
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_pci_softc {int parent; } ;
struct bhnd_board_info {scalar_t__ board_vendor; int board_devid; int board_type; } ;
typedef int device_t ;






 scalar_t__ VAR_0 ;
 struct bhndb_pci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, device_t VAR_2,
    struct bhnd_board_info *VAR_3)
{
 struct bhndb_pci_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (FUNC_3(VAR_4->parent) == VAR_0) {
  switch (VAR_3->board_type) {
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_3->board_type = 0;
   break;
  default:
   break;
  }
 }



 if (VAR_3->board_vendor == 0)
  VAR_3->board_vendor = FUNC_3(VAR_4->parent);

 if (VAR_3->board_type == 0)
  VAR_3->board_type = FUNC_2(VAR_4->parent);

 if (VAR_3->board_devid == 0)
  VAR_3->board_devid = FUNC_1(VAR_4->parent);

 return (0);
}
