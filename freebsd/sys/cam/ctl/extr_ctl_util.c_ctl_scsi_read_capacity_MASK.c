
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sense_len; scalar_t__ ext_data_filled; scalar_t__ ext_sg_entries; int ext_data_len; int * ext_data_ptr; int tag_type; scalar_t__ cdb; } ;
struct TYPE_3__ {int flags; void* io_type; } ;
union ctl_io {TYPE_2__ scsiio; TYPE_1__ io_hdr; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_read_capacity {int control; int addr; int pmi; int byte2; int opcode; } ;
typedef int ctl_tag_type ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(union ctl_io *VAR_6, uint8_t *VAR_7, uint32_t VAR_8,
         uint32_t VAR_9, int VAR_10, int VAR_11,
         ctl_tag_type VAR_12, uint8_t VAR_13)
{
 struct scsi_read_capacity *VAR_14;

 FUNC_0(VAR_6);

 VAR_6->io_hdr.io_type = VAR_1;
 VAR_14 = (struct scsi_read_capacity *)VAR_6->scsiio.cdb;

 VAR_14->opcode = VAR_2;
 if (VAR_10)
  VAR_14->byte2 = VAR_4;
 if (VAR_11)
  VAR_14->pmi = VAR_3;
 FUNC_1(VAR_9, VAR_14->addr);
 VAR_14->control = VAR_13;
 VAR_6->io_hdr.io_type = VAR_1;
 VAR_6->io_hdr.flags = VAR_0;
 VAR_6->scsiio.tag_type = VAR_12;
 VAR_6->scsiio.ext_data_ptr = VAR_7;
 VAR_6->scsiio.ext_data_len = VAR_8;
 VAR_6->scsiio.ext_sg_entries = 0;
 VAR_6->scsiio.ext_data_filled = 0;
 VAR_6->scsiio.sense_len = VAR_5;
}
