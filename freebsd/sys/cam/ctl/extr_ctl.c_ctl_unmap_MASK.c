
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
typedef scalar_t__ uint32_t ;
struct scsi_unmap_header {int desc_length; int length; } ;
struct scsi_unmap_desc {int length; int lba; } ;
struct scsi_unmap {int byte2; int length; } ;
struct TYPE_6__ {int flags; int * ctl_private; } ;
struct ctl_scsiio {int kern_data_len; int kern_total_len; int kern_data_resid; TYPE_3__ io_hdr; scalar_t__ kern_data_ptr; int be_move_done; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; scalar_t__ cdb; } ;
struct ctl_ptr_len_flags {int len; int flags; void* ptr; } ;
struct ctl_lun {TYPE_2__* backend; int lun_lock; TYPE_1__* be_lun; } ;
struct TYPE_5__ {int (* config_write ) (union ctl_io*) ;} ;
struct TYPE_4__ {scalar_t__ maxlba; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (union ctl_io*) ;
 int FUNC_5 (struct ctl_scsiio*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct ctl_scsiio*,int ) ;
 int FUNC_7 (struct ctl_scsiio*) ;
 int FUNC_8 (struct ctl_lun*,union ctl_io*,int ) ;
 int FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (union ctl_io*) ;

int
FUNC_17(struct ctl_scsiio *VAR_7)
{
 struct ctl_lun *VAR_8 = FUNC_1(VAR_7);
 struct scsi_unmap *VAR_9;
 struct ctl_ptr_len_flags *VAR_10;
 struct scsi_unmap_header *VAR_11;
 struct scsi_unmap_desc *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 uint64_t VAR_16;
 uint32_t VAR_17;
 int VAR_18, VAR_19;
 uint8_t VAR_20;

 FUNC_0(("ctl_unmap\n"));

 VAR_9 = (struct scsi_unmap *)VAR_7->cdb;
 VAR_18 = FUNC_13(VAR_9->length);
 VAR_20 = VAR_9->byte2;





 if ((VAR_7->io_hdr.flags & VAR_0) == 0) {
  VAR_7->kern_data_ptr = FUNC_10(VAR_18, VAR_4, VAR_5);
  VAR_7->kern_data_len = VAR_18;
  VAR_7->kern_total_len = VAR_18;
  VAR_7->kern_rel_offset = 0;
  VAR_7->kern_sg_entries = 0;
  VAR_7->io_hdr.flags |= VAR_0;
  VAR_7->be_move_done = VAR_6;
  FUNC_3((union ctl_io *)VAR_7);

  return (VAR_2);
 }

 VAR_18 = VAR_7->kern_total_len - VAR_7->kern_data_resid;
 VAR_11 = (struct scsi_unmap_header *)VAR_7->kern_data_ptr;
 if (VAR_18 < sizeof (*VAR_11) ||
     VAR_18 < (FUNC_13(VAR_11->length) + sizeof(VAR_11->length)) ||
     VAR_18 < (FUNC_13(VAR_11->desc_length) + sizeof (*VAR_11)) ||
     FUNC_13(VAR_11->desc_length) % sizeof(*VAR_12) != 0) {
  FUNC_5(VAR_7,
                        0,
                      0,
                    0,
                        0,
                  0);
  goto done;
 }
 VAR_18 = FUNC_13(VAR_11->desc_length);
 VAR_12 = (struct scsi_unmap_desc *)(VAR_11 + 1);
 VAR_13 = VAR_12 + VAR_18 / sizeof(*VAR_12);

 VAR_14 = VAR_12;
 for (VAR_15 = VAR_12; VAR_15 < VAR_13; VAR_15++) {
  VAR_16 = FUNC_15(VAR_15->lba);
  VAR_17 = FUNC_14(VAR_15->length);
  if (((VAR_16 + VAR_17) > (VAR_8->be_lun->maxlba + 1))
   || ((VAR_16 + VAR_17) < VAR_16)) {
   FUNC_6(VAR_7,
       FUNC_2(VAR_16, VAR_8->be_lun->maxlba + 1));
   FUNC_4((union ctl_io *)VAR_7);
   return (VAR_2);
  }
  if (VAR_17 != 0)
   VAR_14 = VAR_15 + 1;
 }





 VAR_18 = (uint8_t *)VAR_14 - (uint8_t *)VAR_12;
 if (VAR_18 == 0) {
  FUNC_7(VAR_7);
  goto done;
 }

 FUNC_11(&VAR_8->lun_lock);
 VAR_10 = (struct ctl_ptr_len_flags *)
     &VAR_7->io_hdr.ctl_private[VAR_1];
 VAR_10->ptr = (void *)VAR_12;
 VAR_10->len = VAR_18;
 VAR_10->flags = VAR_20;
 FUNC_8(VAR_8, (union ctl_io *)VAR_7, VAR_3);
 FUNC_12(&VAR_8->lun_lock);

 VAR_19 = VAR_8->backend->config_write((union ctl_io *)VAR_7);
 return (VAR_19);

done:
 if (VAR_7->io_hdr.flags & VAR_0) {
  FUNC_9(VAR_7->kern_data_ptr, VAR_4);
  VAR_7->io_hdr.flags &= ~VAR_0;
 }
 FUNC_4((union ctl_io *)VAR_7);
 return (VAR_2);
}
