
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int ) ;
 double FUNC_1 (double) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 double FUNC_3 (double) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void *
FUNC_5(void *VAR_1)
{
 double *VAR_2 = (double *)VAR_1;
 double VAR_3 = *VAR_2++;
 double VAR_4 = *VAR_2++;
 double VAR_5 = *VAR_2++;

 for (;;) {
  VAR_3 = FUNC_3 ((VAR_4 = FUNC_1 (VAR_3 + VAR_4 + .4)) - (VAR_5 = FUNC_1 (VAR_3 + VAR_5 + .6)));
  FUNC_0(FUNC_2() == 0,
      "sched_yield failed: %s", FUNC_4(VAR_0));
 }
}
