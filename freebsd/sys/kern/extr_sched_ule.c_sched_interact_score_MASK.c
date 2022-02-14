
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct td_sched {int ts_runtime; int ts_slptime; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 struct td_sched* FUNC_1 (struct thread*) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_2)
{
 struct td_sched *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2);





 if (VAR_1 <= VAR_0 &&
  VAR_3->ts_runtime >= VAR_3->ts_slptime)
   return (VAR_0);

 if (VAR_3->ts_runtime > VAR_3->ts_slptime) {
  VAR_4 = FUNC_0(1, VAR_3->ts_runtime / VAR_0);
  return (VAR_0 +
      (VAR_0 - (VAR_3->ts_slptime / VAR_4)));
 }
 if (VAR_3->ts_slptime > VAR_3->ts_runtime) {
  VAR_4 = FUNC_0(1, VAR_3->ts_slptime / VAR_0);
  return (VAR_3->ts_runtime / VAR_4);
 }

 if (VAR_3->ts_runtime)
  return (VAR_0);




 return (0);

}
