
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec32 {int dummy; } ;
struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct freebsd32_clock_settime_args {int clock_id; int tp; } ;
typedef int ats32 ;


 int FUNC_0 (struct timespec32,struct timespec,int ) ;
 int FUNC_1 (int ,struct timespec32*,int) ;
 int FUNC_2 (struct thread*,int ,struct timespec*) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_3(struct thread *VAR_2,
   struct freebsd32_clock_settime_args *VAR_3)
{
 struct timespec VAR_4;
 struct timespec32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3->tp, &VAR_5, sizeof(VAR_5));
 if (VAR_6)
  return (VAR_6);
 FUNC_0(VAR_5, VAR_4, VAR_1);
 FUNC_0(VAR_5, VAR_4, VAR_0);

 return (FUNC_2(VAR_2, VAR_3->clock_id, &VAR_4));
}
