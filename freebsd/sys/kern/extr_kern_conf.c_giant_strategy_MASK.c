
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdevsw {TYPE_1__* d_gianttrick; } ;
struct cdev {int dummy; } ;
struct bio {struct cdev* bio_dev; } ;
struct TYPE_2__ {int (* d_strategy ) (struct bio*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*,int *,int ) ;
 struct cdevsw* FUNC_1 (struct cdev*,int*) ;
 int FUNC_2 (struct cdev*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bio*) ;

__attribute__((used)) static void
FUNC_6(struct bio *VAR_2)
{
 struct cdevsw *VAR_3;
 struct cdev *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->bio_dev;
 VAR_3 = FUNC_1(VAR_4, &VAR_5);
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_2, ((void*)0), VAR_0);
  return;
 }
 FUNC_3(&VAR_1);
 VAR_3->d_gianttrick->d_strategy(VAR_2);
 FUNC_4(&VAR_1);
 FUNC_2(VAR_4, VAR_5);
}
