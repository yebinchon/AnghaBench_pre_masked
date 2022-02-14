
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_tr_object {int dummy; } ;
struct g_raid_subdisk {int dummy; } ;
struct bio {scalar_t__ bio_error; scalar_t__ bio_inbed; scalar_t__ bio_children; int bio_length; int bio_completed; struct bio* bio_parent; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct g_raid_tr_object *VAR_0,
    struct g_raid_subdisk *VAR_1,struct bio *VAR_2)
{
 struct bio *VAR_3;

 VAR_3 = VAR_2->bio_parent;
 if (VAR_3->bio_error == 0)
  VAR_3->bio_error = VAR_2->bio_error;
 FUNC_0(VAR_2);
 VAR_3->bio_inbed++;
 if (VAR_3->bio_children == VAR_3->bio_inbed) {
  VAR_3->bio_completed = VAR_3->bio_length;
  FUNC_1(VAR_3, VAR_3->bio_error);
 }
}
