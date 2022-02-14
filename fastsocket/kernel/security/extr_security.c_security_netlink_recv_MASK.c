
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* netlink_recv ) (struct sk_buff*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;

int FUNC_1(struct sk_buff *VAR_1, int VAR_2)
{
 return VAR_0->netlink_recv(VAR_1, VAR_2);
}
