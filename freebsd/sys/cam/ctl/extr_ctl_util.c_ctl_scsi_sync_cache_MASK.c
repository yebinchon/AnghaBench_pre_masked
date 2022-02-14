
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sense_len; scalar_t__ ext_data_filled; scalar_t__ ext_sg_entries; scalar_t__ ext_data_len; int * ext_data_ptr; int tag_type; scalar_t__ cdb; } ;
struct TYPE_3__ {int flags; int io_type; } ;
union ctl_io {TYPE_2__ scsiio; TYPE_1__ io_hdr; } ;
typedef void* uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct scsi_sync_cache_16 {void* control; int lb_count; int begin_lba; int byte2; int opcode; } ;
struct scsi_sync_cache {void* control; int lb_count; int begin_lba; int byte2; int opcode; } ;
typedef int ctl_tag_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;

void
FUNC_4(union ctl_io *VAR_7, int VAR_8, int VAR_9,
      int VAR_10, uint64_t VAR_11,
      uint32_t VAR_12, ctl_tag_type VAR_13,
      uint8_t VAR_14)
{
 FUNC_0(VAR_7);

 if ((VAR_10 < 16)
  && ((VAR_12 & 0xffff) == VAR_12)
  && ((VAR_11 & 0xffffffff) == VAR_11)) {
  struct scsi_sync_cache *VAR_15;

  VAR_15 = (struct scsi_sync_cache *)VAR_7->scsiio.cdb;

  VAR_15->opcode = VAR_5;
  if (VAR_9)
   VAR_15->byte2 |= VAR_3;

  if (VAR_8)
   VAR_15->byte2 |= VAR_2;

  FUNC_3(VAR_11, VAR_15->begin_lba);
  FUNC_2(VAR_12, VAR_15->lb_count);
  VAR_15->control = VAR_14;
 } else {
  struct scsi_sync_cache_16 *VAR_16;

  VAR_16 = (struct scsi_sync_cache_16 *)VAR_7->scsiio.cdb;

  VAR_16->opcode = VAR_6;
  if (VAR_9)
   VAR_16->byte2 |= VAR_3;

  if (VAR_8)
   VAR_16->byte2 |= VAR_2;

  FUNC_1(VAR_11, VAR_16->begin_lba);
  FUNC_3(VAR_12, VAR_16->lb_count);
  VAR_16->control = VAR_14;
 }
 VAR_7->io_hdr.io_type = VAR_1;
 VAR_7->io_hdr.flags = VAR_0;
 VAR_7->scsiio.tag_type = VAR_13;
 VAR_7->scsiio.ext_data_ptr = ((void*)0);
 VAR_7->scsiio.ext_data_len = 0;
 VAR_7->scsiio.ext_sg_entries = 0;
 VAR_7->scsiio.ext_data_filled = 0;
 VAR_7->scsiio.sense_len = VAR_4;
}
