
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint32_t ;
struct tpc_list {int sense_len; int sense_data; scalar_t__ abort; scalar_t__ error; scalar_t__ completed; } ;
struct scsi_receive_copy_failure_details_data {int sense_data; int sense_data_length; int available_data; int copy_command_status; } ;
struct scsi_receive_copy_failure_details {int length; int list_identifier; } ;
struct TYPE_2__ {int flags; int nexus; } ;
struct ctl_scsiio {int be_move_done; TYPE_1__ io_hdr; scalar_t__ kern_data_ptr; int kern_data_len; int kern_total_len; scalar_t__ kern_rel_offset; scalar_t__ kern_sg_entries; scalar_t__ cdb; } ;
struct ctl_lun {int lun_lock; int tpc_lists; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,struct tpc_list*,int ) ;
 int VAR_6 ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (union ctl_io*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ctl_scsiio*,int,int,int,int ,int ) ;
 int FUNC_7 (struct ctl_scsiio*) ;
 int FUNC_8 (struct tpc_list*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int,int ,int) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int,int ) ;
 struct tpc_list* FUNC_17 (struct ctl_lun*,int ,int ) ;

int
FUNC_18(struct ctl_scsiio *VAR_8)
{
 struct ctl_lun *VAR_9 = FUNC_1(VAR_8);
 struct scsi_receive_copy_failure_details *VAR_10;
 struct scsi_receive_copy_failure_details_data *VAR_11;
 struct tpc_list *VAR_12;
 struct tpc_list VAR_13;
 int VAR_14;
 int VAR_15, VAR_16;
 uint32_t VAR_17;

 FUNC_0(("ctl_receive_copy_failure_details\n"));

 VAR_10 = (struct scsi_receive_copy_failure_details *)VAR_8->cdb;
 VAR_14 = VAR_1;

 VAR_17 = VAR_10->list_identifier;
 FUNC_12(&VAR_9->lun_lock);
 VAR_12 = FUNC_17(VAR_9, VAR_17,
     FUNC_5(&VAR_8->io_hdr.nexus));
 if (VAR_12 == ((void*)0) || !VAR_12->completed) {
  FUNC_13(&VAR_9->lun_lock);
  FUNC_6(VAR_8, 1,
                  1, 2, 0,
              0);
  FUNC_4((union ctl_io *)VAR_8);
  return (VAR_14);
 }
 VAR_13 = *VAR_12;
 FUNC_2(&VAR_9->tpc_lists, VAR_12, VAR_7);
 FUNC_8(VAR_12, VAR_2);
 FUNC_13(&VAR_9->lun_lock);

 VAR_16 = sizeof(*VAR_11) + VAR_13.sense_len;
 VAR_15 = FUNC_14(VAR_10->length);

 VAR_8->kern_data_ptr = FUNC_9(VAR_16, VAR_2, VAR_3 | VAR_4);
 VAR_8->kern_sg_entries = 0;
 VAR_8->kern_rel_offset = 0;
 VAR_8->kern_data_len = FUNC_11(VAR_16, VAR_15);
 VAR_8->kern_total_len = VAR_8->kern_data_len;

 VAR_11 = (struct scsi_receive_copy_failure_details_data *)VAR_8->kern_data_ptr;
 if (VAR_13.completed && (VAR_13.error || VAR_13.abort)) {
  FUNC_16(sizeof(*VAR_11) - 4 + VAR_13.sense_len,
      VAR_11->available_data);
  VAR_11->copy_command_status = VAR_5;
 } else
  FUNC_16(0, VAR_11->available_data);
 FUNC_15(VAR_13.sense_len, VAR_11->sense_data_length);
 FUNC_10(VAR_11->sense_data, &VAR_13.sense_data, VAR_13.sense_len);

 FUNC_7(VAR_8);
 VAR_8->io_hdr.flags |= VAR_0;
 VAR_8->be_move_done = VAR_6;
 FUNC_3((union ctl_io *)VAR_8);
 return (VAR_14);
}
