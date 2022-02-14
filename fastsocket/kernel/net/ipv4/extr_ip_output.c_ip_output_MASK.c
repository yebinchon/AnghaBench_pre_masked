
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int protocol; struct net_device* dev; int len; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct net_device* dev; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,struct sk_buff*,int *,struct net_device*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct sk_buff *VAR_6)
{
 struct net_device *VAR_7 = FUNC_5(VAR_6)->dev;

 FUNC_1(FUNC_3(VAR_7), VAR_2, VAR_6->len);

 VAR_6->dev = VAR_7;
 VAR_6->protocol = FUNC_4(VAR_0);

 return FUNC_2(VAR_4, VAR_3, VAR_6, ((void*)0), VAR_7,
       VAR_5,
       !(FUNC_0(VAR_6)->flags & VAR_1));
}
