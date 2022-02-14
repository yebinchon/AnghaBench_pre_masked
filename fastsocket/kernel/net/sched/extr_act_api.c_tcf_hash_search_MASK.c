
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_hashinfo {int dummy; } ;
struct tcf_common {int dummy; } ;
struct tc_action {struct tcf_common* priv; TYPE_1__* ops; } ;
struct TYPE_2__ {struct tcf_hashinfo* hinfo; } ;


 struct tcf_common* FUNC_0 (int ,struct tcf_hashinfo*) ;

int FUNC_1(struct tc_action *VAR_0, u32 VAR_1)
{
 struct tcf_hashinfo *VAR_2 = VAR_0->ops->hinfo;
 struct tcf_common *VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3) {
  VAR_0->priv = VAR_3;
  return 1;
 }
 return 0;
}
