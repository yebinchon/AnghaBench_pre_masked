
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_queue_head {scalar_t__ batched; int total; int queue; int last_offset; int * insert_point; } ;
struct bio {int bio_offset; } ;


 int FUNC_0 (int *,struct bio*,int ) ;
 int VAR_0 ;

void
FUNC_1(struct bio_queue_head *VAR_1, struct bio *VAR_2)
{

 if (VAR_1->insert_point == ((void*)0))
  VAR_1->last_offset = VAR_2->bio_offset;
 FUNC_0(&VAR_1->queue, VAR_2, VAR_0);
 VAR_1->total++;
 VAR_1->batched = 0;
}
