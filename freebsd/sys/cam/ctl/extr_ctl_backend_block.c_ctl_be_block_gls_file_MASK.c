
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kern_data_ptr; } ;
union ctl_io {TYPE_1__ scsiio; } ;
struct scsi_get_lba_status_data {TYPE_3__* descr; } ;
struct ctl_lba_len_flags {scalar_t__ lba; } ;
struct TYPE_7__ {int blocksize; } ;
struct ctl_be_block_lun {int size_bytes; TYPE_2__ cbe_lun; int vn; } ;
struct ctl_be_block_io {union ctl_io* io; } ;
typedef int off_t ;
struct TYPE_9__ {int td_ucred; } ;
struct TYPE_8__ {int status; int length; int addr; } ;


 struct ctl_lba_len_flags* FUNC_0 (union ctl_io*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int*,int ,int ,TYPE_4__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ctl_be_block_io*) ;
 TYPE_4__* VAR_5 ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void
FUNC_9(struct ctl_be_block_lun *VAR_6,
   struct ctl_be_block_io *VAR_7)
{
 union ctl_io *VAR_8 = VAR_7->io;
 struct ctl_lba_len_flags *VAR_9 = FUNC_0(VAR_8);
 struct scsi_get_lba_status_data *VAR_10;
 off_t VAR_11, VAR_12;
 int VAR_13, VAR_14;

 FUNC_1("entered\n");

 VAR_12 = VAR_11 = ((off_t)VAR_9->lba) * VAR_6->cbe_lun.blocksize;
 FUNC_8(VAR_6->vn, VAR_3 | VAR_2);
 VAR_13 = FUNC_3(VAR_6->vn, VAR_1, &VAR_12,
     0, VAR_5->td_ucred, VAR_5);
 if (VAR_13 == 0 && VAR_12 > VAR_11)
  VAR_14 = 0;
 else {
  VAR_13 = FUNC_3(VAR_6->vn, VAR_0, &VAR_12,
      0, VAR_5->td_ucred, VAR_5);
  if (VAR_13 == 0 && VAR_12 > VAR_11)
   VAR_14 = 1;
  else {
   VAR_14 = 0;
   VAR_12 = VAR_6->size_bytes;
  }
 }
 FUNC_4(VAR_6->vn, 0);

 VAR_10 = (struct scsi_get_lba_status_data *)VAR_8->scsiio.kern_data_ptr;
 FUNC_6(VAR_9->lba, VAR_10->descr[0].addr);
 FUNC_7(FUNC_2(VAR_4, VAR_12 / VAR_6->cbe_lun.blocksize -
     VAR_9->lba), VAR_10->descr[0].length);
 VAR_10->descr[0].status = VAR_14;

 FUNC_5(VAR_7);
}
