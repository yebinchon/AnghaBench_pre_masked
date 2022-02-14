
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_vs_dest {int u_threshold; int l_threshold; int stats; int persistconns; int inactconns; int activeconns; int weight; int conn_flags; int port; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct sk_buff*,int ,int,int *) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int *) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_13, struct ip_vs_dest *VAR_14)
{
 struct nlattr *VAR_15;

 VAR_15 = FUNC_7(VAR_13, VAR_1);
 if (!VAR_15)
  return -VAR_0;

 FUNC_0(VAR_13, VAR_3, sizeof(VAR_14->addr), &VAR_14->addr);
 FUNC_1(VAR_13, VAR_8, VAR_14->port);

 FUNC_2(VAR_13, VAR_4,
      FUNC_3(&VAR_14->conn_flags) & VAR_12);
 FUNC_2(VAR_13, VAR_11, FUNC_3(&VAR_14->weight));
 FUNC_2(VAR_13, VAR_10, VAR_14->u_threshold);
 FUNC_2(VAR_13, VAR_6, VAR_14->l_threshold);
 FUNC_2(VAR_13, VAR_2,
      FUNC_3(&VAR_14->activeconns));
 FUNC_2(VAR_13, VAR_5,
      FUNC_3(&VAR_14->inactconns));
 FUNC_2(VAR_13, VAR_7,
      FUNC_3(&VAR_14->persistconns));

 if (FUNC_4(VAR_13, VAR_9, &VAR_14->stats))
  goto nla_put_failure;

 FUNC_6(VAR_13, VAR_15);

 return 0;

nla_put_failure:
 FUNC_5(VAR_13, VAR_15);
 return -VAR_0;
}
