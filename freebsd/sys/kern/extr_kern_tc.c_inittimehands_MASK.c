
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timehands {struct timehands* th_next; } ;


 int FUNC_0 (char*,int*) ;
 int FUNC_1 (struct timehands*) ;
 struct timehands* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct timehands *VAR_3;
 int VAR_4;

 FUNC_0("kern.timecounter.timehands_count",
     &VAR_1);
 if (VAR_1 < 1)
  VAR_1 = 1;
 if (VAR_1 > FUNC_1(VAR_0))
  VAR_1 = FUNC_1(VAR_0);
 for (VAR_4 = 1, VAR_3 = &VAR_0[0]; VAR_4 < VAR_1; VAR_3 = &VAR_0[VAR_4++])
  VAR_3->th_next = &VAR_0[VAR_4];
 VAR_3->th_next = &VAR_0[0];
}
