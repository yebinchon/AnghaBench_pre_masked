
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint32_t ;
struct tpc_list {int curbytes; int curseg; scalar_t__ abort; scalar_t__ error; scalar_t__ completed; } ;
struct scsi_receive_copy_status_lid1_data {int transfer_count; int transfer_count_units; int segments_processed; int copy_command_status; int available_data; } ;
struct scsi_receive_copy_status_lid1 {int length; int list_identifier; } ;
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
 int FUNC_10 (int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int,int ) ;
 struct tpc_list* FUNC_16 (struct ctl_lun*,int ,int ) ;

int
FUNC_17(struct ctl_scsiio *VAR_13)
{
 struct ctl_lun *VAR_14 = FUNC_1(VAR_13);
 struct scsi_receive_copy_status_lid1 *VAR_15;
 struct scsi_receive_copy_status_lid1_data *VAR_16;
 struct tpc_list *VAR_17;
 struct tpc_list VAR_18;
 int VAR_19;
 int VAR_20, VAR_21;
 uint32_t VAR_22;

 FUNC_0(("ctl_receive_copy_status_lid1\n"));

 VAR_15 = (struct scsi_receive_copy_status_lid1 *)VAR_13->cdb;
 VAR_19 = VAR_1;

 VAR_22 = VAR_15->list_identifier;
 FUNC_11(&VAR_14->lun_lock);
 VAR_17 = FUNC_16(VAR_14, VAR_22,
     FUNC_5(&VAR_13->io_hdr.nexus));
 if (VAR_17 == ((void*)0)) {
  FUNC_12(&VAR_14->lun_lock);
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
 FUNC_12(&VAR_14->lun_lock);

 VAR_21 = sizeof(*VAR_16);
 VAR_20 = FUNC_13(VAR_15->length);

 VAR_13->kern_data_ptr = FUNC_9(VAR_21, VAR_2, VAR_3 | VAR_4);
 VAR_13->kern_sg_entries = 0;
 VAR_13->kern_rel_offset = 0;
 VAR_13->kern_data_len = FUNC_10(VAR_21, VAR_20);
 VAR_13->kern_total_len = VAR_13->kern_data_len;

 VAR_16 = (struct scsi_receive_copy_status_lid1_data *)VAR_13->kern_data_ptr;
 FUNC_15(sizeof(*VAR_16) - 4, VAR_16->available_data);
 if (VAR_18.completed) {
  if (VAR_18.error || VAR_18.abort)
   VAR_16->copy_command_status = VAR_6;
  else
   VAR_16->copy_command_status = VAR_5;
 } else
  VAR_16->copy_command_status = VAR_7;
 FUNC_14(VAR_18.curseg, VAR_16->segments_processed);
 if (VAR_18.curbytes <= VAR_10) {
  VAR_16->transfer_count_units = VAR_8;
  FUNC_15(VAR_18.curbytes, VAR_16->transfer_count);
 } else {
  VAR_16->transfer_count_units = VAR_9;
  FUNC_15(VAR_18.curbytes >> 20, VAR_16->transfer_count);
 }

 FUNC_7(VAR_13);
 VAR_13->io_hdr.flags |= VAR_0;
 VAR_13->be_move_done = VAR_11;
 FUNC_3((union ctl_io *)VAR_13);
 return (VAR_19);
}
