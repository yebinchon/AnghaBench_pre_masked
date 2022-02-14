
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_vpd_extended_inquiry_data {int device; int flags2; scalar_t__ max_sense_length; int flags5; int flags4; int flags3; int page_length; int page_code; } ;
struct TYPE_4__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_2__ io_hdr; int kern_data_len; int kern_total_len; scalar_t__ kern_rel_offset; scalar_t__ kern_sg_entries; scalar_t__ kern_data_ptr; } ;
struct ctl_lun {TYPE_1__* be_lun; } ;
struct TYPE_3__ {int lun_type; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int
FUNC_6(struct ctl_scsiio *VAR_16, int VAR_17)
{
 struct ctl_lun *VAR_18 = FUNC_0(VAR_16);
 struct scsi_vpd_extended_inquiry_data *VAR_19;
 int VAR_20;

 VAR_20 = sizeof(struct scsi_vpd_extended_inquiry_data);
 VAR_16->kern_data_ptr = FUNC_3(VAR_20, VAR_2, VAR_3 | VAR_4);
 VAR_19 = (struct scsi_vpd_extended_inquiry_data *)VAR_16->kern_data_ptr;
 VAR_16->kern_sg_entries = 0;
 VAR_16->kern_rel_offset = 0;
 VAR_16->kern_data_len = FUNC_4(VAR_20, VAR_17);
 VAR_16->kern_total_len = VAR_16->kern_data_len;





 if (VAR_18 != ((void*)0))
  VAR_19->device = (VAR_5 << 5) |
         VAR_18->be_lun->lun_type;
 else
  VAR_19->device = (VAR_6 << 5) | VAR_14;
 VAR_19->page_code = VAR_13;
 FUNC_5(VAR_20 - 4, VAR_19->page_length);



 VAR_19->flags2 = VAR_7 | VAR_9 | VAR_11;



 VAR_19->flags3 = VAR_12;






 VAR_19->flags4 = VAR_8;




 VAR_19->flags5 = VAR_10;
 VAR_19->max_sense_length = 0;

 FUNC_2(VAR_16);
 VAR_16->io_hdr.flags |= VAR_0;
 VAR_16->be_move_done = VAR_15;
 FUNC_1((union ctl_io *)VAR_16);
 return (VAR_1);
}
