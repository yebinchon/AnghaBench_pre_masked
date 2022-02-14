
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfi_frame_header {int dummy; } ;
struct mfi_disk {int dummy; } ;
struct bio {int bio_flags; scalar_t__ bio_error; scalar_t__ bio_resid; scalar_t__ bio_bcount; struct mfi_frame_header* bio_driver1; TYPE_1__* bio_disk; } ;
struct TYPE_2__ {struct mfi_disk* d_drv1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,char*,int,int) ;

void
FUNC_2(struct bio *VAR_2)
{
 struct mfi_disk *VAR_3;
 struct mfi_frame_header *VAR_4;

 VAR_3 = VAR_2->bio_disk->d_drv1;
 VAR_4 = VAR_2->bio_driver1;

 if (VAR_2->bio_flags & VAR_0) {
  VAR_2->bio_resid = VAR_2->bio_bcount;
  if (VAR_2->bio_error == 0)
   VAR_2->bio_error = VAR_1;
  FUNC_1(VAR_2, "hard error", -1, 1);
 } else {
  VAR_2->bio_resid = 0;
 }
 FUNC_0(VAR_2);
}
