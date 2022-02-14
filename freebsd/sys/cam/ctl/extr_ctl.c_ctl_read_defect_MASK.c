
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef void* uint8_t ;
typedef scalar_t__ uint32_t ;
struct scsi_read_defect_data_hdr_12 {int length; int generation; void* format; } ;
struct scsi_read_defect_data_hdr_10 {int length; void* format; } ;
struct scsi_read_defect_data_12 {int alloc_length; void* format; } ;
struct scsi_read_defect_data_10 {int alloc_length; void* format; } ;
struct TYPE_2__ {int flags; } ;
struct ctl_scsiio {scalar_t__* cdb; int be_move_done; TYPE_1__ io_hdr; scalar_t__ kern_data_ptr; int kern_data_len; int kern_total_len; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (union ctl_io*) ;
 int FUNC_3 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

int
FUNC_10(struct ctl_scsiio *VAR_7)
{
 struct scsi_read_defect_data_10 *VAR_8;
 struct scsi_read_defect_data_12 *VAR_9;
 struct scsi_read_defect_data_hdr_10 *VAR_10;
 struct scsi_read_defect_data_hdr_12 *VAR_11;
 uint32_t VAR_12, VAR_13;
 uint8_t VAR_14;

 FUNC_0(("ctl_read_defect\n"));

 if (VAR_7->cdb[0] == VAR_5) {
  VAR_8 = (struct scsi_read_defect_data_10 *)&VAR_7->cdb;
  VAR_14 = VAR_8->format;
  VAR_12 = FUNC_6(VAR_8->alloc_length);
  VAR_13 = sizeof(*VAR_10);
 } else {
  VAR_9 = (struct scsi_read_defect_data_12 *)&VAR_7->cdb;
  VAR_14 = VAR_9->format;
  VAR_12 = FUNC_7(VAR_9->alloc_length);
  VAR_13 = sizeof(*VAR_11);
 }
 if (VAR_12 == 0) {
  FUNC_3(VAR_7);
  FUNC_2((union ctl_io *)VAR_7);
  return (VAR_1);
 }

 VAR_7->kern_data_ptr = FUNC_4(VAR_13, VAR_2, VAR_3 | VAR_4);
 VAR_7->kern_rel_offset = 0;
 VAR_7->kern_sg_entries = 0;
 VAR_7->kern_data_len = FUNC_5(VAR_13, VAR_12);
 VAR_7->kern_total_len = VAR_7->kern_data_len;

 if (VAR_7->cdb[0] == VAR_5) {
  VAR_10 = (struct scsi_read_defect_data_hdr_10 *)
      VAR_7->kern_data_ptr;
  VAR_10->format = VAR_14;
  FUNC_8(0, VAR_10->length);
 } else {
  VAR_11 = (struct scsi_read_defect_data_hdr_12 *)
      VAR_7->kern_data_ptr;
  VAR_11->format = VAR_14;
  FUNC_8(0, VAR_11->generation);
  FUNC_9(0, VAR_11->length);
 }

 FUNC_3(VAR_7);
 VAR_7->io_hdr.flags |= VAR_0;
 VAR_7->be_move_done = VAR_6;
 FUNC_1((union ctl_io *)VAR_7);
 return (VAR_1);
}
