
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rt_rq {int rt_throttled; scalar_t__ rt_time; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rt_rq*) ;
 int FUNC_1 (struct rt_rq*) ;
 scalar_t__ FUNC_2 (struct rt_rq*) ;
 int FUNC_3 (struct rt_rq*) ;
 scalar_t__ FUNC_4 (struct rt_rq*) ;

__attribute__((used)) static int FUNC_5(struct rt_rq *VAR_1)
{
 u64 VAR_2 = FUNC_4(VAR_1);

 if (VAR_1->rt_throttled)
  return FUNC_1(VAR_1);

 if (FUNC_4(VAR_1) >= FUNC_2(VAR_1))
  return 0;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2 == VAR_0)
  return 0;

 if (VAR_1->rt_time > VAR_2) {
  VAR_1->rt_throttled = 1;
  if (FUNC_1(VAR_1)) {
   FUNC_3(VAR_1);
   return 1;
  }
 }

 return 0;
}
