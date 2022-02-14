
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int mtx; int callout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (struct hrtimer*,int ,int) ;
 int FUNC_2 (int *,char*,int *,int) ;

void
FUNC_3(struct hrtimer *VAR_3)
{

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 FUNC_2(&VAR_3->mtx, "hrtimer", ((void*)0),
     VAR_0 | VAR_2 | VAR_1);
 FUNC_0(&VAR_3->callout, &VAR_3->mtx, 0);
}
