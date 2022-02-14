
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_actions {int dummy; } ;
struct nlattr {int nla_type; int nla_len; } ;


 scalar_t__ FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (int ,void*,int) ;
 int FUNC_3 (unsigned char*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (int) ;
 struct nlattr* FUNC_7 (struct sw_flow_actions**,int) ;

__attribute__((used)) static int FUNC_8(struct sw_flow_actions **VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 struct nlattr *VAR_4;

 VAR_4 = FUNC_7(VAR_0, FUNC_4(VAR_3));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_4->nla_type = VAR_1;
 VAR_4->nla_len = FUNC_4(VAR_3);

 if (VAR_2)
  FUNC_2(FUNC_5(VAR_4), VAR_2, VAR_3);
 FUNC_3((unsigned char *) VAR_4 + VAR_4->nla_len, 0, FUNC_6(VAR_3));

 return 0;
}
