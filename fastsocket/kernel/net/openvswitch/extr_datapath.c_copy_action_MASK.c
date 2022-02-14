
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_actions {int dummy; } ;
struct nlattr {int nla_len; } ;


 scalar_t__ FUNC_0 (struct nlattr*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*,struct nlattr const*,int) ;
 struct nlattr* FUNC_4 (struct sw_flow_actions**,int ) ;

__attribute__((used)) static int FUNC_5(const struct nlattr *VAR_0,
         struct sw_flow_actions **VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0->nla_len);
 struct nlattr *VAR_3;

 VAR_3 = FUNC_4(VAR_1, VAR_0->nla_len);
 if (FUNC_0(VAR_3))
  return FUNC_2(VAR_3);

 FUNC_3(VAR_3, VAR_0, VAR_2);
 return 0;
}
