
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long weight; } ;
struct rq {unsigned long last_load_update_tick; unsigned long* cpu_load; int nr_load_updates; TYPE_1__ load; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long,int) ;
 unsigned long VAR_1 ;

__attribute__((used)) static void FUNC_1(struct rq *VAR_2)
{
 unsigned long VAR_3 = VAR_2->load.weight;
 unsigned long VAR_4 = VAR_1;
 unsigned long VAR_5;
 int VAR_6, VAR_7;

 VAR_2->nr_load_updates++;


 if (VAR_4 == VAR_2->last_load_update_tick)
  return;

 VAR_5 = VAR_4 - VAR_2->last_load_update_tick;
 VAR_2->last_load_update_tick = VAR_4;


 VAR_2->cpu_load[0] = VAR_3;
 for (VAR_6 = 1, VAR_7 = 2; VAR_6 < VAR_0; VAR_6++, VAR_7 += VAR_7) {
  unsigned long VAR_8, VAR_9;



  VAR_8 = VAR_2->cpu_load[VAR_6];
  VAR_8 = FUNC_0(VAR_8, VAR_5 - 1, VAR_6);
  VAR_9 = VAR_3;





  if (VAR_9 > VAR_8)
   VAR_9 += VAR_7 - 1;

  VAR_2->cpu_load[VAR_6] = (VAR_8 * (VAR_7 - 1) + VAR_9) >> VAR_6;
 }
}
