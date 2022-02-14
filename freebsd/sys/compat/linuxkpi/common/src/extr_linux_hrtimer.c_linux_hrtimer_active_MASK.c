
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int mtx; int callout; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool
FUNC_3(struct hrtimer *VAR_0)
{
 bool VAR_1;

 FUNC_1(&VAR_0->mtx);
 VAR_1 = FUNC_0(&VAR_0->callout);
 FUNC_2(&VAR_0->mtx);

 return (VAR_1);
}
