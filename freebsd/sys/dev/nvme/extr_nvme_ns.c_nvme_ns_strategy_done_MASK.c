
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_completion {int dummy; } ;
struct bio {scalar_t__ bio_resid; scalar_t__ bio_bcount; int bio_flags; int bio_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct nvme_completion const*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, const struct nvme_completion *VAR_3)
{
 struct bio *VAR_4 = VAR_2;





 if (FUNC_1(VAR_3)) {
  VAR_4->bio_error = VAR_1;
  VAR_4->bio_flags |= VAR_0;
  VAR_4->bio_resid = VAR_4->bio_bcount;
 } else
  VAR_4->bio_resid = 0;

 FUNC_0(VAR_4);
}
