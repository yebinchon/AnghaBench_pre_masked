
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xstats ;
struct tc_sfq_xstats {int allot; } ;
struct sfq_sched_data {size_t* ht; int * allot; TYPE_1__* qs; } ;
struct gnet_stats_queue {int qlen; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int dummy; } ;
typedef size_t sfq_index ;
struct TYPE_2__ {int qlen; } ;


 int FUNC_0 (struct gnet_dump*,struct tc_sfq_xstats*,int) ;
 scalar_t__ FUNC_1 (struct gnet_dump*,struct gnet_stats_queue*) ;
 struct sfq_sched_data* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_0, unsigned long VAR_1,
    struct gnet_dump *VAR_2)
{
 struct sfq_sched_data *VAR_3 = FUNC_2(VAR_0);
 sfq_index VAR_4 = VAR_3->ht[VAR_1-1];
 struct gnet_stats_queue VAR_5 = { .qlen = VAR_3->qs[VAR_4].qlen };
 struct tc_sfq_xstats VAR_6 = { .allot = VAR_3->allot[VAR_4] };

 if (FUNC_1(VAR_2, &VAR_5) < 0)
  return -1;
 return FUNC_0(VAR_2, &VAR_6, sizeof(VAR_6));
}
