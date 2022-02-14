
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int dummy; } ;
typedef int cloudabi_timestamp_t ;
typedef int cloudabi_clockid_t ;
typedef int clockid_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct timespec*,int *) ;
 int FUNC_2 (struct thread*,int ,struct timespec*) ;

int
FUNC_3(struct thread *VAR_0, cloudabi_clockid_t VAR_1,
    cloudabi_timestamp_t *VAR_2)
{
 struct timespec VAR_3;
 int VAR_4;
 clockid_t VAR_5;

 VAR_4 = FUNC_0(VAR_1, &VAR_5);
 if (VAR_4 != 0)
  return (VAR_4);
 VAR_4 = FUNC_2(VAR_0, VAR_5, &VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);
 return (FUNC_1(&VAR_3, VAR_2));
}
