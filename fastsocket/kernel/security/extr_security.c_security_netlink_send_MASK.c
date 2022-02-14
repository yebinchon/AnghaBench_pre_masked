
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* netlink_send ) (struct sock*,struct sk_buff*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;

int FUNC_1(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 return VAR_0->netlink_send(VAR_1, VAR_2);
}
