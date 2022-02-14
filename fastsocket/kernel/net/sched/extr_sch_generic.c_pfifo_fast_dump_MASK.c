
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_prio_qopt {int priomap; int bands; } ;
struct sk_buff {int len; } ;
struct Qdisc {int dummy; } ;
typedef int opt ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tc_prio_qopt*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_4, struct sk_buff *VAR_5)
{
 struct tc_prio_qopt VAR_6 = { .bands = VAR_0 };

 FUNC_1(&VAR_6.priomap, VAR_3, VAR_2+1);
 FUNC_0(VAR_5, VAR_1, sizeof(VAR_6), &VAR_6);
 return VAR_5->len;

nla_put_failure:
 return -1;
}
