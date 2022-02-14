
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devstat {int dummy; } ;
struct bio_queue_head {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*,struct devstat*,int) ;
 struct bio* FUNC_1 (struct bio_queue_head*) ;

void
FUNC_2(struct bio_queue_head *VAR_0, struct devstat *VAR_1, int VAR_2)
{
 struct bio *VAR_3;

 while ((VAR_3 = FUNC_1(VAR_0)) != ((void*)0))
  FUNC_0(VAR_3, VAR_1, VAR_2);
}
