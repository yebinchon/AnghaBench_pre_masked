
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct net_device {TYPE_1__* netdev_ops; TYPE_2__ dev; } ;
struct TYPE_3__ {int (* ndo_get_vf_port ) (struct net_device*,int,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct net_device*,int,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct nlattr *VAR_6;
 struct nlattr *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_4(VAR_4, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_5->dev.parent); VAR_8++) {
  VAR_7 = FUNC_4(VAR_4, VAR_2);
  if (!VAR_7)
   goto nla_put_failure;
  FUNC_0(VAR_4, VAR_1, VAR_8);
  VAR_9 = VAR_5->netdev_ops->ndo_get_vf_port(VAR_5, VAR_8, VAR_4);
  if (VAR_9 == -VAR_0)
   goto nla_put_failure;
  if (VAR_9) {
   FUNC_2(VAR_4, VAR_7);
   continue;
  }
  FUNC_3(VAR_4, VAR_7);
 }

 FUNC_3(VAR_4, VAR_6);

 return 0;

nla_put_failure:
 FUNC_2(VAR_4, VAR_6);
 return -VAR_0;
}
