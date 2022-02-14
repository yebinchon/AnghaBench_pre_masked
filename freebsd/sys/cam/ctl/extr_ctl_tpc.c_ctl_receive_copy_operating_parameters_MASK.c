
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_receive_copy_operating_parameters_data {int implemented_descriptor_list_length; int * list_of_implemented_descriptor_type_codes; scalar_t__ held_data_granularity; scalar_t__ inline_data_granularity; scalar_t__ data_segment_granularity; int maximum_concurrent_copies; int total_concurrent_copies; int maximum_stream_device_transfer_size; int held_data_limit; int maximum_inline_data_length; int maximum_segment_length; int maximum_descriptor_list_length; int maximum_segment_descriptor_count; int maximum_cscd_descriptor_count; int snlid; int length; } ;
struct scsi_receive_copy_operating_parameters {int length; } ;
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
 int VAR_16 ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,int ) ;

int
FUNC_8(struct ctl_scsiio *VAR_17)
{
 struct scsi_receive_copy_operating_parameters *VAR_18;
 struct scsi_receive_copy_operating_parameters_data *VAR_19;
 int VAR_20;
 int VAR_21, VAR_22;

 FUNC_0(("ctl_report_supported_tmf\n"));

 VAR_18 = (struct scsi_receive_copy_operating_parameters *)VAR_17->cdb;

 VAR_20 = VAR_1;

 VAR_22 = sizeof(*VAR_19) + 4;
 VAR_21 = FUNC_5(VAR_18->length);

 VAR_17->kern_data_ptr = FUNC_3(VAR_22, VAR_6, VAR_7 | VAR_8);
 VAR_17->kern_sg_entries = 0;
 VAR_17->kern_rel_offset = 0;
 VAR_17->kern_data_len = FUNC_4(VAR_22, VAR_21);
 VAR_17->kern_total_len = VAR_17->kern_data_len;

 VAR_19 = (struct scsi_receive_copy_operating_parameters_data *)VAR_17->kern_data_ptr;
 FUNC_7(sizeof(*VAR_19) - 4 + 4, VAR_19->length);
 VAR_19->snlid = VAR_9;
 FUNC_6(VAR_10, VAR_19->maximum_cscd_descriptor_count);
 FUNC_6(VAR_15, VAR_19->maximum_segment_descriptor_count);
 FUNC_7(VAR_12, VAR_19->maximum_descriptor_list_length);
 FUNC_7(VAR_14, VAR_19->maximum_segment_length);
 FUNC_7(VAR_11, VAR_19->maximum_inline_data_length);
 FUNC_7(0, VAR_19->held_data_limit);
 FUNC_7(0, VAR_19->maximum_stream_device_transfer_size);
 FUNC_6(VAR_13, VAR_19->total_concurrent_copies);
 VAR_19->maximum_concurrent_copies = VAR_13;
 VAR_19->data_segment_granularity = 0;
 VAR_19->inline_data_granularity = 0;
 VAR_19->held_data_granularity = 0;
 VAR_19->implemented_descriptor_list_length = 4;
 VAR_19->list_of_implemented_descriptor_type_codes[0] = VAR_3;
 VAR_19->list_of_implemented_descriptor_type_codes[1] = VAR_5;
 VAR_19->list_of_implemented_descriptor_type_codes[2] = VAR_4;
 VAR_19->list_of_implemented_descriptor_type_codes[3] = VAR_2;

 FUNC_2(VAR_17);
 VAR_17->io_hdr.flags |= VAR_0;
 VAR_17->be_move_done = VAR_16;
 FUNC_1((union ctl_io *)VAR_17);
 return (VAR_20);
}
