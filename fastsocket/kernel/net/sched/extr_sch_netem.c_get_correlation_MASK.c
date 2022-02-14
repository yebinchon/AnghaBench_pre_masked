
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_netem_corr {int dup_corr; int loss_corr; int delay_corr; } ;
struct nlattr {int dummy; } ;
struct netem_sched_data {int dup_cor; int loss_cor; int delay_cor; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 struct tc_netem_corr* FUNC_1 (struct nlattr const*) ;
 struct netem_sched_data* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_0, const struct nlattr *VAR_1)
{
 struct netem_sched_data *VAR_2 = FUNC_2(VAR_0);
 const struct tc_netem_corr *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->delay_cor, VAR_3->delay_corr);
 FUNC_0(&VAR_2->loss_cor, VAR_3->loss_corr);
 FUNC_0(&VAR_2->dup_cor, VAR_3->dup_corr);
}
