
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_sfq_qopt {int perturb_period; int flows; int divisor; int limit; int quantum; } ;
struct sk_buff {int len; } ;
struct sfq_sched_data {int perturb_period; int limit; int quantum; } ;
struct Qdisc {int dummy; } ;
typedef int opt ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct tc_sfq_qopt*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,unsigned char*) ;
 struct sfq_sched_data* FUNC_2 (struct Qdisc*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_3, struct sk_buff *VAR_4)
{
 struct sfq_sched_data *VAR_5 = FUNC_2(VAR_3);
 unsigned char *VAR_6 = FUNC_3(VAR_4);
 struct tc_sfq_qopt VAR_7;

 VAR_7.quantum = VAR_5->quantum;
 VAR_7.perturb_period = VAR_5->perturb_period / VAR_0;

 VAR_7.limit = VAR_5->limit;
 VAR_7.divisor = VAR_1;
 VAR_7.flows = VAR_5->limit;

 FUNC_0(VAR_4, VAR_2, sizeof(VAR_7), &VAR_7);

 return VAR_4->len;

nla_put_failure:
 FUNC_1(VAR_4, VAR_6);
 return -1;
}
