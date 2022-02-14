
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_actions {scalar_t__ actions_len; scalar_t__ actions; } ;
struct nlattr {scalar_t__ nla_len; } ;



__attribute__((used)) static inline void FUNC_0(struct sw_flow_actions *VAR_0, int VAR_1)
{
 struct nlattr *VAR_2 = (struct nlattr *) ((unsigned char *)VAR_0->actions + VAR_1);

 VAR_2->nla_len = VAR_0->actions_len - VAR_1;
}
