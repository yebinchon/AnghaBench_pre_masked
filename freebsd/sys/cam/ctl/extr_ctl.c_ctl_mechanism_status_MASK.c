
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint32_t ;
struct scsi_mechanism_status_header {int state1; int state2; int slots_length; scalar_t__ slots_num; int lba; } ;
struct scsi_mechanism_status {int length; } ;
struct TYPE_2__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_1__ io_hdr; scalar_t__ kern_data_ptr; int kern_data_len; int kern_total_len; scalar_t__ kern_rel_offset; scalar_t__ kern_sg_entries; scalar_t__ cdb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

int
FUNC_7(struct ctl_scsiio *VAR_6)
{
 struct scsi_mechanism_status_header *VAR_7;
 struct scsi_mechanism_status *VAR_8;
 uint32_t VAR_9, VAR_10;

 VAR_8 = (struct scsi_mechanism_status *)VAR_6->cdb;
 VAR_9 = FUNC_4(VAR_8->length);

 VAR_10 = sizeof(struct scsi_mechanism_status_header);
 VAR_6->kern_data_ptr = FUNC_2(VAR_10, VAR_2, VAR_3 | VAR_4);
 VAR_6->kern_sg_entries = 0;
 VAR_6->kern_rel_offset = 0;
 VAR_6->kern_data_len = FUNC_3(VAR_10, VAR_9);
 VAR_6->kern_total_len = VAR_6->kern_data_len;

 VAR_7 = (struct scsi_mechanism_status_header *)VAR_6->kern_data_ptr;
 VAR_7->state1 = 0x00;
 VAR_7->state2 = 0xe0;
 FUNC_6(0, VAR_7->lba);
 VAR_7->slots_num = 0;
 FUNC_5(0, VAR_7->slots_length);

 FUNC_1(VAR_6);
 VAR_6->io_hdr.flags |= VAR_0;
 VAR_6->be_move_done = VAR_5;
 FUNC_0((union ctl_io *)VAR_6);
 return (VAR_1);
}
