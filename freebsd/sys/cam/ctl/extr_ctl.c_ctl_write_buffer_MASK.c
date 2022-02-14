
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_write_buffer {int offset; int length; } ;
struct TYPE_2__ {int flags; } ;
struct ctl_scsiio {int kern_data_len; int kern_total_len; int be_move_done; TYPE_1__ io_hdr; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; int * kern_data_ptr; scalar_t__ cdb; } ;
struct ctl_lun {int * write_buffer; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (union ctl_io*) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (struct ctl_scsiio*,int,int,int,int ,int ) ;
 int FUNC_5 (struct ctl_scsiio*) ;
 int * FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct ctl_scsiio *VAR_6)
{
 struct ctl_lun *VAR_7 = FUNC_1(VAR_6);
 struct scsi_write_buffer *VAR_8;
 int VAR_9, VAR_10;

 FUNC_0(("ctl_write_buffer\n"));

 VAR_8 = (struct scsi_write_buffer *)VAR_6->cdb;

 VAR_10 = FUNC_7(VAR_8->length);
 VAR_9 = FUNC_7(VAR_8->offset);

 if (VAR_9 + VAR_10 > VAR_2) {
  FUNC_4(VAR_6,
                        1,
                      1,
                    6,
                        0,
                  0);
  FUNC_3((union ctl_io *)VAR_6);
  return (VAR_1);
 }





 if ((VAR_6->io_hdr.flags & VAR_0) == 0) {
  if (VAR_7->write_buffer == ((void*)0)) {
   VAR_7->write_buffer = FUNC_6(VAR_2,
       VAR_3, VAR_4);
  }
  VAR_6->kern_data_ptr = VAR_7->write_buffer + VAR_9;
  VAR_6->kern_data_len = VAR_10;
  VAR_6->kern_total_len = VAR_10;
  VAR_6->kern_rel_offset = 0;
  VAR_6->kern_sg_entries = 0;
  VAR_6->io_hdr.flags |= VAR_0;
  VAR_6->be_move_done = VAR_5;
  FUNC_2((union ctl_io *)VAR_6);

  return (VAR_1);
 }

 FUNC_5(VAR_6);
 FUNC_3((union ctl_io *)VAR_6);
 return (VAR_1);
}
