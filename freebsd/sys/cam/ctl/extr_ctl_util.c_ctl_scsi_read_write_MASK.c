
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; void* io_type; } ;
struct ctl_scsiio {int cdb_len; scalar_t__* ext_data_ptr; int ext_data_len; int sense_len; scalar_t__ ext_data_filled; scalar_t__ ext_sg_entries; int tag_type; scalar_t__ cdb; } ;
union ctl_io {TYPE_1__ io_hdr; struct ctl_scsiio scsiio; } ;
typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct scsi_rw_6 {int length; scalar_t__ control; int addr; int opcode; } ;
struct scsi_rw_16 {scalar_t__ control; scalar_t__ reserved; int length; int addr; scalar_t__ byte2; int opcode; } ;
struct scsi_rw_12 {scalar_t__ control; scalar_t__ reserved; int length; int addr; scalar_t__ byte2; int opcode; } ;
struct scsi_rw_10 {scalar_t__ control; int length; scalar_t__ reserved; int addr; scalar_t__ byte2; int opcode; } ;
typedef int ctl_tag_type ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;

void
FUNC_5(union ctl_io *VAR_12, uint8_t *VAR_13, uint32_t VAR_14,
      int VAR_15, uint8_t VAR_16, int VAR_17,
      uint64_t VAR_18, uint32_t VAR_19, ctl_tag_type VAR_20,
      uint8_t VAR_21)
{
 struct ctl_scsiio *VAR_22;

 FUNC_0(VAR_12);

 VAR_12->io_hdr.io_type = VAR_2;
 VAR_22 = &VAR_12->scsiio;
 if ((VAR_17 < 10)
  && ((VAR_18 & 0x1fffff) == VAR_18)
  && ((VAR_19 & 0xff) == VAR_19)
  && (VAR_16 == 0)) {
  struct scsi_rw_6 *VAR_23;
  VAR_23 = (struct scsi_rw_6 *)VAR_22->cdb;

  VAR_23->opcode = (VAR_15) ? VAR_6 : VAR_11;
  FUNC_3(VAR_18, VAR_23->addr);
  VAR_23->length = VAR_19 & 0xff;
  VAR_23->control = VAR_21;

  VAR_22->cdb_len = sizeof(*VAR_23);

 } else if ((VAR_17 < 12)
  && ((VAR_19 & 0xffff) == VAR_19)
  && ((VAR_18 & 0xffffffff) == VAR_18)) {
  struct scsi_rw_10 *VAR_24;

  VAR_24 = (struct scsi_rw_10 *)VAR_22->cdb;

  VAR_24->opcode = (VAR_15) ? VAR_3 : VAR_8;
  VAR_24->byte2 = VAR_16;
  FUNC_4(VAR_18, VAR_24->addr);
  VAR_24->reserved = 0;
  FUNC_2(VAR_19, VAR_24->length);
  VAR_24->control = VAR_21;

  VAR_22->cdb_len = sizeof(*VAR_24);
 } else if ((VAR_17 < 16)
  && ((VAR_19 & 0xffffffff) == VAR_19)
  && ((VAR_18 & 0xffffffff) == VAR_18)) {
  struct scsi_rw_12 *VAR_25;

  VAR_25 = (struct scsi_rw_12 *)VAR_22->cdb;

  VAR_25->opcode = (VAR_15) ? VAR_4 : VAR_9;
  VAR_25->byte2 = VAR_16;
  FUNC_4(VAR_18, VAR_25->addr);
  FUNC_4(VAR_19, VAR_25->length);
  VAR_25->reserved = 0;
  VAR_25->control = VAR_21;

  VAR_22->cdb_len = sizeof(*VAR_25);
 } else {
  struct scsi_rw_16 *VAR_26;

  VAR_26 = (struct scsi_rw_16 *)VAR_22->cdb;

  VAR_26->opcode = (VAR_15) ? VAR_5 : VAR_10;
  VAR_26->byte2 = VAR_16;
  FUNC_1(VAR_18, VAR_26->addr);
  FUNC_4(VAR_19, VAR_26->length);
  VAR_26->reserved = 0;
  VAR_26->control = VAR_21;

  VAR_22->cdb_len = sizeof(*VAR_26);
 }

 VAR_12->io_hdr.io_type = VAR_2;
 if (VAR_15 != 0)
  VAR_12->io_hdr.flags = VAR_0;
 else
  VAR_12->io_hdr.flags = VAR_1;
 VAR_22->tag_type = VAR_20;
 VAR_22->ext_data_ptr = VAR_13;
 VAR_22->ext_data_len = VAR_14;
 VAR_22->ext_sg_entries = 0;
 VAR_22->ext_data_filled = 0;
 VAR_22->sense_len = VAR_7;
}
