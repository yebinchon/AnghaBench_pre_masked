
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int FUNC_1(struct nlattr *VAR_5[], struct nlattr *VAR_6[])
{
 __be16 VAR_7;

 if (!VAR_6)
  return 0;

 VAR_7 = 0;
 if (VAR_6[VAR_3])
  VAR_7 |= FUNC_0(VAR_6[VAR_3]);
 if (VAR_6[VAR_4])
  VAR_7 |= FUNC_0(VAR_6[VAR_4]);
 if (VAR_7 & (VAR_2|VAR_1))
  return -VAR_0;

 return 0;
}
