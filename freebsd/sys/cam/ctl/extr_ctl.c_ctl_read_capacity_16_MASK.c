
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct scsi_read_capacity_data_long {int prot_lbppbe; int* lalba_lbp; int length; int addr; } ;
struct scsi_read_capacity_16 {int reladr; int addr; int alloc_len; } ;
struct TYPE_4__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_2__ io_hdr; int kern_data_len; int kern_total_len; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; scalar_t__ kern_data_ptr; scalar_t__ cdb; } ;
struct ctl_lun {TYPE_1__* be_lun; } ;
struct TYPE_3__ {int pblockexp; int pblockoff; int flags; int blocksize; int maxlba; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (union ctl_io*) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (struct ctl_scsiio*,int,int,int,int ,int ) ;
 int FUNC_5 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_6 (int,int ,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int,int*) ;
 int FUNC_12 (int ,int ) ;

int
FUNC_13(struct ctl_scsiio *VAR_12)
{
 struct ctl_lun *VAR_13 = FUNC_1(VAR_12);
 struct scsi_read_capacity_16 *VAR_14;
 struct scsi_read_capacity_data_long *VAR_15;
 uint64_t VAR_16;
 uint32_t VAR_17;

 FUNC_0(("ctl_read_capacity_16\n"));

 VAR_14 = (struct scsi_read_capacity_16 *)VAR_12->cdb;

 VAR_17 = FUNC_8(VAR_14->alloc_len);
 VAR_16 = FUNC_9(VAR_14->addr);

 if ((VAR_14->reladr & VAR_10)
  && (VAR_16 != 0)) {
  FUNC_4( VAR_12,
                        1,
                      1,
                    2,
                        0,
                  0);
  FUNC_3((union ctl_io *)VAR_12);
  return (VAR_2);
 }

 VAR_12->kern_data_ptr = FUNC_6(sizeof(*VAR_15), VAR_3, VAR_4 | VAR_5);
 VAR_15 = (struct scsi_read_capacity_data_long *)VAR_12->kern_data_ptr;
 VAR_12->kern_rel_offset = 0;
 VAR_12->kern_sg_entries = 0;
 VAR_12->kern_data_len = FUNC_7(sizeof(*VAR_15), VAR_17);
 VAR_12->kern_total_len = VAR_12->kern_data_len;

 FUNC_10(VAR_13->be_lun->maxlba, VAR_15->addr);

 FUNC_12(VAR_13->be_lun->blocksize, VAR_15->length);
 VAR_15->prot_lbppbe = VAR_13->be_lun->pblockexp & VAR_8;
 FUNC_11(VAR_13->be_lun->pblockoff & VAR_6, VAR_15->lalba_lbp);
 if (VAR_13->be_lun->flags & VAR_1)
  VAR_15->lalba_lbp[0] |= VAR_7 | VAR_9;

 FUNC_5(VAR_12);
 VAR_12->io_hdr.flags |= VAR_0;
 VAR_12->be_move_done = VAR_11;
 FUNC_2((union ctl_io *)VAR_12);
 return (VAR_2);
}
