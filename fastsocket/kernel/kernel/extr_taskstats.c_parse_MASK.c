
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,struct cpumask*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (char*,struct nlattr*,int) ;

__attribute__((used)) static int FUNC_5(struct nlattr *VAR_5, struct cpumask *VAR_6)
{
 char *VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_5 == ((void*)0))
  return 1;
 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8 > VAR_4)
  return -VAR_0;
 if (VAR_8 < 1)
  return -VAR_1;
 VAR_7 = FUNC_2(VAR_8, VAR_3);
 if (!VAR_7)
  return -VAR_2;
 FUNC_4(VAR_7, VAR_5, VAR_8);
 VAR_9 = FUNC_0(VAR_7, VAR_6);
 FUNC_1(VAR_7);
 return VAR_9;
}
