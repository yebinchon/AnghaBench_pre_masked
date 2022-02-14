
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {int dummy; } ;
struct cdevsw {TYPE_1__* d_gianttrick; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int (* d_kqfilter ) (struct cdev*,struct knote*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct cdevsw* FUNC_0 (struct cdev*,int*) ;
 int FUNC_1 (struct cdev*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cdev*,struct knote*) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_2, struct knote *VAR_3)
{
 struct cdevsw *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_2, &VAR_5);
 if (VAR_4 == ((void*)0))
  return (VAR_0);
 FUNC_2(&VAR_1);
 VAR_6 = VAR_4->d_gianttrick->d_kqfilter(VAR_2, VAR_3);
 FUNC_3(&VAR_1);
 FUNC_1(VAR_2, VAR_5);
 return (VAR_6);
}
