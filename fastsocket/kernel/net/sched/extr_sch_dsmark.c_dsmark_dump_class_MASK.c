
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmsg {int tcm_info; int tcm_handle; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct dsmark_qdisc_data {int * value; int * mask; TYPE_1__* q; } ;
struct Qdisc {int handle; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct dsmark_qdisc_data*,unsigned long) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (char*,struct Qdisc*,struct dsmark_qdisc_data*,unsigned long) ;
 struct dsmark_qdisc_data* FUNC_8 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_9(struct Qdisc *VAR_5, unsigned long VAR_6,
        struct sk_buff *VAR_7, struct tcmsg *VAR_8)
{
 struct dsmark_qdisc_data *VAR_9 = FUNC_8(VAR_5);
 struct nlattr *VAR_10 = ((void*)0);

 FUNC_7("dsmark_dump_class(sch %p,[qdisc %p],class %ld\n", VAR_5, VAR_9, VAR_6);

 if (!FUNC_3(VAR_9, VAR_6))
  return -VAR_0;

 VAR_8->tcm_handle = FUNC_2(FUNC_1(VAR_5->handle), VAR_6-1);
 VAR_8->tcm_info = VAR_9->q->handle;

 VAR_10 = FUNC_6(VAR_7, VAR_4);
 if (VAR_10 == ((void*)0))
  goto nla_put_failure;
 FUNC_0(VAR_7, VAR_2, VAR_9->mask[VAR_6-1]);
 FUNC_0(VAR_7, VAR_3, VAR_9->value[VAR_6-1]);

 return FUNC_5(VAR_7, VAR_10);

nla_put_failure:
 FUNC_4(VAR_7, VAR_10);
 return -VAR_1;
}
