
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int flags; int command; int features; int lba_low; int lba_mid; int lba_high; int device; int lba_low_exp; int lba_mid_exp; int lba_high_exp; int features_exp; int sector_count; int sector_count_exp; } ;
struct TYPE_16__ {int ata_flags; int aux; TYPE_7__ cmd; } ;
struct TYPE_11__ {int cdb_bytes; int cdb_ptr; } ;
struct TYPE_14__ {int dxfer_len; int cdb_len; TYPE_3__ cdb_io; } ;
struct TYPE_10__ {int target_id; scalar_t__ func_code; int flags; } ;
union ccb {TYPE_8__ ataio; TYPE_6__ csio; TYPE_2__ ccb_h; } ;
typedef int u_int8_t ;
struct TYPE_12__ {int* ccb; } ;
struct TYPE_13__ {TYPE_4__ atapi; } ;
struct siis_cmd {int* fis; TYPE_5__ u; } ;
struct siis_channel {TYPE_1__* curr; } ;
typedef int device_t ;
struct TYPE_9__ {scalar_t__ mode; } ;


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
 int FUNC_0 (int ,int*,int ) ;
 int FUNC_1 (int*,int) ;
 struct siis_channel* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_12, struct siis_cmd *VAR_13, union ccb *VAR_14, int VAR_15)
{
 struct siis_channel *VAR_16 = FUNC_2(VAR_12);
 u_int8_t *VAR_17 = &VAR_13->fis[0];

 FUNC_1(VAR_17, 24);
 VAR_17[0] = 0x27;
 VAR_17[1] = (VAR_14->ccb_h.target_id & 0x0f);
 if (VAR_14->ccb_h.func_code == VAR_11) {
  VAR_17[1] |= 0x80;
  VAR_17[2] = VAR_5;
  if ((VAR_14->ccb_h.flags & VAR_9) != VAR_10 &&
      VAR_16->curr[VAR_14->ccb_h.target_id].mode >= VAR_1)
   VAR_17[3] = VAR_4;
  else {
   VAR_17[5] = VAR_14->csio.dxfer_len;
          VAR_17[6] = VAR_14->csio.dxfer_len >> 8;
  }
  VAR_17[7] = VAR_2;
  VAR_17[15] = VAR_0;
  FUNC_1(VAR_13->u.atapi.ccb, 16);
  FUNC_0((VAR_14->ccb_h.flags & VAR_8) ?
      VAR_14->csio.cdb_io.cdb_ptr : VAR_14->csio.cdb_io.cdb_bytes,
      VAR_13->u.atapi.ccb, VAR_14->csio.cdb_len);
 } else if ((VAR_14->ataio.cmd.flags & VAR_6) == 0) {
  VAR_17[1] |= 0x80;
  VAR_17[2] = VAR_14->ataio.cmd.command;
  VAR_17[3] = VAR_14->ataio.cmd.features;
  VAR_17[4] = VAR_14->ataio.cmd.lba_low;
  VAR_17[5] = VAR_14->ataio.cmd.lba_mid;
  VAR_17[6] = VAR_14->ataio.cmd.lba_high;
  VAR_17[7] = VAR_14->ataio.cmd.device;
  VAR_17[8] = VAR_14->ataio.cmd.lba_low_exp;
  VAR_17[9] = VAR_14->ataio.cmd.lba_mid_exp;
  VAR_17[10] = VAR_14->ataio.cmd.lba_high_exp;
  VAR_17[11] = VAR_14->ataio.cmd.features_exp;
  if (VAR_14->ataio.cmd.flags & VAR_7) {
   VAR_17[12] = VAR_15 << 3;
   VAR_17[13] = 0;
  } else {
   VAR_17[12] = VAR_14->ataio.cmd.sector_count;
   VAR_17[13] = VAR_14->ataio.cmd.sector_count_exp;
  }
  VAR_17[15] = VAR_0;
  if (VAR_14->ataio.ata_flags & VAR_3) {
   VAR_17[16] = VAR_14->ataio.aux & 0xff;
   VAR_17[17] = (VAR_14->ataio.aux >> 8) & 0xff;
   VAR_17[18] = (VAR_14->ataio.aux >> 16) & 0xff;
   VAR_17[19] = (VAR_14->ataio.aux >> 24) & 0xff;
  }
 } else {

 }
 return (20);
}
