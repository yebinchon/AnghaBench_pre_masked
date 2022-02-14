
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct clock_settime_args {int clock_id; int tp; } ;
typedef int ats ;


 int FUNC_0 (int ,struct timespec*,int) ;
 int FUNC_1 (struct thread*,int ,struct timespec*) ;

int
FUNC_2(struct thread *VAR_0, struct clock_settime_args *VAR_1)
{
 struct timespec VAR_2;
 int VAR_3;

 if ((VAR_3 = FUNC_0(VAR_1->tp, &VAR_2, sizeof(VAR_2))) != 0)
  return (VAR_3);
 return (FUNC_1(VAR_0, VAR_1->clock_id, &VAR_2));
}
