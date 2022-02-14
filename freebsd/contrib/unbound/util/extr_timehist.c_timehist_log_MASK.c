
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


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct timehist*,double) ;

void FUNC_2(struct timehist* VAR_0, const char* VAR_1)
{

 size_t VAR_2;
 FUNC_0("[25%%]=%g median[50%%]=%g [75%%]=%g",
  FUNC_1(VAR_0, 0.25),
  FUNC_1(VAR_0, 0.50),
  FUNC_1(VAR_0, 0.75));

 FUNC_0("lower(secs) upper(secs) %s", VAR_1);
 for(VAR_2=0; VAR_2<VAR_0->num; VAR_2++) {
  if(VAR_0->buckets[VAR_2].count != 0) {
   FUNC_0("%4d.%6.6d %4d.%6.6d %u",
    (int)VAR_0->buckets[VAR_2].lower.tv_sec,
    (int)VAR_0->buckets[VAR_2].lower.tv_usec,
    (int)VAR_0->buckets[VAR_2].upper.tv_sec,
    (int)VAR_0->buckets[VAR_2].upper.tv_usec,
    (unsigned)VAR_0->buckets[VAR_2].count);
  }
 }

}
