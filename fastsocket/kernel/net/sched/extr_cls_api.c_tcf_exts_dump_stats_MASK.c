
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_exts {scalar_t__ action; } ;
struct tcf_ext_map {int dummy; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff*,scalar_t__,int) ;

int FUNC_1(struct sk_buff *VAR_0, struct tcf_exts *VAR_1,
   const struct tcf_ext_map *VAR_2)
{





 return 0;
nla_put_failure: __attribute__ ((unused))
 return -1;
}
