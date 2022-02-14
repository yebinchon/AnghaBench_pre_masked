
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uoff_t ;
struct bio_queue_head {scalar_t__ batched; int total; int queue; struct bio* insert_point; } ;
struct bio {int bio_flags; scalar_t__ bio_cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct bio* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct bio*,struct bio*,int ) ;
 int FUNC_2 (int *,struct bio*,int ) ;
 struct bio* FUNC_3 (struct bio*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (struct bio_queue_head*,struct bio*) ;
 int FUNC_5 (struct bio_queue_head*,struct bio*) ;

void
FUNC_6(struct bio_queue_head *VAR_6, struct bio *VAR_7)
{
 struct bio *VAR_8, *VAR_9;
 uoff_t VAR_10;

 if ((VAR_7->bio_flags & VAR_1) != 0) {






  FUNC_5(VAR_6, VAR_7);
  return;
 }






 if (VAR_7->bio_cmd != VAR_2 && VAR_7->bio_cmd != VAR_3 &&
     VAR_7->bio_cmd != VAR_0) {
  FUNC_5(VAR_6, VAR_7);
  return;
 }

 if (VAR_5 > 0 && VAR_6->batched > VAR_5) {
  FUNC_5(VAR_6, VAR_7);
  return;
 }

 VAR_9 = ((void*)0);
 VAR_10 = FUNC_4(VAR_6, VAR_7);
 VAR_8 = FUNC_0(&VAR_6->queue);

 if (VAR_6->insert_point) {
  VAR_9 = VAR_6->insert_point;
  VAR_8 = FUNC_3(VAR_6->insert_point, VAR_4);
 }

 while (VAR_8 != ((void*)0) && VAR_10 >= FUNC_4(VAR_6, VAR_8)) {
  VAR_9 = VAR_8;
  VAR_8 = FUNC_3(VAR_8, VAR_4);
 }

 if (VAR_9 == ((void*)0))
  FUNC_2(&VAR_6->queue, VAR_7, VAR_4);
 else
  FUNC_1(&VAR_6->queue, VAR_9, VAR_7, VAR_4);
 VAR_6->total++;
 VAR_6->batched++;
}
