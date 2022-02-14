
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
typedef int s64 ;
struct TYPE_2__ {struct timespec raw_time; int lock; } ;


 unsigned long FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned long) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (struct timespec*,int ) ;

void FUNC_4(struct timespec *VAR_1)
{
 unsigned long VAR_2;
 s64 VAR_3;

 do {
  VAR_2 = FUNC_0(&VAR_0.lock);
  VAR_3 = FUNC_2();
  *VAR_1 = VAR_0.raw_time;

 } while (FUNC_1(&VAR_0.lock, VAR_2));

 FUNC_3(VAR_1, VAR_3);
}
