
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport {TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int (* get_options ) (struct vport const*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct vport const*,struct sk_buff*) ;

int FUNC_4(const struct vport *VAR_2, struct sk_buff *VAR_3)
{
 struct nlattr *VAR_4;
 int VAR_5;

 if (!VAR_2->ops->get_options)
  return 0;

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = VAR_2->ops->get_options(VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_3, VAR_4);
  return VAR_5;
 }

 FUNC_1(VAR_3, VAR_4);
 return 0;
}
