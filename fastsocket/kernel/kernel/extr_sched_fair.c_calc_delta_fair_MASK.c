
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ weight; } ;
struct sched_entity {TYPE_1__ load; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (unsigned long,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline unsigned long
FUNC_2(unsigned long VAR_1, struct sched_entity *VAR_2)
{
 if (FUNC_1(VAR_2->load.weight != VAR_0))
  VAR_1 = FUNC_0(VAR_1, VAR_0, &VAR_2->load);

 return VAR_1;
}
