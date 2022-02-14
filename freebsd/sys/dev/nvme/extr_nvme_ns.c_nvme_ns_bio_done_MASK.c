
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_completion {int dummy; } ;
struct bio {int bio_flags; scalar_t__ bio_error; scalar_t__ bio_bcount; scalar_t__ bio_resid; scalar_t__ bio_driver2; int (* bio_driver1 ) (struct bio*,struct nvme_completion const*) ;} ;
typedef int (* nvme_cb_fn_t ) (struct bio*,struct nvme_completion const*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct nvme_completion const*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, const struct nvme_completion *VAR_4)
{
 struct bio *VAR_5 = VAR_3;
 nvme_cb_fn_t VAR_6;

 VAR_6 = VAR_5->bio_driver1;

 if (VAR_5->bio_driver2)
  FUNC_0(VAR_5->bio_driver2, VAR_2);

 if (FUNC_1(VAR_4)) {
  VAR_5->bio_flags |= VAR_0;
  if (VAR_5->bio_error == 0)
   VAR_5->bio_error = VAR_1;
 }

 if ((VAR_5->bio_flags & VAR_0) == 0)
  VAR_5->bio_resid = 0;
 else
  VAR_5->bio_resid = VAR_5->bio_bcount;

 VAR_6(VAR_5, VAR_4);
}
