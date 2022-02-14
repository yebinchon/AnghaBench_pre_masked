
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct futex_lock {int dummy; } ;
typedef int cloudabi_timestamp_t ;
typedef int cloudabi_scope_t ;
typedef int cloudabi_lock_t ;
typedef int cloudabi_clockid_t ;


 int FUNC_0 (struct thread*,int *,int ,struct futex_lock**) ;
 int FUNC_1 (struct futex_lock*,struct thread*,int *,int ,int ,int ,int) ;
 int FUNC_2 (struct futex_lock*) ;

int
FUNC_3(struct thread *VAR_0, cloudabi_lock_t *VAR_1,
    cloudabi_scope_t VAR_2, cloudabi_clockid_t VAR_3,
    cloudabi_timestamp_t VAR_4, cloudabi_timestamp_t VAR_5, bool VAR_6)
{
 struct futex_lock *VAR_7;
 int VAR_8;


 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_7);
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_8 = FUNC_1(VAR_7, VAR_0, VAR_1, VAR_3, VAR_4,
     VAR_5, VAR_6);
 FUNC_2(VAR_7);
 return (VAR_8);
}
