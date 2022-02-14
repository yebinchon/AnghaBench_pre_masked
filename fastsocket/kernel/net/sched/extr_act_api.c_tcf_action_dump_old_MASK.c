
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_action {TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* dump ) (struct sk_buff*,struct tc_action*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct tc_action*,int,int) ;

int
FUNC_1(struct sk_buff *VAR_1, struct tc_action *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = -VAR_0;

 if (VAR_2->ops == ((void*)0) || VAR_2->ops->dump == ((void*)0))
  return VAR_5;
 return VAR_2->ops->dump(VAR_1, VAR_2, VAR_3, VAR_4);
}
