
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timehist {size_t num; TYPE_1__* buckets; } ;
struct TYPE_2__ {scalar_t__ count; } ;



void
FUNC_0(struct timehist* VAR_0, long long* VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 if(!VAR_0) return;
 if(VAR_2 > VAR_0->num)
  VAR_2 = VAR_0->num;
 for(VAR_3=0; VAR_3<VAR_2; VAR_3++)
  VAR_1[VAR_3] = (long long)VAR_0->buckets[VAR_3].count;
}
