
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts ;
struct thread {int td_retval; } ;
struct cloudabi_sys_clock_time_get_args {int clock_id; } ;
typedef int cloudabi_timestamp_t ;


 int FUNC_0 (struct thread*,int ,int *) ;
 int FUNC_1 (int ,int *,int) ;

int
FUNC_2(struct thread *VAR_0,
    struct cloudabi_sys_clock_time_get_args *VAR_1)
{
 cloudabi_timestamp_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1->clock_id, &VAR_2);
 FUNC_1(VAR_0->td_retval, &VAR_2, sizeof(VAR_2));
 return (VAR_3);
}
