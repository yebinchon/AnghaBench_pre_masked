
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct nlattr**,struct nlattr**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;

__attribute__((used)) static int FUNC_5(struct nlattr *VAR_5[], struct nlattr *VAR_6[])
{
 __be32 VAR_7;

 if (VAR_5[VAR_3]) {
  if (FUNC_4(VAR_5[VAR_3]) != VAR_2)
   return -VAR_1;
  if (!FUNC_1(FUNC_3(VAR_5[VAR_3])))
   return -VAR_0;
 }

 if (!VAR_6)
  goto out;

 if (VAR_6[VAR_4]) {
  FUNC_2(&VAR_7, FUNC_3(VAR_6[VAR_4]), 4);
  if (!VAR_7)
   return -VAR_1;
 }

out:
 return FUNC_0(VAR_5, VAR_6);
}
