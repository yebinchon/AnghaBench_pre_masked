
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hist; } ;
struct ub_stats_info {TYPE_1__ svr; } ;
struct timehist {size_t num; TYPE_4__* buckets; } ;
struct TYPE_7__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_8__ {scalar_t__ count; TYPE_3__ upper; TYPE_2__ lower; } ;
typedef int RES ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int,int,int,int,unsigned long) ;
 int FUNC_2 (struct timehist*) ;
 int FUNC_3 (struct timehist*,int ,int ) ;
 struct timehist* FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(RES* VAR_1, struct ub_stats_info* VAR_2)
{
 struct timehist* VAR_3;
 size_t VAR_4;
 VAR_3 = FUNC_4();
 if(!VAR_3) {
  FUNC_0("out of memory");
  return 0;
 }
 FUNC_3(VAR_3, VAR_2->svr.hist, VAR_0);
 for(VAR_4=0; VAR_4<VAR_3->num; VAR_4++) {
  if(!FUNC_1(VAR_1,
   "histogram.%6.6d.%6.6d.to.%6.6d.%6.6d=%lu\n",
   (int)VAR_3->buckets[VAR_4].lower.tv_sec,
   (int)VAR_3->buckets[VAR_4].lower.tv_usec,
   (int)VAR_3->buckets[VAR_4].upper.tv_sec,
   (int)VAR_3->buckets[VAR_4].upper.tv_usec,
   (unsigned long)VAR_3->buckets[VAR_4].count)) {
   FUNC_2(VAR_3);
   return 0;
  }
 }
 FUNC_2(VAR_3);
 return 1;
}
