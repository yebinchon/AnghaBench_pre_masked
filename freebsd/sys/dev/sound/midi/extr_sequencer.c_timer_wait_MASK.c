
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {unsigned long long tv_sec; unsigned long long tv_usec; } ;
struct seq_softc {scalar_t__ timerrun; scalar_t__ playing; int tempo; int timerbase; int waiting; int seq_lock; int reset_cv; struct timeval timersub; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,unsigned long long) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct timeval*) ;
 unsigned long long VAR_1 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct timeval*,struct timeval*) ;

__attribute__((used)) static void
FUNC_6(struct seq_softc *VAR_2, int VAR_3, int VAR_4)
{
 struct timeval VAR_5, VAR_6;
 int VAR_7;
 unsigned long long VAR_8;

 while (VAR_2->timerrun == 0) {
  FUNC_0(2, FUNC_4("Timer wait when timer isn't running\n"));






  FUNC_2(&VAR_2->reset_cv, &VAR_2->seq_lock);
  if (VAR_2->playing == 0)
   return;
 }

 VAR_8 = VAR_3 * 60ull * 1000000ull / (VAR_2->tempo * VAR_2->timerbase);

 VAR_6.tv_sec = VAR_8 / 1000000;
 VAR_6.tv_usec = VAR_8 % 1000000;






 if (VAR_4 != 0) {
  FUNC_3(&VAR_5);
  FUNC_5(&VAR_5, &VAR_2->timersub);
  FUNC_5(&VAR_6, &VAR_5);
 }
 if (VAR_6.tv_sec < 0 || VAR_6.tv_usec < 0) {
  FUNC_0(3,
      FUNC_4("seq_timer error negative time %lds.%06lds\n",
      (long)VAR_6.tv_sec, (long)VAR_6.tv_usec));
  return;
 }
 VAR_8 = VAR_6.tv_sec * 1000000ull;
 VAR_8 += VAR_6.tv_usec;
 VAR_8 *= VAR_1;
 VAR_8 /= 1000000ull;




 VAR_2->waiting = 1;
 VAR_7 = FUNC_1(&VAR_2->reset_cv, &VAR_2->seq_lock, VAR_8 + 1);
 VAR_2->waiting = 0;

 if (VAR_7 != VAR_0)
  FUNC_0(3, FUNC_4("seq_timer didn't timeout\n"));

}
