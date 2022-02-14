
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nlattr {int dummy; } ;
struct nl_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nl_msg*,int ,int ) ;
 int FUNC_1 (struct nl_msg*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct nl_msg*,int ) ;

__attribute__((used)) static int FUNC_3(struct nl_msg *VAR_2, u64 VAR_3)
{
 struct nlattr *VAR_4 = FUNC_2(VAR_2, VAR_0);

 if (!VAR_4)
  return -1;

 FUNC_0(VAR_2, VAR_1, VAR_3);

 FUNC_1(VAR_2, VAR_4);

 return 0;

nla_put_failure:
 return -1;
}
