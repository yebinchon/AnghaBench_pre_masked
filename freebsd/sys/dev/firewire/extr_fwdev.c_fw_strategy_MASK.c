
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {int dummy; } ;
struct bio {int bio_bcount; int bio_resid; int bio_flags; int bio_error; struct cdev* bio_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cdev*) ;
 int VAR_1 ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;

__attribute__((used)) static void
FUNC_3(struct bio *VAR_2)
{
 struct cdev *VAR_3;

 VAR_3 = VAR_2->bio_dev;
 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_2);
  return;
 }

 VAR_2->bio_error = VAR_1;
 VAR_2->bio_flags |= VAR_0;
 VAR_2->bio_resid = VAR_2->bio_bcount;
 FUNC_1(VAR_2);
}
