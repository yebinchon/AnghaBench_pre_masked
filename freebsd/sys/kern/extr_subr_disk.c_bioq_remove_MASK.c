
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_queue_head {int total; int queue; struct bio* insert_point; scalar_t__ last_offset; } ;
struct bio {scalar_t__ bio_length; scalar_t__ bio_offset; } ;


 struct bio* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct bio*,int ) ;
 int VAR_0 ;

void
FUNC_2(struct bio_queue_head *VAR_1, struct bio *VAR_2)
{

 if (VAR_1->insert_point == ((void*)0)) {
  if (VAR_2 == FUNC_0(&VAR_1->queue))
   VAR_1->last_offset = VAR_2->bio_offset + VAR_2->bio_length;
 } else if (VAR_2 == VAR_1->insert_point)
  VAR_1->insert_point = ((void*)0);

 FUNC_1(&VAR_1->queue, VAR_2, VAR_0);
 VAR_1->total--;
}
