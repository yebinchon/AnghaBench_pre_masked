
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_param {int sched_priority; } ;
struct TYPE_2__ {int sched_policy; int prio; } ;
struct pthread {TYPE_1__ attr; } ;
typedef struct pthread* pthread_t ;


 int VAR_0 ;
 int FUNC_0 (struct pthread*) ;
 int FUNC_1 (struct pthread*,struct pthread*) ;
 struct pthread* FUNC_2 () ;
 int FUNC_3 (struct pthread*,struct pthread*,int ) ;

int
FUNC_4(pthread_t VAR_1, int * __restrict VAR_2,
    struct sched_param * __restrict VAR_3)
{
 struct pthread *VAR_4 = FUNC_2();
 int VAR_5 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (VAR_0);





 if (VAR_1 == VAR_4)
  FUNC_0(VAR_4);
 else if ((VAR_5 = FUNC_3(VAR_4, VAR_1, 0)))
  return (VAR_5);
 *VAR_2 = VAR_1->attr.sched_policy;
 VAR_3->sched_priority = VAR_1->attr.prio;
 FUNC_1(VAR_4, VAR_1);
 return (VAR_5);
}
