
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_be_block_lun {int vn; int io_lock; int disk_stats; } ;
struct ctl_be_block_io {int num_bios_sent; int send_complete; int ds_t0; } ;
struct cdevsw {int (* d_strategy ) (struct bio*) ;} ;
struct cdev {int dummy; } ;
struct bio {int bio_error; struct cdev* bio_dev; scalar_t__ bio_pblkno; struct ctl_be_block_io* bio_caller1; int (* bio_done ) (struct bio*) ;scalar_t__ bio_data; scalar_t__ bio_offset; int bio_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct cdev*,int) ;
 int FUNC_4 (int ,int *) ;
 struct cdevsw* FUNC_5 (int ,struct cdev**,int*) ;
 struct bio* FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct bio*) ;

__attribute__((used)) static void
FUNC_10(struct ctl_be_block_lun *VAR_2,
         struct ctl_be_block_io *VAR_3)
{
 struct bio *VAR_4;
 struct cdevsw *VAR_5;
 struct cdev *VAR_6;
 int VAR_7;

 FUNC_0("entered\n");


 VAR_4 = FUNC_6();

 VAR_4->bio_cmd = VAR_0;
 VAR_4->bio_offset = 0;
 VAR_4->bio_data = 0;
 VAR_4->bio_done = FUNC_2;
 VAR_4->bio_caller1 = VAR_3;
 VAR_4->bio_pblkno = 0;






 VAR_3->num_bios_sent = 1;
 VAR_3->send_complete = 1;

 FUNC_1(&VAR_3->ds_t0);
 FUNC_7(&VAR_2->io_lock);
 FUNC_4(VAR_2->disk_stats, &VAR_3->ds_t0);
 FUNC_8(&VAR_2->io_lock);

 VAR_5 = FUNC_5(VAR_2->vn, &VAR_6, &VAR_7);
 if (VAR_5) {
  VAR_4->bio_dev = VAR_6;
  VAR_5->d_strategy(VAR_4);
  FUNC_3(VAR_6, VAR_7);
 } else {
  VAR_4->bio_error = VAR_1;
  FUNC_2(VAR_4);
 }
}
