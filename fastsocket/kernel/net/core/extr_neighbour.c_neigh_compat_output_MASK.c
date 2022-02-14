
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int protocol; struct net_device* dev; } ;
struct net_device {TYPE_1__* header_ops; } ;
struct TYPE_2__ {scalar_t__ (* rebuild ) (struct sk_buff*) ;} ;


 int FUNC_0 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct net_device*,int ,int *,int *,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct sk_buff *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;

 FUNC_0(VAR_0, FUNC_4(VAR_0));

 if (FUNC_1(VAR_0, VAR_1, FUNC_3(VAR_0->protocol), ((void*)0), ((void*)0),
       VAR_0->len) < 0 &&
     VAR_1->header_ops->rebuild(VAR_0))
  return 0;

 return FUNC_2(VAR_0);
}
