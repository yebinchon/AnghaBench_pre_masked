
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct freebsd32_clock_getcpuclockid2_args {int clock_id; int which; int id; } ;
typedef int clockid_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct thread*,int ,int ,int *) ;

int
FUNC_3(struct thread *VAR_1,
    struct freebsd32_clock_getcpuclockid2_args *VAR_2)
{
 clockid_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, FUNC_0(VAR_0, VAR_2->id),
     VAR_2->which, &VAR_3);
 if (VAR_4 == 0)
  VAR_4 = FUNC_1(&VAR_3, VAR_2->clock_id, sizeof(clockid_t));
 return (VAR_4);
}
