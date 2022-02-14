
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct dsmark_qdisc_data {scalar_t__ indices; scalar_t__ default_index; scalar_t__ set_tc_index; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 struct dsmark_qdisc_data* FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_6, struct sk_buff *VAR_7)
{
 struct dsmark_qdisc_data *VAR_8 = FUNC_5(VAR_6);
 struct nlattr *VAR_9 = ((void*)0);

 VAR_9 = FUNC_4(VAR_7, VAR_5);
 if (VAR_9 == ((void*)0))
  goto nla_put_failure;
 FUNC_1(VAR_7, VAR_3, VAR_8->indices);

 if (VAR_8->default_index != VAR_1)
  FUNC_1(VAR_7, VAR_2, VAR_8->default_index);

 if (VAR_8->set_tc_index)
  FUNC_0(VAR_7, VAR_4);

 return FUNC_3(VAR_7, VAR_9);

nla_put_failure:
 FUNC_2(VAR_7, VAR_9);
 return -VAR_0;
}
