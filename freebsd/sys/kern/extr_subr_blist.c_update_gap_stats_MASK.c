
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gap_stats {scalar_t__ start; scalar_t__ max; int max_bucket; int err; scalar_t__ avg; int num; int * histo; } ;
typedef scalar_t__ daddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (struct gap_stats*) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_2(struct gap_stats *VAR_2, daddr_t VAR_3)
{
 daddr_t VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if (!FUNC_0(VAR_2)) {
  VAR_2->start = VAR_3;
  return;
 }
 VAR_4 = VAR_3 - VAR_2->start;
 VAR_2->start = VAR_0;
 if (VAR_4 > VAR_2->max)
  VAR_2->max = VAR_4;





 VAR_6 = 0;
 VAR_5 = 1;
 while (VAR_5 < FUNC_1(VAR_1) && VAR_1[VAR_5] <= VAR_4) {
  VAR_6 = VAR_5;
  VAR_5 *= 2;
 }
 if (VAR_5 >= FUNC_1(VAR_1))
  VAR_5 = FUNC_1(VAR_1);
 while (VAR_6 + 1 != VAR_5) {
  VAR_7 = (VAR_6 + VAR_5) >> 1;
  if (VAR_1[VAR_7] <= VAR_4)
   VAR_6 = VAR_7;
  else
   VAR_5 = VAR_7;
 }
 VAR_2->histo[VAR_6]++;
 if (VAR_6 > VAR_2->max_bucket)
  VAR_2->max_bucket = VAR_6;
 VAR_2->err += VAR_4 - VAR_2->avg;
 VAR_2->num++;
 VAR_2->avg += VAR_2->err / VAR_2->num;
 VAR_2->err %= VAR_2->num;
}
