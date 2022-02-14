
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_netem_corrupt {int correlation; int probability; } ;
struct nlattr {int dummy; } ;
struct netem_sched_data {int corrupt_cor; int corrupt; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 struct tc_netem_corrupt* FUNC_1 (struct nlattr const*) ;
 struct netem_sched_data* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_0, const struct nlattr *VAR_1)
{
 struct netem_sched_data *VAR_2 = FUNC_2(VAR_0);
 const struct tc_netem_corrupt *VAR_3 = FUNC_1(VAR_1);

 VAR_2->corrupt = VAR_3->probability;
 FUNC_0(&VAR_2->corrupt_cor, VAR_3->correlation);
}
