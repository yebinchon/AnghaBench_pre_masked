
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct seq_softc {int timerrun; int timersub; int timerstop; } ;


 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (int *,struct timeval*) ;
 int FUNC_2 (struct timeval*,int *) ;

__attribute__((used)) static void
FUNC_3(struct seq_softc *VAR_0)
{
 struct timeval VAR_1;

 if (VAR_0->timerrun == 1)
  return;
 VAR_0->timerrun = 1;
 FUNC_0(&VAR_1);
 FUNC_2(&VAR_1, &VAR_0->timerstop);
 FUNC_1(&VAR_0->timersub, &VAR_1);
}
