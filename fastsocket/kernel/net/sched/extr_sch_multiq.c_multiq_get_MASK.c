
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct multiq_sched_data {unsigned long bands; } ;
struct Qdisc {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 struct multiq_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static unsigned long FUNC_2(struct Qdisc *VAR_0, u32 VAR_1)
{
 struct multiq_sched_data *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 - 1 >= VAR_2->bands)
  return 0;
 return VAR_3;
}
