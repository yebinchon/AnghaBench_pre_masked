
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_multiq_qopt {int max_bands; int bands; } ;
struct sk_buff {int len; } ;
struct multiq_sched_data {int max_bands; int bands; } ;
struct Qdisc {int dummy; } ;
typedef int opt ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tc_multiq_qopt*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*,unsigned char*) ;
 struct multiq_sched_data* FUNC_2 (struct Qdisc*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_1, struct sk_buff *VAR_2)
{
 struct multiq_sched_data *VAR_3 = FUNC_2(VAR_1);
 unsigned char *VAR_4 = FUNC_3(VAR_2);
 struct tc_multiq_qopt VAR_5;

 VAR_5.bands = VAR_3->bands;
 VAR_5.max_bands = VAR_3->max_bands;

 FUNC_0(VAR_2, VAR_0, sizeof(VAR_5), &VAR_5);

 return VAR_2->len;

nla_put_failure:
 FUNC_1(VAR_2, VAR_4);
 return -1;
}
