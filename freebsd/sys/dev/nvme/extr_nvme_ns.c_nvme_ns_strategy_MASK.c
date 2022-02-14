
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_namespace {int dummy; } ;
struct bio {int bio_error; int bio_bcount; int bio_resid; int bio_flags; TYPE_1__* bio_dev; } ;
struct TYPE_2__ {struct nvme_namespace* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct nvme_namespace*,struct bio*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct bio *VAR_2)
{
 struct nvme_namespace *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->bio_dev->si_drv1;
 VAR_4 = FUNC_1(VAR_3, VAR_2, VAR_1);

 if (VAR_4) {
  VAR_2->bio_error = VAR_4;
  VAR_2->bio_flags |= VAR_0;
  VAR_2->bio_resid = VAR_2->bio_bcount;
  FUNC_0(VAR_2);
 }

}
