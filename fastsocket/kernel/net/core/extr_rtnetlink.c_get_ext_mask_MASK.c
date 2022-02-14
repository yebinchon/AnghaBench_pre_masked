
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;

__attribute__((used)) static u32 FUNC_2(struct nlattr *VAR_2[])
{
 if (VAR_2[VAR_1])
  return FUNC_0(VAR_2[VAR_1]);
 if (VAR_2[VAR_0] && FUNC_1(VAR_2[VAR_0]) == 4)
  return FUNC_0(VAR_2[VAR_0]);

 return 0;
}
