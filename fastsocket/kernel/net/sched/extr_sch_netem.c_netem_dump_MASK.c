
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tc_netem_reorder {int correlation; int probability; int dup_corr; int loss_corr; int delay_corr; int duplicate; int gap; int loss; int limit; int jitter; int latency; } ;
struct tc_netem_qopt {int correlation; int probability; int dup_corr; int loss_corr; int delay_corr; int duplicate; int gap; int loss; int limit; int jitter; int latency; } ;
struct tc_netem_corrupt {int correlation; int probability; int dup_corr; int loss_corr; int delay_corr; int duplicate; int gap; int loss; int limit; int jitter; int latency; } ;
struct tc_netem_corr {int correlation; int probability; int dup_corr; int loss_corr; int delay_corr; int duplicate; int gap; int loss; int limit; int jitter; int latency; } ;
struct sk_buff {int len; } ;
struct nlattr {int nla_len; } ;
struct TYPE_10__ {int rho; } ;
struct TYPE_9__ {int rho; } ;
struct TYPE_8__ {int rho; } ;
struct TYPE_7__ {int rho; } ;
struct TYPE_6__ {int rho; } ;
struct netem_sched_data {TYPE_5__ corrupt_cor; int corrupt; TYPE_4__ reorder_cor; int reorder; TYPE_3__ dup_cor; TYPE_2__ loss_cor; TYPE_1__ delay_cor; int duplicate; int gap; int loss; int limit; int jitter; int latency; } ;
struct Qdisc {int dummy; } ;
typedef int reorder ;
typedef int qopt ;
typedef int corrupt ;
typedef int cor ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tc_netem_reorder*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,unsigned char*) ;
 struct netem_sched_data* FUNC_2 (struct Qdisc*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_4, struct sk_buff *VAR_5)
{
 const struct netem_sched_data *VAR_6 = FUNC_2(VAR_4);
 unsigned char *VAR_7 = FUNC_3(VAR_5);
 struct nlattr *VAR_8 = (struct nlattr *) VAR_7;
 struct tc_netem_qopt VAR_9;
 struct tc_netem_corr VAR_10;
 struct tc_netem_reorder VAR_11;
 struct tc_netem_corrupt VAR_12;

 VAR_9.latency = VAR_6->latency;
 VAR_9.jitter = VAR_6->jitter;
 VAR_9.limit = VAR_6->limit;
 VAR_9.loss = VAR_6->loss;
 VAR_9.gap = VAR_6->gap;
 VAR_9.duplicate = VAR_6->duplicate;
 FUNC_0(VAR_5, VAR_3, sizeof(VAR_9), &VAR_9);

 VAR_10.delay_corr = VAR_6->delay_cor.rho;
 VAR_10.loss_corr = VAR_6->loss_cor.rho;
 VAR_10.dup_corr = VAR_6->dup_cor.rho;
 FUNC_0(VAR_5, VAR_0, sizeof(VAR_10), &VAR_10);

 VAR_11.probability = VAR_6->reorder;
 VAR_11.correlation = VAR_6->reorder_cor.rho;
 FUNC_0(VAR_5, VAR_2, sizeof(VAR_11), &VAR_11);

 VAR_12.probability = VAR_6->corrupt;
 VAR_12.correlation = VAR_6->corrupt_cor.rho;
 FUNC_0(VAR_5, VAR_1, sizeof(VAR_12), &VAR_12);

 VAR_8->nla_len = FUNC_3(VAR_5) - VAR_7;

 return VAR_5->len;

nla_put_failure:
 FUNC_1(VAR_5, VAR_7);
 return -1;
}
