
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef void* uint32_t ;
struct tpc_list {int sense_len; int sense_data; int curseg; int curbytes; int curops; scalar_t__ abort; scalar_t__ error; scalar_t__ completed; int service_action; } ;
struct scsi_receive_copy_status_lid4_data {int length_of_the_sense_data_field; int sense_data_length; int sense_data; int segments_processed; int transfer_count; int transfer_count_units; int estimated_status_update_delay; int operation_counter; int copy_command_status; int response_to_service_action; int available_data; } ;
struct scsi_receive_copy_status_lid4 {int length; int list_identifier; } ;
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,struct tpc_list*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (union ctl_io*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ctl_scsiio*,int,int,int,int ,int ) ;
 int FUNC_7 (struct ctl_scsiio*) ;
 int FUNC_8 (struct tpc_list*,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (int,int ,int) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 void* FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int,int ) ;
 struct tpc_list* FUNC_18 (struct ctl_lun*,void*,int ) ;

int
FUNC_19(struct ctl_scsiio *VAR_13)
{
 struct ctl_lun *VAR_14 = FUNC_1(VAR_13);
 struct scsi_receive_copy_status_lid4 *VAR_15;
 struct scsi_receive_copy_status_lid4_data *VAR_16;
 struct tpc_list *VAR_17;
 struct tpc_list VAR_18;
 int VAR_19;
 int VAR_20, VAR_21;
 uint32_t VAR_22;

 FUNC_0(("ctl_receive_copy_status_lid4\n"));

 VAR_15 = (struct scsi_receive_copy_status_lid4 *)VAR_13->cdb;
 VAR_19 = VAR_1;

 VAR_22 = FUNC_14(VAR_15->list_identifier);
 FUNC_12(&VAR_14->lun_lock);
 VAR_17 = FUNC_18(VAR_14, VAR_22,
     FUNC_5(&VAR_13->io_hdr.nexus));
 if (VAR_17 == ((void*)0)) {
  FUNC_13(&VAR_14->lun_lock);
  FUNC_6(VAR_13, 1,
                  1, 2, 0,
              0);
  FUNC_4((union ctl_io *)VAR_13);
  return (VAR_19);
 }
 VAR_18 = *VAR_17;
 if (VAR_17->completed) {
  FUNC_2(&VAR_14->tpc_lists, VAR_17, VAR_12);
  FUNC_8(VAR_17, VAR_2);
 }
 FUNC_13(&VAR_14->lun_lock);

 VAR_21 = sizeof(*VAR_16) + VAR_18.sense_len;
 VAR_20 = FUNC_14(VAR_15->length);

 VAR_13->kern_data_ptr = FUNC_9(VAR_21, VAR_2, VAR_3 | VAR_4);
 VAR_13->kern_sg_entries = 0;
 VAR_13->kern_rel_offset = 0;
 VAR_13->kern_data_len = FUNC_11(VAR_21, VAR_20);
 VAR_13->kern_total_len = VAR_13->kern_data_len;

 VAR_16 = (struct scsi_receive_copy_status_lid4_data *)VAR_13->kern_data_ptr;
 FUNC_17(sizeof(*VAR_16) - 4 + VAR_18.sense_len,
     VAR_16->available_data);
 VAR_16->response_to_service_action = VAR_18.service_action;
 if (VAR_18.completed) {
  if (VAR_18.error)
   VAR_16->copy_command_status = VAR_7;
  else if (VAR_18.abort)
   VAR_16->copy_command_status = VAR_5;
  else
   VAR_16->copy_command_status = VAR_6;
 } else
  VAR_16->copy_command_status = VAR_8;
 FUNC_16(VAR_18.curops, VAR_16->operation_counter);
 FUNC_17(VAR_10, VAR_16->estimated_status_update_delay);
 VAR_16->transfer_count_units = VAR_9;
 FUNC_15(VAR_18.curbytes, VAR_16->transfer_count);
 FUNC_16(VAR_18.curseg, VAR_16->segments_processed);
 VAR_16->length_of_the_sense_data_field = VAR_18.sense_len;
 VAR_16->sense_data_length = VAR_18.sense_len;
 FUNC_10(VAR_16->sense_data, &VAR_18.sense_data, VAR_18.sense_len);

 FUNC_7(VAR_13);
 VAR_13->io_hdr.flags |= VAR_0;
 VAR_13->be_move_done = VAR_11;
 FUNC_3((union ctl_io *)VAR_13);
 return (VAR_19);
}
