
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


 int FUNC_0 (char*,int,int,int,int,unsigned int) ;

void FUNC_1(struct timehist* VAR_0)
{

 size_t VAR_1;
 for(VAR_1=0; VAR_1<VAR_0->num; VAR_1++) {
  if(VAR_0->buckets[VAR_1].count != 0) {
   FUNC_0("%4d.%6.6d %4d.%6.6d %u\n",
    (int)VAR_0->buckets[VAR_1].lower.tv_sec,
    (int)VAR_0->buckets[VAR_1].lower.tv_usec,
    (int)VAR_0->buckets[VAR_1].upper.tv_sec,
    (int)VAR_0->buckets[VAR_1].upper.tv_usec,
    (unsigned)VAR_0->buckets[VAR_1].count);
  }
 }

}
