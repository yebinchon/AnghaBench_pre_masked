
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {scalar_t__ vruntime; } ;
typedef scalar_t__ s64 ;


 scalar_t__ FUNC_0 (struct sched_entity*,struct sched_entity*) ;

__attribute__((used)) static int
FUNC_1(struct sched_entity *VAR_0, struct sched_entity *VAR_1)
{
 s64 VAR_2, VAR_3 = VAR_0->vruntime - VAR_1->vruntime;

 if (VAR_3 <= 0)
  return -1;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 > VAR_2)
  return 1;

 return 0;
}
