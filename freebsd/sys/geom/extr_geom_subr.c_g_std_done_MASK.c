
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {scalar_t__ bio_error; scalar_t__ bio_inbed; scalar_t__ bio_children; scalar_t__ bio_completed; struct bio* bio_parent; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,scalar_t__) ;

void
FUNC_2(struct bio *VAR_0)
{
 struct bio *VAR_1;

 VAR_1 = VAR_0->bio_parent;
 if (VAR_1->bio_error == 0)
  VAR_1->bio_error = VAR_0->bio_error;
 VAR_1->bio_completed += VAR_0->bio_completed;
 FUNC_0(VAR_0);
 VAR_1->bio_inbed++;
 if (VAR_1->bio_children == VAR_1->bio_inbed)
  FUNC_1(VAR_1, VAR_1->bio_error);
}
