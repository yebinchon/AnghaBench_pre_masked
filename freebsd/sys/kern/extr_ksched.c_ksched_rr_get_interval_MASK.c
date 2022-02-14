
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct ksched {struct timespec rr_interval; } ;



int
FUNC_0(struct ksched *VAR_0, struct thread *VAR_1,
    struct timespec *VAR_2)
{

 *VAR_2 = VAR_0->rr_interval;
 return (0);
}
