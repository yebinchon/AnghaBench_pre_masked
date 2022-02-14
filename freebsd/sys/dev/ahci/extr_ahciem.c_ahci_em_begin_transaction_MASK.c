
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int status; } ;
struct TYPE_4__ {int flags; int control; } ;
struct ata_res {int lba_high; int lba_mid; } ;
struct TYPE_5__ {TYPE_1__ cmd; struct ata_res res; } ;
union ccb {TYPE_3__ ccb_h; TYPE_2__ ataio; } ;
struct ahci_enclosure {int capsem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,union ccb*) ;
 int FUNC_1 (struct ata_res*,int) ;
 struct ahci_enclosure* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_5, union ccb *VAR_6)
{
 struct ahci_enclosure *VAR_7;
 struct ata_res *VAR_8;

 VAR_7 = FUNC_2(VAR_5);
 VAR_8 = &VAR_6->ataio.res;
 FUNC_1(VAR_8, sizeof(*VAR_8));
 if ((VAR_6->ataio.cmd.flags & VAR_2) &&
     (VAR_6->ataio.cmd.control & VAR_1)) {
  VAR_8->lba_high = 0xc3;
  VAR_8->lba_mid = 0x3c;
  VAR_6->ccb_h.status = VAR_3;
  FUNC_4(VAR_6);
  return;
 }

 if (VAR_7->capsem & VAR_0) {
  FUNC_0(VAR_5, VAR_6);
  return;
 } else
  FUNC_3(VAR_5, "Unsupported enclosure interface\n");

 VAR_6->ccb_h.status = VAR_4;
 FUNC_4(VAR_6);
}
