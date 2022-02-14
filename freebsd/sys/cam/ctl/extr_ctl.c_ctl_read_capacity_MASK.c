
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef scalar_t__ uint32_t ;
struct scsi_read_capacity_data {int length; int addr; } ;
struct scsi_read_capacity {int pmi; int addr; } ;
struct TYPE_4__ {int flags; } ;
struct ctl_scsiio {int kern_data_len; int kern_total_len; int be_move_done; TYPE_2__ io_hdr; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; scalar_t__ kern_data_ptr; scalar_t__ cdb; } ;
struct ctl_lun {TYPE_1__* be_lun; } ;
struct TYPE_3__ {int maxlba; int blocksize; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (union ctl_io*) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (struct ctl_scsiio*,int,int,int,int ,int ) ;
 int FUNC_5 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_6 (int,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;

int
FUNC_9(struct ctl_scsiio *VAR_7)
{
 struct ctl_lun *VAR_8 = FUNC_1(VAR_7);
 struct scsi_read_capacity *VAR_9;
 struct scsi_read_capacity_data *VAR_10;
 uint32_t VAR_11;

 FUNC_0(("ctl_read_capacity\n"));

 VAR_9 = (struct scsi_read_capacity *)VAR_7->cdb;

 VAR_11 = FUNC_7(VAR_9->addr);
 if (((VAR_9->pmi & VAR_5) == 0)
  && (VAR_11 != 0)) {
  FUNC_4( VAR_7,
                        1,
                      1,
                    2,
                        0,
                  0);
  FUNC_3((union ctl_io *)VAR_7);
  return (VAR_1);
 }

 VAR_7->kern_data_ptr = FUNC_6(sizeof(*VAR_10), VAR_2, VAR_3 | VAR_4);
 VAR_10 = (struct scsi_read_capacity_data *)VAR_7->kern_data_ptr;
 VAR_7->kern_data_len = sizeof(*VAR_10);
 VAR_7->kern_total_len = sizeof(*VAR_10);
 VAR_7->kern_rel_offset = 0;
 VAR_7->kern_sg_entries = 0;






 if (VAR_8->be_lun->maxlba > 0xfffffffe)
  FUNC_8(0xffffffff, VAR_10->addr);
 else
  FUNC_8(VAR_8->be_lun->maxlba, VAR_10->addr);




 FUNC_8(VAR_8->be_lun->blocksize, VAR_10->length);

 FUNC_5(VAR_7);
 VAR_7->io_hdr.flags |= VAR_0;
 VAR_7->be_move_done = VAR_6;
 FUNC_2((union ctl_io *)VAR_7);
 return (VAR_1);
}
