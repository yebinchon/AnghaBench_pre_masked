
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timehist {int num; struct th_buck* buckets; } ;
struct th_buck {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct timehist*) ;
 int FUNC_2 (struct timehist*) ;

struct timehist* FUNC_3(void)
{
 struct timehist* VAR_1 = (struct timehist*)FUNC_0(1,
  sizeof(struct timehist));
 if(!VAR_1)
  return ((void*)0);
 VAR_1->num = VAR_0;
 VAR_1->buckets = (struct th_buck*)FUNC_0(VAR_1->num,
  sizeof(struct th_buck));
 if(!VAR_1->buckets) {
  FUNC_2(VAR_1);
  return ((void*)0);
 }

 FUNC_1(VAR_1);
 return VAR_1;
}
