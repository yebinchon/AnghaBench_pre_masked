
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_report_supported_opcodes_one {int support; int* cdb_usage; int cdb_length; } ;
struct scsi_report_supported_opcodes_descr {int opcode; int cdb_length; int flags; int service_action; } ;
struct scsi_report_supported_opcodes_all {int length; struct scsi_report_supported_opcodes_descr* descr; } ;
struct scsi_report_supported_opcodes {int requested_opcode; int options; int length; int requested_service_action; } ;
struct TYPE_3__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_1__ io_hdr; scalar_t__ kern_data_ptr; int kern_data_len; int kern_total_len; scalar_t__ kern_rel_offset; scalar_t__ kern_sg_entries; scalar_t__ cdb; } ;
struct ctl_lun {TYPE_2__* be_lun; } ;
struct ctl_cmd_entry {int flags; int length; scalar_t__ execute; int usage; } ;
struct TYPE_4__ {int lun_type; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;



 int VAR_7 ;
 int FUNC_2 (int ,struct ctl_cmd_entry const*) ;
 struct ctl_cmd_entry* VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (union ctl_io*) ;
 int FUNC_5 (struct ctl_scsiio*,int,int,int,int,int) ;
 int FUNC_6 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_7 (int,int ,int) ;
 int FUNC_8 (int*,int ,int ) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,int ) ;

int
FUNC_14(struct ctl_scsiio *VAR_10)
{
 struct ctl_lun *VAR_11 = FUNC_1(VAR_10);
 struct scsi_report_supported_opcodes *VAR_12;
 const struct ctl_cmd_entry *VAR_13, *VAR_14;
 struct scsi_report_supported_opcodes_all *VAR_15;
 struct scsi_report_supported_opcodes_descr *VAR_16;
 struct scsi_report_supported_opcodes_one *VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

 FUNC_0(("ctl_report_supported_opcodes\n"));

 VAR_12 = (struct scsi_report_supported_opcodes *)VAR_10->cdb;
 VAR_18 = VAR_2;

 VAR_21 = VAR_12->requested_opcode;
 VAR_22 = FUNC_10(VAR_12->requested_service_action);
 switch (VAR_12->options & VAR_6) {
 case 131:
  VAR_25 = 0;
  for (VAR_23 = 0; VAR_23 < 256; VAR_23++) {
   VAR_13 = &VAR_8[VAR_23];
   if (VAR_13->flags & VAR_0) {
    for (VAR_24 = 0; VAR_24 < 32; VAR_24++) {
     VAR_14 = &((const struct ctl_cmd_entry *)
         VAR_13->execute)[VAR_24];
     if (FUNC_2(
         VAR_11->be_lun->lun_type, VAR_14))
      VAR_25++;
    }
   } else {
    if (FUNC_2(VAR_11->be_lun->lun_type,
        VAR_13))
     VAR_25++;
   }
  }
  VAR_20 = sizeof(struct scsi_report_supported_opcodes_all) +
      VAR_25 * sizeof(struct scsi_report_supported_opcodes_descr);
  break;
 case 130:
  if (VAR_8[VAR_21].flags & VAR_0) {
   FUNC_5( VAR_10,
                         1,
                       1,
                     2,
                         1,
                   2);
   FUNC_4((union ctl_io *)VAR_10);
   return (VAR_2);
  }
  VAR_20 = sizeof(struct scsi_report_supported_opcodes_one) + 32;
  break;
 case 128:
  if ((VAR_8[VAR_21].flags & VAR_0) == 0 ||
      VAR_22 >= 32) {
   FUNC_5( VAR_10,
                         1,
                       1,
                     2,
                         1,
                   2);
   FUNC_4((union ctl_io *)VAR_10);
   return (VAR_2);
  }

 case 129:
  VAR_20 = sizeof(struct scsi_report_supported_opcodes_one) + 32;
  break;
 default:
  FUNC_5( VAR_10,
                        1,
                      1,
                    2,
                        1,
                  2);
  FUNC_4((union ctl_io *)VAR_10);
  return (VAR_2);
 }

 VAR_19 = FUNC_11(VAR_12->length);

 VAR_10->kern_data_ptr = FUNC_7(VAR_20, VAR_3, VAR_4 | VAR_5);
 VAR_10->kern_sg_entries = 0;
 VAR_10->kern_rel_offset = 0;
 VAR_10->kern_data_len = FUNC_9(VAR_20, VAR_19);
 VAR_10->kern_total_len = VAR_10->kern_data_len;

 switch (VAR_12->options & VAR_6) {
 case 131:
  VAR_15 = (struct scsi_report_supported_opcodes_all *)
      VAR_10->kern_data_ptr;
  VAR_25 = 0;
  for (VAR_23 = 0; VAR_23 < 256; VAR_23++) {
   VAR_13 = &VAR_8[VAR_23];
   if (VAR_13->flags & VAR_0) {
    for (VAR_24 = 0; VAR_24 < 32; VAR_24++) {
     VAR_14 = &((const struct ctl_cmd_entry *)
         VAR_13->execute)[VAR_24];
     if (!FUNC_2(
         VAR_11->be_lun->lun_type, VAR_14))
      continue;
     VAR_16 = &VAR_15->descr[VAR_25++];
     VAR_16->opcode = VAR_23;
     FUNC_12(VAR_24, VAR_16->service_action);
     VAR_16->flags = VAR_7;
     FUNC_12(VAR_14->length,
         VAR_16->cdb_length);
    }
   } else {
    if (!FUNC_2(VAR_11->be_lun->lun_type,
        VAR_13))
     continue;
    VAR_16 = &VAR_15->descr[VAR_25++];
    VAR_16->opcode = VAR_23;
    FUNC_12(0, VAR_16->service_action);
    VAR_16->flags = 0;
    FUNC_12(VAR_13->length, VAR_16->cdb_length);
   }
  }
  FUNC_13(
      VAR_25 * sizeof(struct scsi_report_supported_opcodes_descr),
      VAR_15->length);
  break;
 case 130:
  VAR_17 = (struct scsi_report_supported_opcodes_one *)
      VAR_10->kern_data_ptr;
  VAR_13 = &VAR_8[VAR_21];
  goto fill_one;
 case 128:
  VAR_17 = (struct scsi_report_supported_opcodes_one *)
      VAR_10->kern_data_ptr;
  VAR_13 = &VAR_8[VAR_21];
  VAR_13 = &((const struct ctl_cmd_entry *)
      VAR_13->execute)[VAR_22];
fill_one:
  if (FUNC_2(VAR_11->be_lun->lun_type, VAR_13)) {
   VAR_17->support = 3;
   FUNC_12(VAR_13->length, VAR_17->cdb_length);
   VAR_17->cdb_usage[0] = VAR_21;
   FUNC_8(&VAR_17->cdb_usage[1], VAR_13->usage,
       VAR_13->length - 1);
  } else
   VAR_17->support = 1;
  break;
 case 129:
  VAR_17 = (struct scsi_report_supported_opcodes_one *)
      VAR_10->kern_data_ptr;
  VAR_13 = &VAR_8[VAR_21];
  if (VAR_13->flags & VAR_0) {
   VAR_13 = &((const struct ctl_cmd_entry *)
       VAR_13->execute)[VAR_22];
  } else if (VAR_22 != 0) {
   VAR_17->support = 1;
   break;
  }
  goto fill_one;
 }

 FUNC_6(VAR_10);
 VAR_10->io_hdr.flags |= VAR_1;
 VAR_10->be_move_done = VAR_9;
 FUNC_3((union ctl_io *)VAR_10);
 return(VAR_18);
}
