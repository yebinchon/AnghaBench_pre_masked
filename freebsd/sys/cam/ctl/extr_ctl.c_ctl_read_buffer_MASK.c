
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct scsi_read_buffer_16 {int byte2; int length; int offset; } ;
struct scsi_read_buffer {int byte2; int length; int offset; } ;
struct ctl_scsiio {int* cdb; int* kern_data_ptr; int be_move_done; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; scalar_t__ kern_total_len; scalar_t__ kern_data_len; } ;
struct ctl_lun {int* write_buffer; } ;
typedef int echo_descr ;
typedef int descr ;


 int FUNC_0 (char*) ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (union ctl_io*) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (struct ctl_scsiio*,int,int,int,int ,int ) ;
 int FUNC_5 (struct ctl_scsiio*) ;
 int FUNC_6 (struct ctl_scsiio*) ;
 int* FUNC_7 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,int*) ;

int
FUNC_13(struct ctl_scsiio *VAR_8)
{
 struct ctl_lun *VAR_9 = FUNC_1(VAR_8);
 uint64_t VAR_10;
 uint32_t VAR_11;
 uint8_t VAR_12;
 static uint8_t VAR_13[4];
 static uint8_t VAR_14[4] = { 0 };

 FUNC_0(("ctl_read_buffer\n"));

 switch (VAR_8->cdb[0]) {
 case 129: {
  struct scsi_read_buffer *VAR_15;

  VAR_15 = (struct scsi_read_buffer *)VAR_8->cdb;
  VAR_10 = FUNC_9(VAR_15->offset);
  VAR_11 = FUNC_9(VAR_15->length);
  VAR_12 = VAR_15->byte2;
  break;
 }
 case 128: {
  struct scsi_read_buffer_16 *VAR_16;

  VAR_16 = (struct scsi_read_buffer_16 *)VAR_8->cdb;
  VAR_10 = FUNC_11(VAR_16->offset);
  VAR_11 = FUNC_10(VAR_16->length);
  VAR_12 = VAR_16->byte2;
  break;
 }
 default:
  FUNC_5(VAR_8);
  FUNC_3((union ctl_io *)VAR_8);
  return (VAR_0);
 }

 if (VAR_10 > VAR_1 ||
     VAR_10 + VAR_11 > VAR_1) {
  FUNC_4(VAR_8,
                        1,
                      1,
                    6,
                        0,
                  0);
  FUNC_3((union ctl_io *)VAR_8);
  return (VAR_0);
 }

 if ((VAR_12 & VAR_4) == VAR_5) {
  VAR_13[0] = 0;
  FUNC_12(VAR_1, &VAR_13[1]);
  VAR_8->kern_data_ptr = VAR_13;
  VAR_11 = FUNC_8(VAR_11, sizeof(VAR_13));
 } else if ((VAR_12 & VAR_4) == VAR_6) {
  VAR_8->kern_data_ptr = VAR_14;
  VAR_11 = FUNC_8(VAR_11, sizeof(VAR_14));
 } else {
  if (VAR_9->write_buffer == ((void*)0)) {
   VAR_9->write_buffer = FUNC_7(VAR_1,
       VAR_2, VAR_3);
  }
  VAR_8->kern_data_ptr = VAR_9->write_buffer + VAR_10;
 }
 VAR_8->kern_data_len = VAR_11;
 VAR_8->kern_total_len = VAR_11;
 VAR_8->kern_rel_offset = 0;
 VAR_8->kern_sg_entries = 0;
 FUNC_6(VAR_8);
 VAR_8->be_move_done = VAR_7;
 FUNC_2((union ctl_io *)VAR_8);
 return (VAR_0);
}
