
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_2__ {struct sk_buff* (* peek ) (struct Qdisc*) ;} ;


 unsigned int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static unsigned int FUNC_2(struct Qdisc *VAR_0)
{
 struct sk_buff *VAR_1;

 VAR_1 = VAR_0->ops->peek(VAR_0);
 return VAR_1 ? FUNC_0(VAR_1) : 0;
}
