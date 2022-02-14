
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nlattr**,int,struct nlattr*,int ) ;

__attribute__((used)) static int FUNC_1(struct nlattr *VAR_3, u32 *VAR_4)
{
 struct nlattr *VAR_5[VAR_1 + 1];
 int VAR_6;

 *VAR_4 = 0;

 if (!VAR_3)
  return -VAR_0;

 if (FUNC_0(VAR_5, VAR_1,
        VAR_3, VAR_2))
  return -VAR_0;

 for (VAR_6 = 1; VAR_6 <= VAR_1; VAR_6++)
  if (VAR_5[VAR_6])
   *VAR_4 |= (1<<VAR_6);

 return 0;
}
