
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ blocksize; } ;
struct ctl_be_block_lun {int io_lock; TYPE_1__ cbe_lun; int vn; } ;
struct ctl_be_block_io {int send_complete; int num_bios_sent; } ;
struct cdevsw {int (* d_strategy ) (struct bio*) ;} ;
struct cdev {int dummy; } ;
struct bio {scalar_t__ bio_length; int bio_error; scalar_t__ bio_pblkno; struct ctl_be_block_io* bio_caller1; int (* bio_done ) (struct bio*) ;scalar_t__ bio_data; scalar_t__ bio_offset; struct cdev* bio_dev; int bio_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct cdev*,int) ;
 struct cdevsw* FUNC_3 (int ,struct cdev**,int*) ;
 struct bio* FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct bio*) ;

__attribute__((used)) static void
FUNC_8(struct ctl_be_block_lun *VAR_3,
         struct ctl_be_block_io *VAR_4,
         uint64_t VAR_5, uint64_t VAR_6, int VAR_7)
{
 struct bio *VAR_8;
 uint64_t VAR_9;
 struct cdevsw *VAR_10;
 struct cdev *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_3(VAR_3->vn, &VAR_11, &VAR_12);
 VAR_9 = VAR_2 - (VAR_2 % VAR_3->cbe_lun.blocksize);
 while (VAR_6 > 0) {
  VAR_8 = FUNC_4();
  VAR_8->bio_cmd = VAR_0;
  VAR_8->bio_dev = VAR_11;
  VAR_8->bio_offset = VAR_5;
  VAR_8->bio_length = FUNC_0(VAR_6, VAR_9);
  VAR_8->bio_data = 0;
  VAR_8->bio_done = FUNC_1;
  VAR_8->bio_caller1 = VAR_4;
  VAR_8->bio_pblkno = VAR_5 / VAR_3->cbe_lun.blocksize;

  VAR_5 += VAR_8->bio_length;
  VAR_6 -= VAR_8->bio_length;

  FUNC_5(&VAR_3->io_lock);
  VAR_4->num_bios_sent++;
  if (VAR_7 && VAR_6 == 0)
   VAR_4->send_complete = 1;
  FUNC_6(&VAR_3->io_lock);

  if (VAR_10) {
   VAR_10->d_strategy(VAR_8);
  } else {
   VAR_8->bio_error = VAR_1;
   FUNC_1(VAR_8);
  }
 }
 if (VAR_10)
  FUNC_2(VAR_11, VAR_12);
}
