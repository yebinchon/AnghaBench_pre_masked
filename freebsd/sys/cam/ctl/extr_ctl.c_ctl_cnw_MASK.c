
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
struct scsi_compare_and_write {int byte2; int length; int addr; } ;
struct TYPE_7__ {int * ctl_private; int flags; } ;
struct ctl_scsiio {int* cdb; int kern_total_len; TYPE_3__ io_hdr; int io_cont; scalar_t__ kern_rel_offset; } ;
struct TYPE_5__ {int flags1; } ;
struct ctl_lun {TYPE_4__* backend; TYPE_2__* be_lun; TYPE_1__ MODE_CACHING; } ;
struct ctl_lba_len_flags {int len; int flags; scalar_t__ lba; } ;
struct TYPE_8__ {int (* data_submit ) (union ctl_io*) ;} ;
struct TYPE_6__ {scalar_t__ maxlba; int blocksize; } ;



 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (struct ctl_scsiio*) ;
 int FUNC_5 (struct ctl_scsiio*,int ) ;
 int FUNC_6 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (union ctl_io*) ;

int
FUNC_9(struct ctl_scsiio *VAR_10)
{
 struct ctl_lun *VAR_11 = FUNC_1(VAR_10);
 struct ctl_lba_len_flags *VAR_12;
 uint64_t VAR_13;
 uint32_t VAR_14;
 int VAR_15, VAR_16;

 FUNC_0(("ctl_cnw: command: %#x\n", VAR_10->cdb[0]));

 VAR_15 = 0;
 switch (VAR_10->cdb[0]) {
 case 128: {
  struct scsi_compare_and_write *VAR_17;

  VAR_17 = (struct scsi_compare_and_write *)VAR_10->cdb;
  if (VAR_17->byte2 & VAR_8)
   VAR_15 |= VAR_3;
  if (VAR_17->byte2 & VAR_7)
   VAR_15 |= VAR_2;
  VAR_13 = FUNC_7(VAR_17->addr);
  VAR_14 = VAR_17->length;
  break;
 }
 default:




  FUNC_4(VAR_10);
  FUNC_3((union ctl_io *)VAR_10);

  return (VAR_5);
  break;
 }







 if (((VAR_13 + VAR_14) > (VAR_11->be_lun->maxlba + 1))
  || ((VAR_13 + VAR_14) < VAR_13)) {
  FUNC_5(VAR_10,
      FUNC_2(VAR_13, VAR_11->be_lun->maxlba + 1));
  FUNC_3((union ctl_io *)VAR_10);
  return (VAR_5);
 }




 if (VAR_14 == 0) {
  FUNC_6(VAR_10);
  FUNC_3((union ctl_io *)VAR_10);
  return (VAR_5);
 }


 if ((VAR_11->MODE_CACHING.flags1 & VAR_6) == 0)
  VAR_15 |= VAR_3;

 VAR_10->kern_total_len = 2 * VAR_14 * VAR_11->be_lun->blocksize;
 VAR_10->kern_rel_offset = 0;






 VAR_10->io_hdr.flags |= VAR_0;
 VAR_10->io_cont = VAR_9;

 VAR_12 = (struct ctl_lba_len_flags *)
     &VAR_10->io_hdr.ctl_private[VAR_4];
 VAR_12->lba = VAR_13;
 VAR_12->len = VAR_14;
 VAR_12->flags = VAR_1 | VAR_15;

 FUNC_0(("ctl_cnw: calling data_submit()\n"));
 VAR_16 = VAR_11->backend->data_submit((union ctl_io *)VAR_10);
 return (VAR_16);
}
