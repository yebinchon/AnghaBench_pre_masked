
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct clock_getcpuclockid2_args {int clock_id; int which; int id; } ;
typedef int clockid_t ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct thread*,int ,int ,int *) ;

int
FUNC_2(struct thread *VAR_0, struct clock_getcpuclockid2_args *VAR_1)
{
 clockid_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1->id, VAR_1->which, &VAR_2);
 if (VAR_3 == 0)
  VAR_3 = FUNC_0(&VAR_2, VAR_1->clock_id, sizeof(clockid_t));
 return (VAR_3);
}
