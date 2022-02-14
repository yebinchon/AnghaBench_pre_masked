
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct scsi_report_timestamp_data {int * timestamp; int origin; int * length; } ;
struct scsi_report_timestamp {int length; } ;
struct TYPE_2__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_1__ io_hdr; scalar_t__ kern_data_ptr; int kern_data_len; int kern_total_len; scalar_t__ kern_rel_offset; scalar_t__ kern_sg_entries; scalar_t__ cdb; } ;
typedef int int64_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*) ;
 int FUNC_3 (struct timeval*) ;
 scalar_t__ FUNC_4 (int,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int,int *) ;

int
FUNC_9(struct ctl_scsiio *VAR_7)
{
 struct scsi_report_timestamp *VAR_8;
 struct scsi_report_timestamp_data *VAR_9;
 struct timeval VAR_10;
 int64_t VAR_11;
 int VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(("ctl_report_timestamp\n"));

 VAR_8 = (struct scsi_report_timestamp *)VAR_7->cdb;

 VAR_12 = VAR_1;

 VAR_14 = sizeof(struct scsi_report_timestamp_data);
 VAR_13 = FUNC_6(VAR_8->length);

 VAR_7->kern_data_ptr = FUNC_4(VAR_14, VAR_2, VAR_3 | VAR_4);
 VAR_7->kern_sg_entries = 0;
 VAR_7->kern_rel_offset = 0;
 VAR_7->kern_data_len = FUNC_5(VAR_14, VAR_13);
 VAR_7->kern_total_len = VAR_7->kern_data_len;

 VAR_9 = (struct scsi_report_timestamp_data *)VAR_7->kern_data_ptr;
 FUNC_7(sizeof(*VAR_9) - 2, VAR_9->length);
 VAR_9->origin = VAR_5;
 FUNC_3(&VAR_10);
 VAR_11 = (int64_t)VAR_10.tv_sec * 1000 + VAR_10.tv_usec / 1000;
 FUNC_8(VAR_11 >> 16, VAR_9->timestamp);
 FUNC_7(VAR_11 & 0xffff, &VAR_9->timestamp[4]);

 FUNC_2(VAR_7);
 VAR_7->io_hdr.flags |= VAR_0;
 VAR_7->be_move_done = VAR_6;
 FUNC_1((union ctl_io *)VAR_7);
 return (VAR_12);
}
