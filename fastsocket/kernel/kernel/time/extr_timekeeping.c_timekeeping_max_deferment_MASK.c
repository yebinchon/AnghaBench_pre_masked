
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {TYPE_1__* clock; int lock; } ;
struct TYPE_3__ {int max_idle_ns; } ;


 unsigned long FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned long) ;
 TYPE_2__ VAR_0 ;

u64 FUNC_2(void)
{
 unsigned long VAR_1;
 u64 VAR_2;
 do {
  VAR_1 = FUNC_0(&VAR_0.lock);

  VAR_2 = VAR_0.clock->max_idle_ns;

 } while (FUNC_1(&VAR_0.lock, VAR_1));

 return VAR_2;
}
