
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct audit_context {unsigned int serial; int prio; int current_state; TYPE_1__ ctime; int in_syscall; } ;


 int VAR_0 ;
 unsigned int FUNC_0 () ;

int FUNC_1(struct audit_context *VAR_1,
         struct timespec *VAR_2, unsigned int *VAR_3)
{
 if (!VAR_1->in_syscall)
  return 0;
 if (!VAR_1->serial)
  VAR_1->serial = FUNC_0();
 VAR_2->tv_sec = VAR_1->ctime.tv_sec;
 VAR_2->tv_nsec = VAR_1->ctime.tv_nsec;
 *VAR_3 = VAR_1->serial;
 if (!VAR_1->prio) {
  VAR_1->prio = 1;
  VAR_1->current_state = VAR_0;
 }
 return 1;
}
