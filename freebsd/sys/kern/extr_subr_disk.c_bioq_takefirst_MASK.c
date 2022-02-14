
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_queue_head {int queue; } ;
struct bio {int dummy; } ;


 struct bio* FUNC_0 (int *) ;
 int FUNC_1 (struct bio_queue_head*,struct bio*) ;

struct bio *
FUNC_2(struct bio_queue_head *VAR_0)
{
 struct bio *VAR_1;

 VAR_1 = FUNC_0(&VAR_0->queue);
 if (VAR_1 != ((void*)0))
  FUNC_1(VAR_0, VAR_1);
 return (VAR_1);
}
