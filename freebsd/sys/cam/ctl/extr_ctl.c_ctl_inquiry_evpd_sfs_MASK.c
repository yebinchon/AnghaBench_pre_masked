
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_vpd_sfs {int device; int * page_length; int * codes; int page_code; } ;
struct TYPE_4__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_2__ io_hdr; int kern_data_len; int kern_total_len; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; scalar_t__ kern_data_ptr; } ;
struct ctl_lun {TYPE_1__* be_lun; } ;
struct TYPE_3__ {int lun_type; int flags; } ;


 int VAR_0 ;
 struct ctl_lun* FUNC_0 (struct ctl_scsiio*) ;
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
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static int
FUNC_6(struct ctl_scsiio *VAR_11, int VAR_12)
{
 struct ctl_lun *VAR_13 = FUNC_0(VAR_11);
 struct scsi_vpd_sfs *VAR_14;
 int VAR_15, VAR_16;

 VAR_15 = sizeof(*VAR_14) + 5 * 2;
 VAR_11->kern_data_ptr = FUNC_3(VAR_15, VAR_3, VAR_4 | VAR_5);
 VAR_14 = (struct scsi_vpd_sfs *)VAR_11->kern_data_ptr;
 VAR_11->kern_sg_entries = 0;
 VAR_11->kern_rel_offset = 0;
 VAR_11->kern_sg_entries = 0;
 VAR_11->kern_data_len = FUNC_4(VAR_15, VAR_12);
 VAR_11->kern_total_len = VAR_11->kern_data_len;






 if (VAR_13 != ((void*)0))
  VAR_14->device = (VAR_6 << 5) |
      VAR_13->be_lun->lun_type;
 else
  VAR_14->device = (VAR_7 << 5) | VAR_9;

 VAR_14->page_code = VAR_8;
 VAR_16 = 0;

 FUNC_5(0x0001, &VAR_14->codes[2 * VAR_16++]);
 if (VAR_13 != ((void*)0) && VAR_13->be_lun->lun_type == VAR_9) {

  FUNC_5(0x0101, &VAR_14->codes[2 * VAR_16++]);

  FUNC_5(0x0102, &VAR_14->codes[2 * VAR_16++]);
  if (VAR_13->be_lun->flags & VAR_1) {

   FUNC_5(0x0103, &VAR_14->codes[2 * VAR_16++]);
  }


 }
 FUNC_5(4 + 2 * VAR_16, VAR_14->page_length);

 FUNC_2(VAR_11);
 VAR_11->io_hdr.flags |= VAR_0;
 VAR_11->be_move_done = VAR_10;
 FUNC_1((union ctl_io *)VAR_11);
 return (VAR_2);
}
