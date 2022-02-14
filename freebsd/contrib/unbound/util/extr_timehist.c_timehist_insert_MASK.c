
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct timehist {size_t num; TYPE_1__* buckets; } ;
struct TYPE_2__ {int count; int upper; } ;


 scalar_t__ FUNC_0 (struct timeval*,int *) ;

void FUNC_1(struct timehist* VAR_0, struct timeval* VAR_1)
{
 size_t VAR_2;
 for(VAR_2=0; VAR_2<VAR_0->num; VAR_2++) {
  if(FUNC_0(VAR_1, &VAR_0->buckets[VAR_2].upper)) {
   VAR_0->buckets[VAR_2].count++;
   return;
  }
 }

 VAR_0->buckets[VAR_0->num-1].count++;
}
