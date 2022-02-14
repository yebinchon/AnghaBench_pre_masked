
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* cdb; } ;
struct TYPE_3__ {scalar_t__ io_type; } ;
union ctl_io {TYPE_2__ scsiio; TYPE_1__ io_hdr; } ;
typedef int uint64_t ;
struct scsi_write_verify_16 {int length; int addr; } ;
struct scsi_write_verify_12 {int length; int addr; } ;
struct scsi_write_verify_10 {int length; int addr; } ;
struct scsi_write_same_16 {int length; int addr; } ;
struct scsi_write_same_10 {int length; int addr; } ;
struct scsi_write_atomic_16 {int length; int addr; } ;
struct scsi_verify_16 {int length; int addr; } ;
struct scsi_verify_12 {int length; int addr; } ;
struct scsi_verify_10 {int length; int addr; } ;
struct scsi_rw_6 {int length; int addr; } ;
struct scsi_rw_16 {int length; int addr; } ;
struct scsi_rw_12 {int length; int addr; } ;
struct scsi_rw_10 {int length; int addr; } ;
struct scsi_get_lba_status {int addr; } ;
struct scsi_compare_and_write {int length; int addr; } ;



 scalar_t__ VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(union ctl_io *VAR_3, uint64_t *VAR_4, uint64_t *VAR_5)
{
 if (VAR_3->io_hdr.io_type != VAR_0)
  return (1);

 switch (VAR_3->scsiio.cdb[0]) {
 case 147: {
  struct scsi_compare_and_write *VAR_6;

  VAR_6 = (struct scsi_compare_and_write *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_3(VAR_6->addr);
  *VAR_5 = VAR_6->length;
  break;
 }
 case 143:
 case 134: {
  struct scsi_rw_6 *VAR_7;

  VAR_7 = (struct scsi_rw_6 *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_1(VAR_7->addr);

  *VAR_4 &= 0x1fffff;
  *VAR_5 = VAR_7->length;
  break;
 }
 case 146:
 case 137: {
  struct scsi_rw_10 *VAR_8;

  VAR_8 = (struct scsi_rw_10 *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_2(VAR_8->addr);
  *VAR_5 = FUNC_0(VAR_8->length);
  break;
 }
 case 130: {
  struct scsi_write_verify_10 *VAR_9;

  VAR_9 = (struct scsi_write_verify_10 *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_2(VAR_9->addr);
  *VAR_5 = FUNC_0(VAR_9->length);
  break;
 }
 case 145:
 case 136: {
  struct scsi_rw_12 *VAR_10;

  VAR_10 = (struct scsi_rw_12 *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_2(VAR_10->addr);
  *VAR_5 = FUNC_2(VAR_10->length);
  break;
 }
 case 129: {
  struct scsi_write_verify_12 *VAR_11;

  VAR_11 = (struct scsi_write_verify_12 *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_2(VAR_11->addr);
  *VAR_5 = FUNC_2(VAR_11->length);
  break;
 }
 case 144:
 case 135: {
  struct scsi_rw_16 *VAR_12;

  VAR_12 = (struct scsi_rw_16 *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_3(VAR_12->addr);
  *VAR_5 = FUNC_2(VAR_12->length);
  break;
 }
 case 133: {
  struct scsi_write_atomic_16 *VAR_13;

  VAR_13 = (struct scsi_write_atomic_16 *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_3(VAR_13->addr);
  *VAR_5 = FUNC_0(VAR_13->length);
  break;
 }
 case 128: {
  struct scsi_write_verify_16 *VAR_14;

  VAR_14 = (struct scsi_write_verify_16 *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_3(VAR_14->addr);
  *VAR_5 = FUNC_2(VAR_14->length);
  break;
 }
 case 132: {
  struct scsi_write_same_10 *VAR_15;

  VAR_15 = (struct scsi_write_same_10 *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_2(VAR_15->addr);
  *VAR_5 = FUNC_0(VAR_15->length);
  break;
 }
 case 131: {
  struct scsi_write_same_16 *VAR_16;

  VAR_16 = (struct scsi_write_same_16 *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_3(VAR_16->addr);
  *VAR_5 = FUNC_2(VAR_16->length);
  break;
 }
 case 140: {
  struct scsi_verify_10 *VAR_17;

  VAR_17 = (struct scsi_verify_10 *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_2(VAR_17->addr);
  *VAR_5 = FUNC_0(VAR_17->length);
  break;
 }
 case 139: {
  struct scsi_verify_12 *VAR_18;

  VAR_18 = (struct scsi_verify_12 *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_2(VAR_18->addr);
  *VAR_5 = FUNC_2(VAR_18->length);
  break;
 }
 case 138: {
  struct scsi_verify_16 *VAR_19;

  VAR_19 = (struct scsi_verify_16 *)VAR_3->scsiio.cdb;

  *VAR_4 = FUNC_3(VAR_19->addr);
  *VAR_5 = FUNC_2(VAR_19->length);
  break;
 }
 case 141: {
  *VAR_4 = 0;
  *VAR_5 = VAR_2;
  break;
 }
 case 142: {
  struct scsi_get_lba_status *VAR_20;

  VAR_20 = (struct scsi_get_lba_status *)VAR_3->scsiio.cdb;
  *VAR_4 = FUNC_3(VAR_20->addr);
  *VAR_5 = VAR_1;
  break;
 }
 default:
  return (1);
  break;
 }

 return (0);
}
