
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts32 ;
struct timespec32 {int dummy; } ;
struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct freebsd32_sched_rr_get_interval_args {int interval; int pid; } ;


 int FUNC_0 (struct timespec,struct timespec32,int ) ;
 int FUNC_1 (struct timespec32*,int ,int) ;
 int FUNC_2 (struct thread*,int ,struct timespec*) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_3(struct thread *VAR_2,
    struct freebsd32_sched_rr_get_interval_args *VAR_3)
{
 struct timespec VAR_4;
 struct timespec32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_3->pid, &VAR_4);
 if (VAR_6 == 0) {
  FUNC_0(VAR_4, VAR_5, VAR_1);
  FUNC_0(VAR_4, VAR_5, VAR_0);
  VAR_6 = FUNC_1(&VAR_5, VAR_3->interval, sizeof(VAR_5));
 }
 return (VAR_6);
}
