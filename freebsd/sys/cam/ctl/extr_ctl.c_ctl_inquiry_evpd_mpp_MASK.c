
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_vpd_mode_page_policy_descr {int dummy; } ;
struct scsi_vpd_mode_page_policy {int device; TYPE_2__* descr; int page_length; int page_code; } ;
struct TYPE_6__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_3__ io_hdr; int kern_data_len; int kern_total_len; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; scalar_t__ kern_data_ptr; } ;
struct ctl_lun {TYPE_1__* be_lun; } ;
struct TYPE_5__ {int page_code; int subpage_code; int policy; } ;
struct TYPE_4__ {int lun_type; } ;


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
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int
FUNC_6(struct ctl_scsiio *VAR_11, int VAR_12)
{
 struct ctl_lun *VAR_13 = FUNC_0(VAR_11);
 struct scsi_vpd_mode_page_policy *VAR_14;
 int VAR_15;

 VAR_15 = sizeof(struct scsi_vpd_mode_page_policy) +
     sizeof(struct scsi_vpd_mode_page_policy_descr);

 VAR_11->kern_data_ptr = FUNC_3(VAR_15, VAR_2, VAR_3 | VAR_4);
 VAR_14 = (struct scsi_vpd_mode_page_policy *)VAR_11->kern_data_ptr;
 VAR_11->kern_rel_offset = 0;
 VAR_11->kern_sg_entries = 0;
 VAR_11->kern_data_len = FUNC_4(VAR_15, VAR_12);
 VAR_11->kern_total_len = VAR_11->kern_data_len;





 if (VAR_13 != ((void*)0))
  VAR_14->device = (VAR_5 << 5) |
         VAR_13->be_lun->lun_type;
 else
  VAR_14->device = (VAR_6 << 5) | VAR_9;
 VAR_14->page_code = VAR_7;
 FUNC_5(VAR_15 - 4, VAR_14->page_length);
 VAR_14->descr[0].page_code = 0x3f;
 VAR_14->descr[0].subpage_code = 0xff;
 VAR_14->descr[0].policy = VAR_8;

 FUNC_2(VAR_11);
 VAR_11->io_hdr.flags |= VAR_0;
 VAR_11->be_move_done = VAR_10;
 FUNC_1((union ctl_io *)VAR_11);
 return (VAR_1);
}
