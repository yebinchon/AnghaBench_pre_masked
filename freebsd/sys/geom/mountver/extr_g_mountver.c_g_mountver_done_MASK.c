
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_geom {int provider; } ;
struct bio {scalar_t__ bio_error; scalar_t__ bio_to; int bio_inbed; struct bio* bio_parent; TYPE_1__* bio_from; } ;
struct TYPE_2__ {struct g_geom* geom; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_1)
{
 struct g_geom *VAR_2;
 struct bio *VAR_3;

 if (VAR_1->bio_error != VAR_0) {
  FUNC_4(VAR_1);
  return;
 }







 VAR_2 = VAR_1->bio_from->geom;

 VAR_3 = VAR_1->bio_parent;
 FUNC_0(VAR_3->bio_to == FUNC_1(&VAR_2->provider),
     ("parent request was for someone else"));
 FUNC_2(VAR_1);
 VAR_3->bio_inbed++;
 FUNC_3(VAR_3);
}
