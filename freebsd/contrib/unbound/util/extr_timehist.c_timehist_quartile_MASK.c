
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timehist {size_t num; TYPE_3__* buckets; } ;
struct TYPE_5__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {scalar_t__ count; TYPE_2__ upper; TYPE_1__ lower; } ;


 scalar_t__ FUNC_0 (struct timehist*) ;

double
FUNC_1(struct timehist* VAR_0, double VAR_1)
{
 double VAR_2, VAR_3, VAR_4;
 double VAR_5 = 0, VAR_6 = 0;
 size_t VAR_7;
 if(!VAR_0 || VAR_0->num == 0)
  return 0.;

 VAR_2 = (double)FUNC_0(VAR_0);
 if(VAR_2 < 4)
  return 0.;
 VAR_2 *= VAR_1;
 VAR_3 = 0;
 VAR_7 = 0;
 while(VAR_7+1 < VAR_0->num &&
  VAR_3+(double)VAR_0->buckets[VAR_7].count < VAR_2) {
  VAR_3 += (double)VAR_0->buckets[VAR_7++].count;
 }


 VAR_5 = (double)VAR_0->buckets[VAR_7].lower.tv_sec +
  (double)VAR_0->buckets[VAR_7].lower.tv_usec/1000000.;
 VAR_6 = (double)VAR_0->buckets[VAR_7].upper.tv_sec +
  (double)VAR_0->buckets[VAR_7].upper.tv_usec/1000000.;

 VAR_4 = (VAR_2 - VAR_3)*(VAR_6-VAR_5)/((double)VAR_0->buckets[VAR_7].count);
 return VAR_5+VAR_4;
}
