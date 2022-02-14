
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {scalar_t__ si_threadcount; int si_name; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct cdev *VAR_2, int VAR_3)
{

 FUNC_2(&VAR_1, VAR_0);
 if (!VAR_3)
  return;
 FUNC_0(VAR_2->si_threadcount > 0,
     ("%s threadcount is wrong", VAR_2->si_name));
 FUNC_1(&VAR_2->si_threadcount, 1);
}
