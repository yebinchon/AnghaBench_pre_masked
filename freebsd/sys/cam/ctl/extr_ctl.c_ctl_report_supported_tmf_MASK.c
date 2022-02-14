
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_report_supported_tmf_ext_data {int byte1; int byte2; int length; } ;
struct scsi_report_supported_tmf_data {int dummy; } ;
struct scsi_report_supported_tmf {int options; int length; } ;
struct TYPE_2__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_1__ io_hdr; scalar_t__ kern_data_ptr; int kern_data_len; int kern_total_len; scalar_t__ kern_rel_offset; scalar_t__ kern_sg_entries; scalar_t__ cdb; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
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
 int FUNC_5 (int ) ;

int
FUNC_6(struct ctl_scsiio *VAR_16)
{
 struct scsi_report_supported_tmf *VAR_17;
 struct scsi_report_supported_tmf_ext_data *VAR_18;
 int VAR_19;
 int VAR_20, VAR_21;

 FUNC_0(("ctl_report_supported_tmf\n"));

 VAR_17 = (struct scsi_report_supported_tmf *)VAR_16->cdb;

 VAR_19 = VAR_1;

 if (VAR_17->options & VAR_13)
  VAR_21 = sizeof(struct scsi_report_supported_tmf_ext_data);
 else
  VAR_21 = sizeof(struct scsi_report_supported_tmf_data);
 VAR_20 = FUNC_5(VAR_17->length);

 VAR_16->kern_data_ptr = FUNC_3(VAR_21, VAR_2, VAR_3 | VAR_4);
 VAR_16->kern_sg_entries = 0;
 VAR_16->kern_rel_offset = 0;
 VAR_16->kern_data_len = FUNC_4(VAR_21, VAR_20);
 VAR_16->kern_total_len = VAR_16->kern_data_len;

 VAR_18 = (struct scsi_report_supported_tmf_ext_data *)VAR_16->kern_data_ptr;
 VAR_18->byte1 |= VAR_5 | VAR_6 | VAR_7 | VAR_9 | VAR_11 |
     VAR_14;
 VAR_18->byte2 |= VAR_10 | VAR_12 | VAR_8;
 VAR_18->length = VAR_21 - 4;

 FUNC_2(VAR_16);
 VAR_16->io_hdr.flags |= VAR_0;
 VAR_16->be_move_done = VAR_15;
 FUNC_1((union ctl_io *)VAR_16);
 return (VAR_19);
}
