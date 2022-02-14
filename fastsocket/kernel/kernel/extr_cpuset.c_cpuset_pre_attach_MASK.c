
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int dummy; } ;
struct cgroup {int dummy; } ;


 struct cpuset* FUNC_0 (struct cgroup*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct cpuset*,int ) ;
 int FUNC_3 (struct cpuset*,int *) ;
 struct cpuset VAR_3 ;

__attribute__((used)) static void FUNC_4(struct cgroup *VAR_4)
{
 struct cpuset *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5 == &VAR_3)
  FUNC_1(VAR_1, VAR_0);
 else
  FUNC_2(VAR_5, VAR_1);

 FUNC_3(VAR_5, &VAR_2);
}
