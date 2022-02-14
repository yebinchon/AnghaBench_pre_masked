
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct timespec*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct timespec*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct timespec *VAR_1)
{
 unsigned long VAR_2;
 struct timespec VAR_3;


 FUNC_2(&VAR_3);
 if (!(VAR_3.tv_sec == 0 && VAR_3.tv_nsec == 0))
  return;

 FUNC_5(&VAR_0.lock, VAR_2);

 FUNC_3();

 FUNC_0(VAR_1);

 FUNC_4(1);

 FUNC_6(&VAR_0.lock, VAR_2);


 FUNC_1();
}
