
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sense_len; scalar_t__ ext_data_filled; scalar_t__ ext_sg_entries; scalar_t__ ext_data_len; int * ext_data_ptr; int tag_type; scalar_t__ cdb; } ;
struct TYPE_3__ {int flags; int io_type; } ;
union ctl_io {TYPE_2__ scsiio; TYPE_1__ io_hdr; } ;
typedef int uint8_t ;
struct scsi_start_stop_unit {int how; int control; int byte2; int opcode; } ;
typedef int ctl_tag_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (union ctl_io*) ;

void
FUNC_1(union ctl_io *VAR_7, int VAR_8, int VAR_9, int VAR_10,
    int VAR_11, ctl_tag_type VAR_12, uint8_t VAR_13)
{
 struct scsi_start_stop_unit *VAR_14;

 VAR_14 = (struct scsi_start_stop_unit *)VAR_7->scsiio.cdb;

 FUNC_0(VAR_7);

 VAR_14->opcode = VAR_6;
 if (VAR_10)
  VAR_14->byte2 |= VAR_3;
 VAR_14->how = VAR_11;
 if (VAR_9)
  VAR_14->how |= VAR_4;
 if (VAR_8)
  VAR_14->how |= VAR_5;
 VAR_14->control = VAR_13;
 VAR_7->io_hdr.io_type = VAR_1;
 VAR_7->io_hdr.flags = VAR_0;
 VAR_7->scsiio.tag_type = VAR_12;
 VAR_7->scsiio.ext_data_ptr = ((void*)0);
 VAR_7->scsiio.ext_data_len = 0;
 VAR_7->scsiio.ext_sg_entries = 0;
 VAR_7->scsiio.ext_data_filled = 0;
 VAR_7->scsiio.sense_len = VAR_2;
}
