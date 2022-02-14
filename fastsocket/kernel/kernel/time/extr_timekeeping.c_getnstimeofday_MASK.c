
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
typedef int s64 ;
struct TYPE_2__ {struct timespec xtime; int lock; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 unsigned long FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned long) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (struct timespec*,int ) ;

void FUNC_6(struct timespec *VAR_2)
{
 unsigned long VAR_3;
 s64 VAR_4;

 FUNC_0(VAR_1);

 do {
  VAR_3 = FUNC_2(&VAR_0.lock);

  *VAR_2 = VAR_0.xtime;
  VAR_4 = FUNC_4();


  VAR_4 += FUNC_1();

 } while (FUNC_3(&VAR_0.lock, VAR_3));

 FUNC_5(VAR_2, VAR_4);
}
