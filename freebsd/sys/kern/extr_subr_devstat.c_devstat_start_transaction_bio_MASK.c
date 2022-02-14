
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devstat {int dummy; } ;
struct bio {int bio_t0; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct devstat*,int *) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(struct devstat *VAR_2, struct bio *VAR_3)
{

 FUNC_3(&VAR_1, VAR_0);


 if (VAR_2 == ((void*)0))
  return;

 FUNC_1(&VAR_3->bio_t0);
 FUNC_2(VAR_2, &VAR_3->bio_t0);
 FUNC_0();
}
