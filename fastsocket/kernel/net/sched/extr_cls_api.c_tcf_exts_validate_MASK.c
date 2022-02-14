
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tcf_exts {struct tc_action* action; } ;
struct tcf_ext_map {size_t police; size_t action; } ;
struct tc_action {int type; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tc_action*) ;
 int FUNC_1 (struct tc_action*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct tcf_exts*,int ,int) ;
 struct tc_action* FUNC_3 (struct nlattr*,struct nlattr*,int *,int ,int ) ;
 struct tc_action* FUNC_4 (struct nlattr*,struct nlattr*,char*,int ,int ) ;

int FUNC_5(struct tcf_proto *VAR_4, struct nlattr **VAR_5,
    struct nlattr *VAR_6, struct tcf_exts *VAR_7,
    const struct tcf_ext_map *VAR_8)
{
 FUNC_2(VAR_7, 0, sizeof(*VAR_7));
 if ((VAR_8->action && VAR_5[VAR_8->action]) ||
     (VAR_8->police && VAR_5[VAR_8->police]))
  return -VAR_0;


 return 0;
}
