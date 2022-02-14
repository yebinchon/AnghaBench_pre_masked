
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct publication {int local_list; } ;
struct distr_item {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct distr_item*,struct publication*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (char*) ;

void FUNC_8(struct publication *VAR_4)
{
 struct sk_buff *VAR_5;
 struct distr_item *VAR_6;

 FUNC_2(&VAR_4->local_list, &VAR_3);
 VAR_2++;

 VAR_5 = FUNC_4(VAR_1, VAR_0, 0);
 if (!VAR_5) {
  FUNC_7("Publication distribution failure\n");
  return;
 }

 VAR_6 = (struct distr_item *)FUNC_3(FUNC_0(VAR_5));
 FUNC_5(VAR_6, VAR_4);
 FUNC_1("tipc_named_withdraw: broadcasting publish msg\n");
 FUNC_6(VAR_5);
}
