
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int flags; int command; int features; int lba_low; int lba_mid; int lba_high; int device; int lba_low_exp; int lba_mid_exp; int lba_high_exp; int features_exp; int sector_count; int sector_count_exp; int control; } ;
struct TYPE_12__ {int ata_flags; int aux; TYPE_5__ cmd; } ;
struct TYPE_9__ {int cdb_bytes; int cdb_ptr; } ;
struct TYPE_10__ {int dxfer_len; int cdb_len; TYPE_3__ cdb_io; } ;
struct TYPE_8__ {int target_id; scalar_t__ func_code; int flags; } ;
union ccb {TYPE_6__ ataio; TYPE_4__ csio; TYPE_2__ ccb_h; } ;
typedef int u_int8_t ;
struct ahci_cmd_tab {int* cfis; int* acmd; } ;
struct ahci_channel {TYPE_1__* curr; } ;
struct TYPE_7__ {scalar_t__ mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static int
FUNC_2(struct ahci_channel *VAR_12, struct ahci_cmd_tab *VAR_13, union ccb *VAR_14, int VAR_15)
{
 u_int8_t *VAR_16 = &VAR_13->cfis[0];

 FUNC_1(VAR_16, 20);
 VAR_16[0] = 0x27;
 VAR_16[1] = (VAR_14->ccb_h.target_id & 0x0f);
 if (VAR_14->ccb_h.func_code == VAR_11) {
  VAR_16[1] |= 0x80;
  VAR_16[2] = VAR_5;
  if ((VAR_14->ccb_h.flags & VAR_9) != VAR_10 &&
      VAR_12->curr[VAR_14->ccb_h.target_id].mode >= VAR_1)
   VAR_16[3] = VAR_4;
  else {
   VAR_16[5] = VAR_14->csio.dxfer_len;
          VAR_16[6] = VAR_14->csio.dxfer_len >> 8;
  }
  VAR_16[7] = VAR_2;
  VAR_16[15] = VAR_0;
  FUNC_0((VAR_14->ccb_h.flags & VAR_8) ?
      VAR_14->csio.cdb_io.cdb_ptr : VAR_14->csio.cdb_io.cdb_bytes,
      VAR_13->acmd, VAR_14->csio.cdb_len);
  FUNC_1(VAR_13->acmd + VAR_14->csio.cdb_len, 32 - VAR_14->csio.cdb_len);
 } else if ((VAR_14->ataio.cmd.flags & VAR_6) == 0) {
  VAR_16[1] |= 0x80;
  VAR_16[2] = VAR_14->ataio.cmd.command;
  VAR_16[3] = VAR_14->ataio.cmd.features;
  VAR_16[4] = VAR_14->ataio.cmd.lba_low;
  VAR_16[5] = VAR_14->ataio.cmd.lba_mid;
  VAR_16[6] = VAR_14->ataio.cmd.lba_high;
  VAR_16[7] = VAR_14->ataio.cmd.device;
  VAR_16[8] = VAR_14->ataio.cmd.lba_low_exp;
  VAR_16[9] = VAR_14->ataio.cmd.lba_mid_exp;
  VAR_16[10] = VAR_14->ataio.cmd.lba_high_exp;
  VAR_16[11] = VAR_14->ataio.cmd.features_exp;
  if (VAR_14->ataio.cmd.flags & VAR_7) {
   VAR_16[12] = VAR_15 << 3;
  } else {
   VAR_16[12] = VAR_14->ataio.cmd.sector_count;
  }
  VAR_16[13] = VAR_14->ataio.cmd.sector_count_exp;
  VAR_16[15] = VAR_0;
 } else {
  VAR_16[15] = VAR_14->ataio.cmd.control;
 }
 if (VAR_14->ataio.ata_flags & VAR_3) {
  VAR_16[16] = VAR_14->ataio.aux & 0xff;
  VAR_16[17] = (VAR_14->ataio.aux >> 8) & 0xff;
  VAR_16[18] = (VAR_14->ataio.aux >> 16) & 0xff;
  VAR_16[19] = (VAR_14->ataio.aux >> 24) & 0xff;
 }
 return (20);
}
