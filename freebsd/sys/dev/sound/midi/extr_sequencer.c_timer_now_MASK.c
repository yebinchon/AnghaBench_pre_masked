
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {unsigned long long tv_sec; scalar_t__ tv_usec; } ;
struct seq_softc {scalar_t__ timerrun; unsigned long long timerbase; int timersub; struct timeval timerstop; } ;


 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (struct timeval*,int *) ;

__attribute__((used)) static int
FUNC_2(struct seq_softc *VAR_0)
{
 struct timeval VAR_1;
 unsigned long long VAR_2;
 int VAR_3;

 if (VAR_0->timerrun == 0)
  VAR_1 = VAR_0->timerstop;
 else
  FUNC_0(&VAR_1);

 FUNC_1(&VAR_1, &VAR_0->timersub);

 VAR_2 = VAR_1.tv_sec * 1000000ull;
 VAR_2 += VAR_1.tv_usec;
 VAR_2 *= VAR_0->timerbase;

 VAR_2 /= 1000000ull;

 VAR_3 = VAR_2;




 return VAR_3;
}
