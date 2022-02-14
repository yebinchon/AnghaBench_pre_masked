
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_pmu_query {int dummy; } ;
struct bcm_platform {struct bhnd_pmu_query pmu; } ;


 int FUNC_0 (struct bcm_platform*) ;

__attribute__((used)) static struct bhnd_pmu_query *
FUNC_1(struct bcm_platform *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return (((void*)0));
 return (&VAR_0->pmu);
}
