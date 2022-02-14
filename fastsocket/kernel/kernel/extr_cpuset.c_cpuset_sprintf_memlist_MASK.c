
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int mems_allowed; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(char *VAR_2, struct cpuset *VAR_3)
{
 nodemask_t VAR_4;

 FUNC_0(&VAR_1);
 VAR_4 = VAR_3->mems_allowed;
 FUNC_1(&VAR_1);

 return FUNC_2(VAR_2, VAR_0, VAR_4);
}
