
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvd_disk {scalar_t__ ordered_in_flight; scalar_t__ cur_depth; int bioqtask; int tq; int bioqlock; int bioq; } ;
struct bio {int bio_flags; TYPE_1__* bio_disk; } ;
struct TYPE_2__ {scalar_t__ d_drv1; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__*,int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,struct bio*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nvd_disk*,struct bio*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct bio *VAR_1)
{
 struct nvd_disk *VAR_2 = (struct nvd_disk *)VAR_1->bio_disk->d_drv1;





 if (FUNC_0(VAR_1->bio_flags & VAR_0)) {
  if (FUNC_2(&VAR_2->ordered_in_flight, 1) == 0 &&
      VAR_2->cur_depth == 0 && FUNC_3(&VAR_2->bioq) == ((void*)0)) {
   FUNC_7(VAR_2, VAR_1);
   return;
  }
 } else if (FUNC_1(VAR_2->ordered_in_flight == 0)) {
  FUNC_7(VAR_2, VAR_1);
  return;
 }





 FUNC_5(&VAR_2->bioqlock);
 FUNC_4(&VAR_2->bioq, VAR_1);
 FUNC_6(&VAR_2->bioqlock);
 FUNC_8(VAR_2->tq, &VAR_2->bioqtask);
}
