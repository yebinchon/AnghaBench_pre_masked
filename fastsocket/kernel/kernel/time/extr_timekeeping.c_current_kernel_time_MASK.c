
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_2__ {struct timespec xtime; int lock; } ;


 unsigned long FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned long) ;
 TYPE_1__ VAR_0 ;

struct timespec FUNC_2(void)
{
 struct timespec VAR_1;
 unsigned long VAR_2;

 do {
  VAR_2 = FUNC_0(&VAR_0.lock);

  VAR_1 = VAR_0.xtime;
 } while (FUNC_1(&VAR_0.lock, VAR_2));

 return VAR_1;
}
