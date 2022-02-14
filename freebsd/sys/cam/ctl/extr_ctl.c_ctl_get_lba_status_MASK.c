
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct scsi_get_lba_status_data {TYPE_2__* descr; int length; } ;
struct scsi_get_lba_status {int alloc_len; int addr; } ;
struct TYPE_7__ {int * ctl_private; int flags; } ;
struct ctl_scsiio {TYPE_3__ io_hdr; int be_move_done; int kern_data_len; int kern_total_len; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; scalar_t__ kern_data_ptr; scalar_t__ cdb; } ;
struct ctl_lun {TYPE_4__* backend; TYPE_1__* be_lun; } ;
struct ctl_lba_len_flags {int len; scalar_t__ flags; scalar_t__ lba; } ;
struct TYPE_8__ {int (* config_read ) (union ctl_io*) ;} ;
struct TYPE_6__ {scalar_t__ status; int length; int addr; } ;
struct TYPE_5__ {scalar_t__ maxlba; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (struct ctl_scsiio*,scalar_t__) ;
 int FUNC_5 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_6 (int,int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (union ctl_io*) ;

int
FUNC_13(struct ctl_scsiio *VAR_8)
{
 struct ctl_lun *VAR_9 = FUNC_1(VAR_8);
 struct scsi_get_lba_status *VAR_10;
 struct scsi_get_lba_status_data *VAR_11;
 struct ctl_lba_len_flags *VAR_12;
 uint64_t VAR_13;
 uint32_t VAR_14, VAR_15;
 int VAR_16;

 FUNC_0(("ctl_get_lba_status\n"));

 VAR_10 = (struct scsi_get_lba_status *)VAR_8->cdb;
 VAR_13 = FUNC_9(VAR_10->addr);
 VAR_14 = FUNC_8(VAR_10->alloc_len);

 if (VAR_13 > VAR_9->be_lun->maxlba) {
  FUNC_4(VAR_8, VAR_13);
  FUNC_3((union ctl_io *)VAR_8);
  return (VAR_2);
 }

 VAR_15 = sizeof(*VAR_11) + sizeof(VAR_11->descr[0]);
 VAR_8->kern_data_ptr = FUNC_6(VAR_15, VAR_3, VAR_4 | VAR_5);
 VAR_11 = (struct scsi_get_lba_status_data *)VAR_8->kern_data_ptr;
 VAR_8->kern_rel_offset = 0;
 VAR_8->kern_sg_entries = 0;
 VAR_8->kern_data_len = FUNC_7(VAR_15, VAR_14);
 VAR_8->kern_total_len = VAR_8->kern_data_len;


 FUNC_11(4 + sizeof(VAR_11->descr[0]), VAR_11->length);
 FUNC_10(VAR_13, VAR_11->descr[0].addr);
 FUNC_11(FUNC_2(VAR_6, VAR_9->be_lun->maxlba + 1 - VAR_13),
     VAR_11->descr[0].length);
 VAR_11->descr[0].status = 0;

 FUNC_5(VAR_8);
 VAR_8->io_hdr.flags |= VAR_0;
 VAR_8->be_move_done = VAR_7;

 VAR_12 = (struct ctl_lba_len_flags *)&VAR_8->io_hdr.ctl_private[VAR_1];
 VAR_12->lba = VAR_13;
 VAR_12->len = VAR_15;
 VAR_12->flags = 0;
 VAR_16 = VAR_9->backend->config_read((union ctl_io *)VAR_8);
 return (VAR_16);
}
