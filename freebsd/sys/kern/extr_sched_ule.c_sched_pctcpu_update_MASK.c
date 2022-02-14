
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct td_sched {int ts_ltick; int ts_ticks; int ts_ftick; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct td_sched *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_3;





 if ((u_int)(VAR_6 - VAR_4->ts_ltick) >= VAR_2) {
  VAR_4->ts_ticks = 0;
  VAR_4->ts_ftick = VAR_6 - VAR_2;
 } else if (VAR_6 - VAR_4->ts_ftick >= VAR_0) {
  VAR_4->ts_ticks = (VAR_4->ts_ticks / (VAR_4->ts_ltick - VAR_4->ts_ftick)) *
      (VAR_4->ts_ltick - (VAR_6 - VAR_2));
  VAR_4->ts_ftick = VAR_6 - VAR_2;
 }
 if (VAR_5)
  VAR_4->ts_ticks += (VAR_6 - VAR_4->ts_ltick) << VAR_1;
 VAR_4->ts_ltick = VAR_6;
}
