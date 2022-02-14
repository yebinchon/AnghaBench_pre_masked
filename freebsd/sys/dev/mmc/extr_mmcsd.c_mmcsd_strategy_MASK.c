
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmcsd_part {scalar_t__ running; scalar_t__ suspend; int bio_queue; } ;
struct bio {TYPE_1__* bio_disk; } ;
struct TYPE_2__ {struct mmcsd_part* d_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmcsd_part*) ;
 int FUNC_1 (struct mmcsd_part*) ;
 int FUNC_2 (struct bio*,int *,int ) ;
 int FUNC_3 (int *,struct bio*) ;
 int FUNC_4 (struct mmcsd_part*) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_1)
{
 struct mmcsd_part *VAR_2;

 VAR_2 = VAR_1->bio_disk->d_drv1;
 FUNC_0(VAR_2);
 if (VAR_2->running > 0 || VAR_2->suspend > 0) {
  FUNC_3(&VAR_2->bio_queue, VAR_1);
  FUNC_1(VAR_2);
  FUNC_4(VAR_2);
 } else {
  FUNC_1(VAR_2);
  FUNC_2(VAR_1, ((void*)0), VAR_0);
 }
}
