
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;
struct ata_pass_16 {int protocol; int flags; int features_ext; int features; int sector_count_ext; int sector_count; int lba_low; int lba_mid; int lba_high; int device; int lba_low_ext; int lba_mid_ext; int lba_high_ext; int command; int control; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int,int*,int,int,int,int ) ;

void
FUNC_1(struct ccb_scsiio *VAR_3, u_int32_t VAR_4,
   void (*VAR_5)(struct cam_periph *, union ccb *),
   u_int32_t VAR_6, u_int8_t VAR_7,
   u_int8_t VAR_8, u_int8_t VAR_9, u_int16_t VAR_10,
   u_int16_t VAR_11, uint64_t VAR_12, u_int8_t VAR_13,
   u_int8_t VAR_14, u_int8_t *VAR_15, u_int16_t VAR_16,
   u_int8_t VAR_17, u_int32_t VAR_18)
{
 struct ata_pass_16 *VAR_19;

 VAR_19 = (struct ata_pass_16 *)&VAR_3->cdb_io.cdb_bytes;
 VAR_19->opcode = VAR_2;
 VAR_19->protocol = VAR_8;
 VAR_19->flags = VAR_9;
 VAR_19->features_ext = VAR_10 >> 8;
 VAR_19->features = VAR_10;
 VAR_19->sector_count_ext = VAR_11 >> 8;
 VAR_19->sector_count = VAR_11;
 VAR_19->lba_low = VAR_12;
 VAR_19->lba_mid = VAR_12 >> 8;
 VAR_19->lba_high = VAR_12 >> 16;
 VAR_19->device = VAR_1;
 if (VAR_8 & VAR_0) {
  VAR_19->lba_low_ext = VAR_12 >> 24;
  VAR_19->lba_mid_ext = VAR_12 >> 32;
  VAR_19->lba_high_ext = VAR_12 >> 40;
 } else
  VAR_19->device |= (VAR_12 >> 24) & 0x0f;
 VAR_19->command = VAR_13;
 VAR_19->control = VAR_14;

 FUNC_0(VAR_3,
        VAR_4,
        VAR_5,
        VAR_6,
        VAR_7,
        VAR_15,
        VAR_16,
        VAR_17,
        sizeof(*VAR_19),
        VAR_18);
}
