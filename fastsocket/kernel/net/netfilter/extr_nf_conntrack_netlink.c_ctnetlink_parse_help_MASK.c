
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr const*,int *) ;

__attribute__((used)) static inline int
FUNC_2(const struct nlattr *VAR_3, char **VAR_4)
{
 struct nlattr *VAR_5[VAR_0+1];

 FUNC_1(VAR_5, VAR_0, VAR_3, ((void*)0));

 if (!VAR_5[VAR_1])
  return -VAR_2;

 *VAR_4 = FUNC_0(VAR_5[VAR_1]);

 return 0;
}
