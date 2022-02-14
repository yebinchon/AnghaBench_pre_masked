
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; void* io_type; } ;
struct ctl_scsiio {int cdb_len; void** ext_data_ptr; int sense_len; scalar_t__ ext_data_filled; scalar_t__ ext_sg_entries; void* ext_data_len; int tag_type; scalar_t__ cdb; } ;
union ctl_io {TYPE_1__ io_hdr; struct ctl_scsiio scsiio; } ;
typedef void* uint8_t ;
struct scsi_request_sense {void* length; void* control; void* byte2; int opcode; } ;
typedef void* int32_t ;
typedef int ctl_tag_type ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union ctl_io*) ;

void
FUNC_1(union ctl_io *VAR_4, uint8_t *VAR_5,
         int32_t VAR_6, uint8_t VAR_7, ctl_tag_type VAR_8,
         uint8_t VAR_9)
{
 struct ctl_scsiio *VAR_10;
 struct scsi_request_sense *VAR_11;

 FUNC_0(VAR_4);

 VAR_4->io_hdr.io_type = VAR_1;
 VAR_10 = &VAR_4->scsiio;
 VAR_11 = (struct scsi_request_sense *)VAR_10->cdb;

 VAR_11->opcode = VAR_2;
 VAR_11->byte2 = VAR_7;
 VAR_11->control = VAR_9;
 VAR_11->length = VAR_6;
 VAR_4->io_hdr.io_type = VAR_1;
 VAR_4->io_hdr.flags = VAR_0;
 VAR_10->tag_type = VAR_8;
 VAR_10->cdb_len = sizeof(*VAR_11);
 VAR_10->ext_data_ptr = VAR_5;
 VAR_10->ext_data_len = VAR_6;
 VAR_10->ext_sg_entries = 0;
 VAR_10->ext_data_filled = 0;
 VAR_10->sense_len = VAR_3;
}
