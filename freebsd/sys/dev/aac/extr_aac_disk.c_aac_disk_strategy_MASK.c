
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bio {scalar_t__ bio_bcount; scalar_t__ bio_resid; int bio_error; int bio_flags; TYPE_2__* bio_disk; } ;
struct aac_disk {TYPE_1__* ad_controller; } ;
struct TYPE_4__ {scalar_t__ d_drv1; } ;
struct TYPE_3__ {int aac_io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_3)
{
 struct aac_disk *VAR_4;

 VAR_4 = (struct aac_disk *)VAR_3->bio_disk->d_drv1;
 FUNC_2(((void*)0), VAR_2, "");


 if (VAR_4 == ((void*)0)) {
  VAR_3->bio_flags |= VAR_0;
  VAR_3->bio_error = VAR_1;
  FUNC_1(VAR_3);
  return;
 }


 if (VAR_3->bio_bcount == 0) {
  VAR_3->bio_resid = VAR_3->bio_bcount;
  FUNC_1(VAR_3);
  return;
 }




 FUNC_3(&VAR_4->ad_controller->aac_io_lock);
 FUNC_0(VAR_3);
 FUNC_4(&VAR_4->ad_controller->aac_io_lock);
}
