
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
typedef int pthread_t ;


 int FUNC_0 (int ,int*,struct sched_param*) ;
 int VAR_0 ;

int
FUNC_1(pthread_t VAR_1)
{
 int VAR_2, VAR_3;
 struct sched_param VAR_4;

 if ((VAR_3 = FUNC_0(VAR_1, &VAR_2, &VAR_4)) == 0)
  VAR_3 = VAR_4.sched_priority;
 else {

  VAR_0 = VAR_3;
  VAR_3 = -1;
 }


 return (VAR_3);
}
