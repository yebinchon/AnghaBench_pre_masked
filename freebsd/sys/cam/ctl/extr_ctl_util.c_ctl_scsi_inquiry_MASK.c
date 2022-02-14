
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; void* io_type; } ;
struct ctl_scsiio {int cdb_len; void** ext_data_ptr; int sense_len; scalar_t__ ext_data_filled; scalar_t__ ext_sg_entries; int ext_data_len; int tag_type; scalar_t__ cdb; } ;
union ctl_io {TYPE_1__ io_hdr; struct ctl_scsiio scsiio; } ;
typedef void* uint8_t ;
struct scsi_inquiry {int length; void* control; void* page_code; void* byte2; int opcode; } ;
typedef int int32_t ;
typedef int ctl_tag_type ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(union ctl_io *VAR_4, uint8_t *VAR_5, int32_t VAR_6,
   uint8_t VAR_7, uint8_t VAR_8, ctl_tag_type VAR_9,
   uint8_t VAR_10)
{
 struct ctl_scsiio *VAR_11;
 struct scsi_inquiry *VAR_12;

 FUNC_0(VAR_4);

 VAR_4->io_hdr.io_type = VAR_1;
 VAR_11 = &VAR_4->scsiio;
 VAR_12 = (struct scsi_inquiry *)VAR_11->cdb;

 VAR_12->opcode = VAR_2;
 VAR_12->byte2 = VAR_7;
 VAR_12->page_code = VAR_8;
 VAR_12->control = VAR_10;
 FUNC_1(VAR_6, VAR_12->length);
 VAR_4->io_hdr.io_type = VAR_1;
 VAR_4->io_hdr.flags = VAR_0;
 VAR_11->tag_type = VAR_9;
 VAR_11->cdb_len = sizeof(*VAR_12);
 VAR_11->ext_data_len = VAR_6;
 VAR_11->ext_data_ptr = VAR_5;
 VAR_11->ext_sg_entries = 0;
 VAR_11->ext_data_filled = 0;
 VAR_11->sense_len = VAR_3;
}
