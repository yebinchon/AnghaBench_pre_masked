
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int dummy; } ;
typedef int cpusetid_t ;
typedef int cpuset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpuset*,struct cpuset*,int const*,int *,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 struct cpuset* FUNC_3 (int ,int) ;
 int FUNC_4 (int ,struct cpuset*) ;

__attribute__((used)) static int
FUNC_5(struct cpuset **VAR_5, struct cpuset *VAR_6, const cpuset_t *VAR_7)
{
 struct cpuset *VAR_8;
 cpusetid_t VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_3);
 if (VAR_9 == -1)
  return (VAR_0);
 *VAR_5 = VAR_8 = FUNC_3(VAR_4, VAR_1 | VAR_2);
 VAR_10 = FUNC_0(VAR_8, VAR_6, VAR_7, ((void*)0), VAR_9);
 if (VAR_10 == 0)
  return (0);
 FUNC_2(VAR_3, VAR_9);
 FUNC_4(VAR_4, VAR_8);

 return (VAR_10);
}
