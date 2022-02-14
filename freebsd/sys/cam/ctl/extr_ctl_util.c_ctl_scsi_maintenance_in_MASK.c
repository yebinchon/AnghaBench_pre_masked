
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void** ext_data_ptr; int sense_len; scalar_t__ ext_data_filled; scalar_t__ ext_sg_entries; int ext_data_len; int tag_type; scalar_t__ cdb; } ;
struct TYPE_3__ {int flags; int io_type; } ;
union ctl_io {TYPE_2__ scsiio; TYPE_1__ io_hdr; } ;
typedef void* uint8_t ;
typedef int uint32_t ;
struct scsi_maintenance_in {void* control; int length; void* byte2; int opcode; } ;
typedef int ctl_tag_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(union ctl_io *VAR_4, uint8_t *VAR_5, uint32_t VAR_6,
   uint8_t VAR_7, ctl_tag_type VAR_8, uint8_t VAR_9)
{
 struct scsi_maintenance_in *VAR_10;

 FUNC_0(VAR_4);

 VAR_10 = (struct scsi_maintenance_in *)VAR_4->scsiio.cdb;
 VAR_10->opcode = VAR_2;
 VAR_10->byte2 = VAR_7;
 FUNC_1(VAR_6, VAR_10->length);
 VAR_10->control = VAR_9;

 VAR_4->io_hdr.io_type = VAR_1;
 VAR_4->io_hdr.flags = VAR_0;
 VAR_4->scsiio.tag_type = VAR_8;
 VAR_4->scsiio.ext_data_ptr = VAR_5;
 VAR_4->scsiio.ext_data_len = VAR_6;
 VAR_4->scsiio.ext_sg_entries = 0;
 VAR_4->scsiio.ext_data_filled = 0;
 VAR_4->scsiio.sense_len = VAR_3;
}
