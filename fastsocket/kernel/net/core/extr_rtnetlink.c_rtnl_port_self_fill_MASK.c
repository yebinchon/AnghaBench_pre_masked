
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct TYPE_2__ {int (* ndo_get_vf_port ) (struct net_device*,int ,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct net_device*,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct nlattr *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_3, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = VAR_4->netdev_ops->ndo_get_vf_port(VAR_4, VAR_2, VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_3, VAR_5);
  return (VAR_6 == -VAR_0) ? VAR_6 : 0;
 }

 FUNC_1(VAR_3, VAR_5);

 return 0;
}
