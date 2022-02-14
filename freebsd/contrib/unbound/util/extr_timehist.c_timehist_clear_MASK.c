
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timehist {size_t num; TYPE_1__* buckets; } ;
struct TYPE_2__ {scalar_t__ count; } ;



void FUNC_0(struct timehist* VAR_0)
{
 size_t VAR_1;
 for(VAR_1=0; VAR_1<VAR_0->num; VAR_1++)
  VAR_0->buckets[VAR_1].count = 0;
}
