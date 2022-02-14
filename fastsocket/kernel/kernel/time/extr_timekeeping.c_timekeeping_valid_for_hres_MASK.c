
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* clock; int lock; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned long) ;
 TYPE_2__ VAR_1 ;

int FUNC_2(void)
{
 unsigned long VAR_2;
 int VAR_3;

 do {
  VAR_2 = FUNC_0(&VAR_1.lock);

  VAR_3 = VAR_1.clock->flags & VAR_0;

 } while (FUNC_1(&VAR_1.lock, VAR_2));

 return VAR_3;
}
