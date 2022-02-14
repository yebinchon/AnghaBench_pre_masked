
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devstat {int dummy; } ;
struct bio {int bio_error; int bio_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct devstat*,struct bio*) ;

void
FUNC_2(struct bio *VAR_1, struct devstat *VAR_2, int VAR_3)
{

 if (VAR_3) {
  VAR_1->bio_error = VAR_3;
  VAR_1->bio_flags |= VAR_0;
 }
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_1);
}
