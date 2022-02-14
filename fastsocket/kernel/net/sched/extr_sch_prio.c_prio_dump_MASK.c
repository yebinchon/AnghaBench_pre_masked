
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_prio_qopt {int priomap; int bands; } ;
struct sk_buff {int len; } ;
struct prio_sched_data {int prio2band; int bands; } ;
struct Qdisc {int dummy; } ;
typedef int opt ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tc_prio_qopt*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,unsigned char*) ;
 struct prio_sched_data* FUNC_3 (struct Qdisc*) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_2, struct sk_buff *VAR_3)
{
 struct prio_sched_data *VAR_4 = FUNC_3(VAR_2);
 unsigned char *VAR_5 = FUNC_4(VAR_3);
 struct tc_prio_qopt VAR_6;

 VAR_6.bands = VAR_4->bands;
 FUNC_1(&VAR_6.priomap, VAR_4->prio2band, VAR_1+1);

 FUNC_0(VAR_3, VAR_0, sizeof(VAR_6), &VAR_6);

 return VAR_3->len;

nla_put_failure:
 FUNC_2(VAR_3, VAR_5);
 return -1;
}
