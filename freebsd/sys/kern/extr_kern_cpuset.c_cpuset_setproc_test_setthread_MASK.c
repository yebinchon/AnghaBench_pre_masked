
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domainset {int dummy; } ;
struct cpuset {scalar_t__ cs_id; } ;
typedef int cpuset_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cpuset*,struct cpuset*,int *,struct domainset*) ;

__attribute__((used)) static int
FUNC_1(struct cpuset *VAR_1, struct cpuset *VAR_2)
{
 struct domainset VAR_3;
 cpuset_t VAR_4;

 if (VAR_1->cs_id != VAR_0)
  return (0);
 return FUNC_0(VAR_1, VAR_2, &VAR_4, &VAR_3);
}
