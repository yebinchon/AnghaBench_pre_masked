
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_queue_head {int queue; } ;
struct bio {int dummy; } ;


 struct bio* FUNC_0 (int *) ;

struct bio *
FUNC_1(struct bio_queue_head *VAR_0)
{

 return (FUNC_0(&VAR_0->queue));
}
