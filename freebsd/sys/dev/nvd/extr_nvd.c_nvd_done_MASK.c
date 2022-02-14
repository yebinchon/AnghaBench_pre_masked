
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_completion {int dummy; } ;
struct nvd_disk {scalar_t__ cur_depth; scalar_t__ ordered_in_flight; } ;
struct bio {int bio_flags; TYPE_1__* bio_disk; } ;
struct TYPE_2__ {struct nvd_disk* d_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2, const struct nvme_completion *VAR_3)
{
 struct bio *VAR_4 = (struct bio *)VAR_2;
 struct nvd_disk *VAR_5 = VAR_4->bio_disk->d_drv1;

 if (FUNC_0(VAR_4->bio_flags & VAR_0)) {
  FUNC_1(&VAR_5->cur_depth, -VAR_1);
  FUNC_1(&VAR_5->ordered_in_flight, -1);
  FUNC_4(&VAR_5->cur_depth);
 } else {
  if (FUNC_2(&VAR_5->cur_depth, -1) == 1 &&
      FUNC_0(VAR_5->ordered_in_flight != 0))
   FUNC_4(&VAR_5->cur_depth);
 }

 FUNC_3(VAR_4);
}
