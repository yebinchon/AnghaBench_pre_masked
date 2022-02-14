
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int td_retval; } ;
struct cloudabi_sys_clock_res_get_args {int clock_id; } ;
typedef int cts ;
typedef int cloudabi_timestamp_t ;
typedef int clockid_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct timespec*,int *) ;
 int FUNC_2 (struct thread*,int ,struct timespec*) ;
 int FUNC_3 (int ,int *,int) ;

int
FUNC_4(struct thread *VAR_0,
    struct cloudabi_sys_clock_res_get_args *VAR_1)
{
 struct timespec VAR_2;
 cloudabi_timestamp_t VAR_3;
 int VAR_4;
 clockid_t VAR_5;

 VAR_4 = FUNC_0(VAR_1->clock_id, &VAR_5);
 if (VAR_4 != 0)
  return (VAR_4);
 VAR_4 = FUNC_2(VAR_0, VAR_5, &VAR_2);
 if (VAR_4 != 0)
  return (VAR_4);
 VAR_4 = FUNC_1(&VAR_2, &VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);
 FUNC_3(VAR_0->td_retval, &VAR_3, sizeof(VAR_3));
 return (0);
}
