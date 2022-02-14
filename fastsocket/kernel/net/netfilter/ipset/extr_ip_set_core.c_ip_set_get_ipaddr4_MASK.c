
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
typedef int __be32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,size_t) ;
 int VAR_3 ;
 int FUNC_2 (struct nlattr*) ;
 scalar_t__ FUNC_3 (struct nlattr**,int ,struct nlattr*,int ) ;
 scalar_t__ FUNC_4 (int) ;

int
FUNC_5(struct nlattr *VAR_4, __be32 *VAR_5)
{
 struct nlattr *VAR_6[VAR_1+1];

 if (FUNC_4(!FUNC_0(VAR_4)))
  return -VAR_2;
 if (FUNC_3(VAR_6, VAR_1, VAR_4, VAR_3))
  return -VAR_2;
 if (FUNC_4(!FUNC_1(VAR_6, VAR_0)))
  return -VAR_2;

 *VAR_5 = FUNC_2(VAR_6[VAR_0]);
 return 0;
}
