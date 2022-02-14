
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int mtx; int precision; int callout; } ;
typedef int ktime_t ;


 int FUNC_0 (int *,int ,int ,int ,struct hrtimer*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct hrtimer *VAR_1, ktime_t VAR_2)
{

 FUNC_2(&VAR_1->mtx);
 FUNC_0(&VAR_1->callout, FUNC_4(FUNC_1(VAR_2)),
     FUNC_4(VAR_1->precision), VAR_0, VAR_1, 0);
 FUNC_3(&VAR_1->mtx);
}
