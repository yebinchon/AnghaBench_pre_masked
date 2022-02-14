
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_queue_head {scalar_t__ batched; scalar_t__ total; int * insert_point; scalar_t__ last_offset; int queue; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct bio_queue_head *VAR_0)
{

 FUNC_0(&VAR_0->queue);
 VAR_0->last_offset = 0;
 VAR_0->insert_point = ((void*)0);
 VAR_0->total = 0;
 VAR_0->batched = 0;
}
