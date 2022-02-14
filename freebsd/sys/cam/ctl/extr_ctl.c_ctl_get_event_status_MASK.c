
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint32_t ;
struct scsi_get_event_status_header {scalar_t__ supported_class; int nea_class; int descr_length; } ;
struct scsi_get_event_status {int byte2; int length; } ;
struct TYPE_2__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_1__ io_hdr; scalar_t__ kern_data_ptr; int kern_data_len; int kern_total_len; scalar_t__ kern_rel_offset; scalar_t__ kern_sg_entries; scalar_t__ cdb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*,int,int,int,int,int ) ;
 int FUNC_3 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_4 (int,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

int
FUNC_8(struct ctl_scsiio *VAR_8)
{
 struct scsi_get_event_status_header *VAR_9;
 struct scsi_get_event_status *VAR_10;
 uint32_t VAR_11, VAR_12;

 VAR_10 = (struct scsi_get_event_status *)VAR_8->cdb;
 if ((VAR_10->byte2 & VAR_6) == 0) {
  FUNC_2(VAR_8, 1, 1,
                1, 1, 0);
  FUNC_1((union ctl_io *)VAR_8);
  return (VAR_1);
 }
 VAR_11 = FUNC_6(VAR_10->length);

 VAR_12 = sizeof(struct scsi_get_event_status_header);
 VAR_8->kern_data_ptr = FUNC_4(VAR_12, VAR_2, VAR_3 | VAR_4);
 VAR_8->kern_sg_entries = 0;
 VAR_8->kern_rel_offset = 0;
 VAR_8->kern_data_len = FUNC_5(VAR_12, VAR_11);
 VAR_8->kern_total_len = VAR_8->kern_data_len;

 VAR_9 = (struct scsi_get_event_status_header *)VAR_8->kern_data_ptr;
 FUNC_7(0, VAR_9->descr_length);
 VAR_9->nea_class = VAR_5;
 VAR_9->supported_class = 0;

 FUNC_3(VAR_8);
 VAR_8->io_hdr.flags |= VAR_0;
 VAR_8->be_move_done = VAR_7;
 FUNC_0((union ctl_io *)VAR_8);
 return (VAR_1);
}
