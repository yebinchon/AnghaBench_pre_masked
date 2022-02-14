
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
typedef int uint64_t ;
typedef int uint32_t ;
struct scsi_read_capacity_16 {int control; int alloc_len; int addr; int reladr; int service_action; int opcode; } ;
typedef int ctl_tag_type ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(union ctl_io *VAR_7, uint8_t *VAR_8,
     uint32_t VAR_9, uint64_t VAR_10, int VAR_11,
     int VAR_12, ctl_tag_type VAR_13, uint8_t VAR_14)
{
 struct scsi_read_capacity_16 *VAR_15;

 FUNC_0(VAR_7);

 VAR_7->io_hdr.io_type = VAR_1;
 VAR_15 = (struct scsi_read_capacity_16 *)VAR_7->scsiio.cdb;

 VAR_15->opcode = VAR_2;
 VAR_15->service_action = VAR_5;
 if (VAR_11)
  VAR_15->reladr |= VAR_4;
 if (VAR_12)
  VAR_15->reladr |= VAR_3;
 FUNC_1(VAR_10, VAR_15->addr);
 FUNC_2(VAR_9, VAR_15->alloc_len);
 VAR_15->control = VAR_14;

 VAR_7->io_hdr.io_type = VAR_1;
 VAR_7->io_hdr.flags = VAR_0;
 VAR_7->scsiio.tag_type = VAR_13;
 VAR_7->scsiio.ext_data_ptr = VAR_8;
 VAR_7->scsiio.ext_data_len = VAR_9;
 VAR_7->scsiio.ext_sg_entries = 0;
 VAR_7->scsiio.ext_data_filled = 0;
 VAR_7->scsiio.sense_len = VAR_6;
}
