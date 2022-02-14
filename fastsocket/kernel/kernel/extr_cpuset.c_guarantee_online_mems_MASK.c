
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int mems_allowed; struct cpuset* parent; } ;
typedef int nodemask_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(const struct cpuset *VAR_2, nodemask_t *VAR_3)
{
 while (VAR_2 && !FUNC_2(VAR_2->mems_allowed,
     VAR_1[VAR_0]))
  VAR_2 = VAR_2->parent;
 if (VAR_2)
  FUNC_1(*VAR_3, VAR_2->mems_allowed,
     VAR_1[VAR_0]);
 else
  *VAR_3 = VAR_1[VAR_0];
 FUNC_0(!FUNC_2(*VAR_3, VAR_1[VAR_0]));
}
