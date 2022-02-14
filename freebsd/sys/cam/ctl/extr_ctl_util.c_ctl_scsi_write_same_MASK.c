
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; void* io_type; } ;
struct ctl_scsiio {int cdb_len; void** ext_data_ptr; int sense_len; scalar_t__ ext_data_filled; scalar_t__ ext_sg_entries; int ext_data_len; int tag_type; scalar_t__ cdb; } ;
union ctl_io {TYPE_1__ io_hdr; struct ctl_scsiio scsiio; } ;
typedef void* uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct scsi_write_same_16 {void* control; scalar_t__ group; int length; int addr; void* byte2; int opcode; } ;
typedef int ctl_tag_type ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(union ctl_io *VAR_4, uint8_t *VAR_5, uint32_t VAR_6,
      uint8_t VAR_7, uint64_t VAR_8, uint32_t VAR_9,
      ctl_tag_type VAR_10, uint8_t VAR_11)
{
 struct ctl_scsiio *VAR_12;
 struct scsi_write_same_16 *VAR_13;

 FUNC_0(VAR_4);

 VAR_4->io_hdr.io_type = VAR_1;
 VAR_12 = &VAR_4->scsiio;
 VAR_12->cdb_len = sizeof(*VAR_13);
 VAR_13 = (struct scsi_write_same_16 *)VAR_12->cdb;
 VAR_13->opcode = VAR_3;
 VAR_13->byte2 = VAR_7;
 FUNC_1(VAR_8, VAR_13->addr);
 FUNC_2(VAR_9, VAR_13->length);
 VAR_13->group = 0;
 VAR_13->control = VAR_11;

 VAR_4->io_hdr.io_type = VAR_1;
 VAR_4->io_hdr.flags = VAR_0;
 VAR_12->tag_type = VAR_10;
 VAR_12->ext_data_ptr = VAR_5;
 VAR_12->ext_data_len = VAR_6;
 VAR_12->ext_sg_entries = 0;
 VAR_12->ext_data_filled = 0;
 VAR_12->sense_len = VAR_2;
}
