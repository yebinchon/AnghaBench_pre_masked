
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct scsi_write_same_16 {int byte2; int length; int addr; } ;
struct scsi_write_same_10 {int byte2; int length; int addr; } ;
struct TYPE_5__ {int flags; int * ctl_private; } ;
struct ctl_scsiio {int* cdb; int kern_data_len; int kern_total_len; TYPE_2__ io_hdr; int be_move_done; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; int kern_data_ptr; int io_cont; } ;
struct ctl_lun {TYPE_3__* backend; TYPE_1__* be_lun; } ;
struct ctl_lba_len_flags {int len; int flags; scalar_t__ lba; } ;
struct TYPE_6__ {int (* config_write ) (union ctl_io*) ;} ;
struct TYPE_4__ {scalar_t__ maxlba; int blocksize; int options; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;


 int VAR_11 ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (union ctl_io*) ;
 int FUNC_5 (char const*,scalar_t__*) ;
 int FUNC_6 (struct ctl_scsiio*,int,int,int,int,int ) ;
 int FUNC_7 (struct ctl_scsiio*) ;
 int FUNC_8 (struct ctl_scsiio*,int ) ;
 int VAR_12 ;
 char* FUNC_9 (int ,char*,int *) ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (union ctl_io*) ;

int
FUNC_15(struct ctl_scsiio *VAR_13)
{
 struct ctl_lun *VAR_14 = FUNC_1(VAR_13);
 struct ctl_lba_len_flags *VAR_15;
 const char *VAR_16;
 uint64_t VAR_17, VAR_18;
 uint32_t VAR_19;
 int VAR_20, VAR_21;
 uint8_t VAR_22;

 FUNC_0(("ctl_write_same\n"));

 switch (VAR_13->cdb[0]) {
 case 129: {
  struct scsi_write_same_10 *VAR_23;

  VAR_23 = (struct scsi_write_same_10 *)VAR_13->cdb;

  VAR_17 = FUNC_12(VAR_23->addr);
  VAR_19 = FUNC_11(VAR_23->length);
  VAR_22 = VAR_23->byte2;
  break;
 }
 case 128: {
  struct scsi_write_same_16 *VAR_24;

  VAR_24 = (struct scsi_write_same_16 *)VAR_13->cdb;

  VAR_17 = FUNC_13(VAR_24->addr);
  VAR_19 = FUNC_12(VAR_24->length);
  VAR_22 = VAR_24->byte2;
  break;
 }
 default:




  FUNC_7(VAR_13);
  FUNC_4((union ctl_io *)VAR_13);

  return (VAR_3);
  break;
 }


 if ((VAR_22 & VAR_8) == 0 && (VAR_22 & VAR_6) != 0) {
  FUNC_6(VAR_13, 1,
                  1, 1, 1, 0);
  FUNC_4((union ctl_io *)VAR_13);
  return (VAR_3);
 }







 if (((VAR_17 + VAR_19) > (VAR_14->be_lun->maxlba + 1))
  || ((VAR_17 + VAR_19) < VAR_17)) {
  FUNC_8(VAR_13,
      FUNC_2(VAR_17, VAR_14->be_lun->maxlba + 1));
  FUNC_4((union ctl_io *)VAR_13);
  return (VAR_3);
 }


 if (VAR_19 == 0) {
  VAR_18 = VAR_10;
  VAR_16 = FUNC_9(VAR_14->be_lun->options,
      "write_same_max_lba", ((void*)0));
  if (VAR_16 != ((void*)0))
   FUNC_5(VAR_16, &VAR_18);
  if ((VAR_14->be_lun->maxlba + 1) - VAR_17 > VAR_18) {
   FUNC_6(VAR_13,
                     1, 1,
                 VAR_13->cdb[0] == 129 ? 7 : 10,
                     0, 0);
   FUNC_4((union ctl_io *)VAR_13);
   return (VAR_3);
  }
  if ((VAR_14->be_lun->maxlba + 1) - VAR_17 > VAR_9) {
   VAR_13->io_hdr.flags |= VAR_1;
   VAR_13->io_cont = VAR_12;
   VAR_19 = 1 << 31;
  } else
   VAR_19 = (VAR_14->be_lun->maxlba + 1) - VAR_17;
 }

 VAR_20 = VAR_14->be_lun->blocksize;





 if ((VAR_22 & VAR_7) == 0 &&
     (VAR_13->io_hdr.flags & VAR_0) == 0) {
  VAR_13->kern_data_ptr = FUNC_10(VAR_20, VAR_4, VAR_5);
  VAR_13->kern_data_len = VAR_20;
  VAR_13->kern_total_len = VAR_20;
  VAR_13->kern_rel_offset = 0;
  VAR_13->kern_sg_entries = 0;
  VAR_13->io_hdr.flags |= VAR_0;
  VAR_13->be_move_done = VAR_11;
  FUNC_3((union ctl_io *)VAR_13);

  return (VAR_3);
 }

 VAR_15 = (struct ctl_lba_len_flags *)&VAR_13->io_hdr.ctl_private[VAR_2];
 VAR_15->lba = VAR_17;
 VAR_15->len = VAR_19;
 VAR_15->flags = VAR_22;
 VAR_21 = VAR_14->backend->config_write((union ctl_io *)VAR_13);

 return (VAR_21);
}
