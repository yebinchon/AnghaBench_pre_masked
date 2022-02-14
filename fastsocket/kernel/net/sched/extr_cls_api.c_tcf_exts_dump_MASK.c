
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_exts {TYPE_1__* action; } ;
struct tcf_ext_map {scalar_t__ police; scalar_t__ action; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sk_buff*,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,TYPE_1__*,int ,int ) ;

int FUNC_4(struct sk_buff *VAR_1, struct tcf_exts *VAR_2,
    const struct tcf_ext_map *VAR_3)
{
 return 0;
nla_put_failure: __attribute__ ((unused))
 return -1;
}
