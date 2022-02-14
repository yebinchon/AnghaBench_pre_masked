
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_format_header_short {int defect_list_len; } ;
struct scsi_format_header_long {int defect_list_len; } ;
struct scsi_format {int byte2; } ;
struct TYPE_2__ {int flags; } ;
struct ctl_scsiio {int kern_data_len; int kern_total_len; TYPE_1__ io_hdr; scalar_t__ kern_data_ptr; int be_move_done; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; scalar_t__ cdb; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (union ctl_io*) ;
 int FUNC_3 (struct ctl_scsiio*,int,int ,int,int ,int ) ;
 int FUNC_4 (struct ctl_scsiio*) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct ctl_scsiio *VAR_7)
{
 struct scsi_format *VAR_8;
 int VAR_9, VAR_10;

 FUNC_0(("ctl_format\n"));

 VAR_8 = (struct scsi_format *)VAR_7->cdb;

 VAR_9 = 0;
 if (VAR_8->byte2 & VAR_4) {
  if (VAR_8->byte2 & VAR_5)
   VAR_9 = sizeof(struct scsi_format_header_long);
  else
   VAR_9 = sizeof(struct scsi_format_header_short);
 }

 if (((VAR_7->io_hdr.flags & VAR_0) == 0)
  && (VAR_9 > 0)) {
  VAR_7->kern_data_ptr = FUNC_6(VAR_9, VAR_2, VAR_3);
  VAR_7->kern_data_len = VAR_9;
  VAR_7->kern_total_len = VAR_9;
  VAR_7->kern_rel_offset = 0;
  VAR_7->kern_sg_entries = 0;
  VAR_7->io_hdr.flags |= VAR_0;
  VAR_7->be_move_done = VAR_6;
  FUNC_1((union ctl_io *)VAR_7);

  return (VAR_1);
 }

 VAR_10 = 0;

 if (VAR_8->byte2 & VAR_4) {
  if (VAR_8->byte2 & VAR_5) {
   struct scsi_format_header_long *VAR_11;

   VAR_11 = (struct scsi_format_header_long *)
    VAR_7->kern_data_ptr;

   VAR_10 = FUNC_8(VAR_11->defect_list_len);
   if (VAR_10 != 0) {
    FUNC_3(VAR_7,
                          1,
                        0,
                      2,
                          0,
                    0);
    goto bailout;
   }
  } else {
   struct scsi_format_header_short *VAR_12;

   VAR_12 = (struct scsi_format_header_short *)
    VAR_7->kern_data_ptr;

   VAR_10 = FUNC_7(VAR_12->defect_list_len);
   if (VAR_10 != 0) {
    FUNC_3(VAR_7,
                          1,
                        0,
                      2,
                          0,
                    0);
    goto bailout;
   }
  }
 }

 FUNC_4(VAR_7);
bailout:

 if (VAR_7->io_hdr.flags & VAR_0) {
  FUNC_5(VAR_7->kern_data_ptr, VAR_2);
  VAR_7->io_hdr.flags &= ~VAR_0;
 }

 FUNC_2((union ctl_io *)VAR_7);
 return (VAR_1);
}
