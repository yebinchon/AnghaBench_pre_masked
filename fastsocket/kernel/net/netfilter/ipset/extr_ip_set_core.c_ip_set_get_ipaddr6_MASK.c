
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct nlattr {int dummy; } ;
struct in6_addr {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,size_t) ;
 int VAR_3 ;
 int FUNC_2 (union nf_inet_addr*,int ,int) ;
 int FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr**,int ,struct nlattr*,int ) ;
 scalar_t__ FUNC_5 (int) ;

int
FUNC_6(struct nlattr *VAR_4, union nf_inet_addr *VAR_5)
{
 struct nlattr *VAR_6[VAR_1+1];

 if (FUNC_5(!FUNC_0(VAR_4)))
  return -VAR_2;

 if (FUNC_4(VAR_6, VAR_1, VAR_4, VAR_3))
  return -VAR_2;
 if (FUNC_5(!FUNC_1(VAR_6, VAR_0)))
  return -VAR_2;

 FUNC_2(VAR_5, FUNC_3(VAR_6[VAR_0]),
  sizeof(struct in6_addr));
 return 0;
}
