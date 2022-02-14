
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {int probe_timer; } ;
struct worker {TYPE_1__ env; } ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,struct timeval*) ;

void FUNC_2(void* VAR_0)
{
 struct worker* VAR_1 = (struct worker*)VAR_0;
 struct timeval VAR_2;

 VAR_2.tv_sec = (time_t)FUNC_0(&VAR_1->env);
 VAR_2.tv_usec = 0;

 if(VAR_2.tv_sec != 0)
  FUNC_1(VAR_1->env.probe_timer, &VAR_2);
}
