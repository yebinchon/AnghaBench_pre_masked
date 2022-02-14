
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysent {int dummy; } ;
struct syscall_helper_data {scalar_t__ registered; int old_sysent; int syscall_no; } ;


 int FUNC_0 (struct sysent*,int ,int *) ;

int
FUNC_1(struct sysent *VAR_0,
    struct syscall_helper_data *VAR_1)
{
 struct syscall_helper_data *VAR_2;

 for (VAR_2 = VAR_1; VAR_2->registered != 0; VAR_2++) {
  FUNC_0(VAR_0, VAR_2->syscall_no,
      &VAR_2->old_sysent);
  VAR_2->registered = 0;
 }
 return (0);
}
