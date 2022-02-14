
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kern_data_ptr; } ;
union ctl_io {TYPE_1__ scsiio; } ;
struct scsi_get_lba_status_data {TYPE_3__* descr; } ;
struct ctl_lba_len_flags {scalar_t__ lba; } ;
struct TYPE_5__ {int blocksize; } ;
struct ctl_be_block_lun {int size_bytes; TYPE_2__ cbe_lun; int vn; } ;
struct ctl_be_block_io {union ctl_io* io; } ;
struct cdevsw {int (* d_ioctl ) (struct cdev*,int ,int ,int ,int ) ;} ;
struct cdev {int dummy; } ;
typedef int off_t ;
typedef int caddr_t ;
struct TYPE_6__ {int status; int length; int addr; } ;


 struct ctl_lba_len_flags* FUNC_0 (union ctl_io*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (struct ctl_be_block_io*) ;
 int VAR_4 ;
 int FUNC_4 (struct cdev*,int) ;
 struct cdevsw* FUNC_5 (int ,struct cdev**,int*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct cdev*,int ,int ,int ,int ) ;
 int FUNC_9 (struct cdev*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(struct ctl_be_block_lun *VAR_5,
   struct ctl_be_block_io *VAR_6)
{
 union ctl_io *VAR_7 = VAR_6->io;
 struct cdevsw *VAR_8;
 struct cdev *VAR_9;
 struct ctl_lba_len_flags *VAR_10 = FUNC_0(VAR_7);
 struct scsi_get_lba_status_data *VAR_11;
 off_t VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;

 FUNC_1("entered\n");

 VAR_8 = FUNC_5(VAR_5->vn, &VAR_9, &VAR_15);
 if (VAR_8 == ((void*)0)) {
  VAR_16 = 0;
  VAR_13 = VAR_5->size_bytes;
  goto done;
 }
 VAR_13 = VAR_12 = ((off_t)VAR_10->lba) * VAR_5->cbe_lun.blocksize;
 VAR_14 = VAR_8->d_ioctl(VAR_9, VAR_1, (caddr_t)&VAR_13, VAR_2,
     VAR_4);
 if (VAR_14 == 0 && VAR_13 > VAR_12)
  VAR_16 = 0;
 else {
  VAR_14 = VAR_8->d_ioctl(VAR_9, VAR_0, (caddr_t)&VAR_13, VAR_2,
      VAR_4);
  if (VAR_14 == 0 && VAR_13 > VAR_12)
   VAR_16 = 1;
  else {
   VAR_16 = 0;
   VAR_13 = VAR_5->size_bytes;
  }
 }
 FUNC_4(VAR_9, VAR_15);

done:
 VAR_11 = (struct scsi_get_lba_status_data *)VAR_7->scsiio.kern_data_ptr;
 FUNC_6(VAR_10->lba, VAR_11->descr[0].addr);
 FUNC_7(FUNC_2(VAR_3, VAR_13 / VAR_5->cbe_lun.blocksize -
     VAR_10->lba), VAR_11->descr[0].length);
 VAR_11->descr[0].status = VAR_16;

 FUNC_3(VAR_6);
}
