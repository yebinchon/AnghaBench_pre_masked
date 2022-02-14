
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysent {int dummy; } ;
struct syscall_helper_data {scalar_t__ syscall_no; int registered; int old_sysent; int new_sysent; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sysent*,struct syscall_helper_data*) ;
 int FUNC_1 (struct sysent*,scalar_t__*,int *,int *,int) ;

int
FUNC_2(struct sysent *VAR_1,
    struct syscall_helper_data *VAR_2, int VAR_3)
{
 struct syscall_helper_data *VAR_4;
 int VAR_5;

 for (VAR_4 = VAR_2; VAR_4->syscall_no != VAR_0; VAR_4++) {
  VAR_5 = FUNC_1(VAR_1, &VAR_4->syscall_no,
      &VAR_4->new_sysent, &VAR_4->old_sysent, VAR_3);
  if (VAR_5 != 0) {
   FUNC_0(VAR_1, VAR_2);
   return (VAR_5);
  }
  VAR_4->registered = 1;
 }
 return (0);
}
